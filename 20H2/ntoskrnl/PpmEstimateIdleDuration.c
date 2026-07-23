/*
 * XREFs of PpmEstimateIdleDuration @ 0x140563F04
 * Callers:
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 * Callees:
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140287E80 (KeEnumerateNextProcessor.c)
 *     PpmGetIdleConstrainedMask @ 0x1403902F0 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeEstimateClockTickDuration @ 0x140512060 (KeEstimateClockTickDuration.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        int *a8,
        int *a9)
{
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  char v15; // dl
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int i; // eax
  unsigned __int64 v20; // rbx
  ULONG v21; // eax
  unsigned __int64 v22; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 *result; // rax
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 *v28; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v29; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v30[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+7Ah] [rbp-8Eh]
  __int16 v33; // [rsp+7Eh] [rbp-8Ah]
  _QWORD v34[22]; // [rsp+88h] [rbp-80h] BYREF

  v29 = a6;
  v28 = a7;
  v32 = 0;
  v33 = 0;
  memset(v34, 0, 0xA8uLL);
  v13 = *(_QWORD *)(a1 + 0x8000);
  v14 = -1LL;
  v27 = 0LL;
  LODWORD(v26) = 0;
  v15 = *(_BYTE *)(v13 + 540);
  v16 = 0;
  *a9 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v16 = 8;
    *a9 = 8;
  }
  if ( a2 )
    *a9 = v16 | 4;
  KeEstimateClockTickDuration(a1, v15, a2, a3, a4, (__int64 *)&v27, a8);
  v17 = *(_DWORD *)(a1 + 11684);
  v18 = 0;
  for ( i = v17; i; i >>= 4 )
    v18 += KeMaximumIncrement;
  v20 = v18;
  if ( !a2 && v17 )
  {
    v21 = KeMaximumIncrement / (v17 + 1);
    if ( !v21 )
      v21 = 1;
    v14 = v21;
  }
  if ( v27 <= v14 )
  {
    v14 = v27;
    v20 = v27;
  }
  else
  {
    if ( v27 < v18 )
      v20 = v27;
    *a9 |= 1u;
  }
  if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(a1 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v34) )
  {
    v22 = 0LL;
    v30[1] = (unsigned __int16 *)v34[1];
    v30[0] = (unsigned __int16 *)v34;
    v31 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v26, v30) )
    {
      Prcb = KeGetPrcb(v26);
      v24 = *(_QWORD *)(Prcb + 32808);
      if ( v24 != -1LL && v24 > v22 )
        v22 = *(_QWORD *)(Prcb + 32808);
    }
    if ( v22 && v20 + a4 > v22 )
    {
      *a9 |= 0x2000u;
      v20 = v22 > a4 ? (unsigned int)(v22 - a4) : 1LL;
      if ( v20 < v14 )
        v14 = v20;
    }
  }
  if ( v14 < a5 )
  {
    *a9 |= 0x1000u;
    v14 = a5;
    v20 = a5;
  }
  *v28 = v20;
  result = v29;
  *v29 = v14;
  return result;
}
