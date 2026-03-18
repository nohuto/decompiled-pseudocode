/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x1801636B4
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D6DEC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800775D0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079DD0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::HandleDDAArrivalOrDeparture(CRenderTargetManager *this)
{
  CMILCOMBase **v1; // r14
  int v3; // ebx
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  CMILCOMBase *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  void *v11; // [rsp+60h] [rbp+8h] BYREF

  *((_BYTE *)this + 128) = 1;
  v1 = (CMILCOMBase **)*((_QWORD *)this + 1);
  v3 = 0;
  v4 = 0LL;
  v5 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 2) )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *v1;
      v11 = 0LL;
      if ( (int)CMILCOMBase::InternalQueryInterface(v6, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v11) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 40LL))(v11);
        v9 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1CBu, 0LL);
        if ( !v3 || v3 >= 0 && v9 < 0 )
          v3 = v9;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
      ++v1;
      ++v4;
    }
    while ( v4 != v5 );
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
