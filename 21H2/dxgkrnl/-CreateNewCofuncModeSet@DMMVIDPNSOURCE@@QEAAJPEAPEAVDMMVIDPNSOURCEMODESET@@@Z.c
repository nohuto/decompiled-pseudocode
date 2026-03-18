/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001D494
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01DE7A0 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C000FDC8 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCEMODESET **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  char *v7; // r15
  __int64 v8; // r8
  DMMVIDPNSOURCEMODESET *v9; // rax
  DMMVIDPNSOURCEMODESET *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v7 = (char *)this + 120;
  *a2 = 0LL;
  v8 = *((_QWORD *)this + 15);
  if ( v8 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v8);
    return 3223192400LL;
  }
  else
  {
    v14 = 0LL;
    v9 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, 256LL, a4);
    if ( v9 )
      v10 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v9, this);
    else
      v10 = 0LL;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v14, (__int64)v10);
    v11 = v14;
    if ( v14 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v14 + 24))(v14 + 24) )
      {
        v14 = 0LL;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)this + 15, v11);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 96LL));
        v12 = *(_QWORD *)v7;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v7;
        if ( *(_DWORD *)(v12 + 96) != 2 )
          WdLogSingleEntry0(1LL);
      }
      else
      {
        WdLogSingleEntry3(7LL, v11, *((unsigned int *)this + 6), *(int *)(v11 + 40));
        v4 = *(_DWORD *)(v11 + 40);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 152LL);
      v4 = -1073741801;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v14, 0LL);
    return v4;
  }
}
