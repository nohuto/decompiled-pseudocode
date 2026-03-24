/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00194A8
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01622B0 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C00084F4 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  unsigned int v2; // ebx
  char *v5; // r14
  DMMVIDPNSOURCEMODESET *v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v17);
  }
  v5 = (char *)this + 120;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v18 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v18 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v18 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v18);
    return 3223192400LL;
  }
  else
  {
    v22 = 0LL;
    v6 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v6, this);
    else
      v7 = 0LL;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v22, (__int64)v7);
    v12 = v22;
    if ( v22 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v22 + 24))(v22 + 24) )
      {
        v22 = 0LL;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)this + 15, v12);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v15 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v5;
        if ( *(_DWORD *)(v15 + 96) != 2 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v14, v13);
          WdLogEvent5_WdAssertion(v21);
        }
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v20[3] = v12;
        v20[4] = *((unsigned int *)this + 6);
        v20[5] = *(int *)(v12 + 40);
        WdLogEvent5_WdDmmEvent(v20);
        v2 = *(_DWORD *)(v12 + 40);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v19 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v19);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v22, 0LL);
    return v2;
  }
}
