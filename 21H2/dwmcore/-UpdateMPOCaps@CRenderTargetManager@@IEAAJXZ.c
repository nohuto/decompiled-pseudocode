/*
 * XREFs of ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x1800F5E78
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  volatile signed __int32 **v2; // r14
  int v3; // edi
  volatile signed __int32 **i; // rbx
  volatile signed __int32 *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebp
  volatile signed __int32 *v10; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 576) = 1;
  v2 = (volatile signed __int32 **)*((_QWORD *)this + 2);
  v3 = 0;
  for ( i = (volatile signed __int32 **)*((_QWORD *)this + 1); i != v2; ++i )
  {
    v5 = *i;
    v10 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v5, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v10) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 88LL))(v10);
      v8 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x1D0u);
      if ( !v3 || v3 >= 0 && v8 < 0 )
        v3 = v8;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
