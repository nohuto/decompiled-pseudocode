/*
 * XREFs of sub_1800345CC @ 0x1800345CC
 * Callers:
 *     sub_180033BC0 @ 0x180033BC0 (sub_180033BC0.c)
 * Callees:
 *     sub_180023B40 @ 0x180023B40 (sub_180023B40.c)
 *     sub_180024038 @ 0x180024038 (sub_180024038.c)
 *     sub_180025BFC @ 0x180025BFC (sub_180025BFC.c)
 *     sub_180026018 @ 0x180026018 (sub_180026018.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800345CC(__int64 a1, unsigned int a2)
{
  unsigned int v4; // r15d
  signed __int32 v5; // edx
  IUnknown *v6; // rcx
  __int64 *v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // eax
  LPSTREAM v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int128 *, __int64 *); // rcx
  IUnknown *v13; // rcx
  signed __int32 v15[12]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  LPSTREAM pStm; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  __int64 (__fastcall ***v19)(_QWORD, __int128 *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  v16 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v20 = 0LL;
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
      v6 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
      }
      if ( (**(int (__fastcall ***)(__int64, const IID *, IUnknown **))a1)(a1, &stru_180051438, &v20) >= 0 )
      {
        v19 = 0LL;
        v7 = (__int64 *)(a1 + 136);
        if ( (int)sub_180024038((_QWORD *)(a1 + 136), (__int64 *)&v19) >= 0 )
        {
          v21 = 0LL;
          sub_180026018(v19, &v21);
          v8 = v21;
          sub_180023B40(&pStm, v21, v20, (__int64)v19);
          v9 = (*v19)[3](v19, (__int128 *)v20, (__int64 *)a2);
          v4 = sub_180025BFC(v9, (__int64)v19);
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
        v12 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *)))(*v12)[2])(v12);
        }
      }
    }
  }
  v13 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
