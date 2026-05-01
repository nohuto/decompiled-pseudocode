/*
 * XREFs of sub_180033320 @ 0x180033320
 * Callers:
 *     sub_180033910 @ 0x180033910 (sub_180033910.c)
 *     sub_180033BE0 @ 0x180033BE0 (sub_180033BE0.c)
 *     sub_1800349BC @ 0x1800349BC (sub_1800349BC.c)
 * Callees:
 *     sub_180025BFC @ 0x180025BFC (sub_180025BFC.c)
 *     sub_180026018 @ 0x180026018 (sub_180026018.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180033320(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  int v4; // eax
  IUnknown *v5; // rsi
  __int64 (__fastcall ***v6)(_QWORD, __int128 *, __int64 *); // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  LPSTREAM v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int128 *, __int64 *); // rcx
  LPUNKNOWN v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  LPSTREAM ppstm; // [rsp+40h] [rbp-10h] BYREF
  HRESULT v16; // [rsp+48h] [rbp-8h]
  signed __int32 v17; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+38h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, __int128 *, __int64 *); // [rsp+90h] [rbp+40h] BYREF
  LPUNKNOWN pUnk; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v17 = -2;
  _InterlockedCompareExchange(&v17, *(_DWORD *)(a1 + 48), -2);
  if ( !v17 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v14[1] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( (**(int (__fastcall ***)(__int64, __int128 *, LPUNKNOWN *))a1)(a1, &xmmword_180050AE8, &pUnk) >= 0 )
    {
      v18 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v18, *(_DWORD *)(a1 + 48), -2);
      v3 = *(_QWORD *)(a1 + 112);
      v19 = 0LL;
      if ( v3 )
        v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &unk_180050C98, &v19);
      else
        v4 = -2147024809;
      if ( v4 >= 0 )
      {
        v14[0] = 0LL;
        sub_180026018(v19, v14);
        v5 = pUnk;
        ppstm = 0LL;
        v16 = 0;
        v6 = v19;
        if ( v14[0] && v19 )
        {
          v16 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v16 >= 0 )
            v16 = CoMarshalInterface(ppstm, &stru_180051438, v5, 0, 0LL, 1u);
          v6 = v19;
        }
        else
        {
          v16 = -2147467262;
        }
        v7 = (*v6)[3](v6, (__int128 *)pUnk, (__int64 *)v18);
        v2 = sub_180025BFC(v7, (__int64)v19);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v8 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( v16 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v9 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v14[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
      }
      v10 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *)))(*v10)[2])(v10);
      }
    }
    v11 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
