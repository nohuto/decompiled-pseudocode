/*
 * XREFs of sub_1800357F0 @ 0x1800357F0
 * Callers:
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800360B0 @ 0x1800360B0 (sub_1800360B0.c)
 *     sub_180036AEC @ 0x180036AEC (sub_180036AEC.c)
 * Callees:
 *     sub_180025BFC @ 0x180025BFC (sub_180025BFC.c)
 *     sub_180026018 @ 0x180026018 (sub_180026018.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800357F0(__int64 a1)
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
  signed __int32 v13[8]; // [rsp+0h] [rbp-59h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-11h] BYREF
  LPSTREAM ppstm; // [rsp+58h] [rbp-1h] BYREF
  HRESULT v17; // [rsp+60h] [rbp+7h]
  __int128 v18; // [rsp+70h] [rbp+17h] BYREF
  __int128 v19[3]; // [rsp+80h] [rbp+27h] BYREF
  signed __int32 v20; // [rsp+C0h] [rbp+67h] BYREF
  signed __int32 v21; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, __int128 *, __int64 *); // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v20 = -2;
  _InterlockedCompareExchange(&v20, *(_DWORD *)(a1 + 48), -2);
  if ( !v20 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v15[1] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( qword_18005AD70 )
    {
      _InterlockedCompareExchange(&v21, *(_DWORD *)(a1 + 48), v21);
      v18 = xmmword_180050AB0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, signed __int32))(*(_QWORD *)qword_18005AD70
                                                                                            + 56LL))(
        qword_18005AD70,
        0LL,
        2LL,
        &v18,
        a1,
        v21);
    }
    if ( (**(int (__fastcall ***)(__int64, __int128 *, LPUNKNOWN *))a1)(a1, &xmmword_1800523F8, &pUnk) >= 0 )
    {
      v22 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v22, *(_DWORD *)(a1 + 48), -2);
      v3 = *(_QWORD *)(a1 + 112);
      v23 = 0LL;
      if ( v3 )
        v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &unk_1800523E8, &v23);
      else
        v4 = -2147024809;
      if ( v4 >= 0 )
      {
        if ( qword_18005AD70 )
        {
          v19[0] = xmmword_180050AB0;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, _DWORD))(*(_QWORD *)qword_18005AD70
                                                                                        + 72LL))(
            qword_18005AD70,
            0LL,
            2LL,
            v19,
            a1,
            0);
        }
        v15[0] = 0LL;
        sub_180026018(v23, v15);
        v5 = pUnk;
        ppstm = 0LL;
        v17 = 0;
        v6 = v23;
        if ( v15[0] && v23 )
        {
          v17 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v17 >= 0 )
            v17 = CoMarshalInterface(ppstm, &stru_180051438, v5, 0, 0LL, 1u);
          v6 = v23;
        }
        else
        {
          v17 = -2147467262;
        }
        v7 = (*v6)[3](v6, (__int128 *)pUnk, (__int64 *)v22);
        v2 = sub_180025BFC(v7, (__int64)v23);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v8 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( qword_18005AD70 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18005AD70 + 80LL))(
            qword_18005AD70,
            0LL,
            2LL);
        if ( v17 >= 0 )
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
        if ( v15[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
      }
      v10 = v23;
      if ( v23 )
      {
        v23 = 0LL;
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
