/*
 * XREFs of sub_180023224 @ 0x180023224
 * Callers:
 *     sub_1800218A0 @ 0x1800218A0 (sub_1800218A0.c)
 * Callees:
 *     sub_180023B40 @ 0x180023B40 (sub_180023B40.c)
 *     sub_180024038 @ 0x180024038 (sub_180024038.c)
 *     sub_180025BFC @ 0x180025BFC (sub_180025BFC.c)
 *     sub_180026018 @ 0x180026018 (sub_180026018.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180023224(__int64 a1, unsigned int a2)
{
  unsigned int v4; // r15d
  signed __int32 v5; // edx
  __int64 v6; // rcx
  __int64 *v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // eax
  LPSTREAM v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  LPSTREAM pStm; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v16 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v21 = 0LL;
  v5 = *(_DWORD *)(a1 + 152);
  if ( v5 > 0 )
  {
    do
    {
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), v5 + 1, v5) )
        break;
      v5 = *(_DWORD *)(a1 + 152);
    }
    while ( v5 > 0 );
    if ( v5 > 0 )
    {
      v6 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( (**(int (__fastcall ***)(__int64, const IID *, __int64 *))a1)(a1, &stru_180051438, &v21) >= 0 )
      {
        v20 = 0LL;
        v7 = (__int64 *)(a1 + 136);
        if ( (int)sub_180024038(a1 + 136, &v20) >= 0 )
        {
          if ( qword_18005AD70 )
          {
            v19 = xmmword_180050AB0;
            (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, int))(*(_QWORD *)qword_18005AD70
                                                                                        + 72LL))(
              qword_18005AD70,
              1LL,
              2LL,
              &v19,
              a1,
              1);
          }
          v22 = 0LL;
          sub_180026018(v20, &v22);
          v8 = v22;
          sub_180023B40(&pStm);
          v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 24LL))(v20, v21, a2);
          v4 = sub_180025BFC(v9, v20, *(_QWORD *)(a1 + 144));
          if ( qword_18005AD70 )
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)qword_18005AD70 + 80LL))(
              qword_18005AD70,
              1LL,
              2LL,
              1LL);
          if ( v18 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v10 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 152), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v11 = *v7;
          *v7 = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
