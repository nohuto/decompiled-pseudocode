/*
 * XREFs of sub_180015A20 @ 0x180015A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180088444 @ 0x180088444 (sub_180088444.c)
 *     sub_18008DC0C @ 0x18008DC0C (sub_18008DC0C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180015A20(__int64 a1, __int128 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  signed __int32 v13; // eax
  __int128 v14; // [rsp+20h] [rbp-99h]
  __int128 v15; // [rsp+30h] [rbp-89h]
  _QWORD v16[4]; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v17[4]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-19h]
  __int128 v19; // [rsp+B0h] [rbp-9h]
  __int128 v20; // [rsp+C0h] [rbp+7h]
  __int128 v21; // [rsp+D0h] [rbp+17h]
  __int128 v22; // [rsp+E0h] [rbp+27h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+5Fh]

  v22 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v15 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v8 + 1, v8) )
      {
        *(_QWORD *)&v15 = *(_QWORD *)(v4 + 72);
        v6 = *(_QWORD *)(v4 + 80);
        *((_QWORD *)&v15 + 1) = v6;
        goto LABEL_3;
      }
    }
  }
  v6 = 0LL;
LABEL_3:
  sub_180066E84(v15 + 16, &v22);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  v18 = *a2;
  v19 = a2[1];
  v20 = a2[2];
  v21 = a2[3];
  v17[0] = v18;
  v17[1] = v19;
  v17[2] = v20;
  v17[3] = v21;
  if ( (unsigned __int8)sub_180088444(*(_QWORD *)(a1 + 32), v17) )
  {
    v16[2] = 0LL;
    v16[3] = 0LL;
    sub_18001277C(v16, (__int64)&unk_18020F708);
    v9 = *(_QWORD *)(a1 + 32);
    v14 = 0LL;
    v10 = *(_QWORD *)(v9 + 80);
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v10 + 8);
        if ( !v13 )
          break;
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v13 + 1, v13) )
        {
          *(_QWORD *)&v14 = *(_QWORD *)(v9 + 72);
          v11 = *(_QWORD *)(v9 + 80);
          *((_QWORD *)&v14 + 1) = v11;
          sub_18008DC0C(v14, v16);
          goto LABEL_15;
        }
      }
    }
    v11 = 0LL;
    sub_18008DC0C(0LL, v16);
LABEL_15:
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147024809;
    sub_18000DD78(retaddr, 122, (__int64)"SpectreNode.cpp", 0x80070057);
  }
  if ( BYTE8(v22) )
    sub_180067304(v22);
  return v7;
}
