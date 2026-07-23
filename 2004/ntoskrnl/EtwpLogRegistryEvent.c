/*
 * XREFs of EtwpLogRegistryEvent @ 0x140933904
 * Callers:
 *     EtwpTraceRegistry @ 0x1409342D0 (EtwpTraceRegistry.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1403A68BC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

unsigned int *__fastcall EtwpLogRegistryEvent(
        unsigned int a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int16 v8; // r10
  unsigned int v9; // edx
  __int16 v10; // r10
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-19h]
  __int64 v17; // [rsp+50h] [rbp-11h]
  __int64 v18; // [rsp+58h] [rbp-9h]
  __int64 *v19; // [rsp+60h] [rbp-1h] BYREF
  int v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+6Ch] [rbp+Bh]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  int v23; // [rsp+78h] [rbp+17h]
  int v24; // [rsp+7Ch] [rbp+1Bh]

  v18 = 0LL;
  v21 = 0;
  v8 = a2;
  v9 = 1;
  v10 = v8 | 0x900;
  v16 = __PAIR64__(a4, a3);
  v20 = 24;
  v15 = *a6;
  v17 = a5;
  v19 = &v15;
  if ( a7 )
  {
    v11 = *(_QWORD *)(a7 + 8);
    v12 = *(_WORD *)a7 & 0xFFFE;
    if ( v11 )
    {
      if ( (*(_WORD *)a7 & 0xFFFE) != 0 )
      {
        v24 = 0;
        v9 = 2;
        v22 = v11;
        v23 = v12;
      }
    }
  }
  v13 = 2LL * v9;
  *(&v21 + 2 * v13) = 0;
  (&v19)[v13] = &EtwpNull;
  *(&v20 + 2 * v13) = 2;
  return EtwpLogSystemEventUnsafe(
           EtwpHostSiloState,
           (__int64)&v19,
           KeGetCurrentThread(),
           a1,
           v9 + 1,
           v10,
           0x501902u,
           0,
           v15,
           v16,
           v17,
           v18);
}
