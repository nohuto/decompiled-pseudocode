/*
 * XREFs of ?PushStateToPrincipalOnPropertiesRefresh@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z @ 0x1801DFF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoDataProviderProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = *((unsigned int *)a3 + 9);
  v11 = *((unsigned int *)a3 + 10);
  v6 = CoreUICallSend(a2, &v10, 2LL, 6LL, 12, &unk_1803434A5);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8764LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  (*(void (__fastcall **)(BamoImpl::BamoDataProviderProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  v10 = *((unsigned int *)a3 + 9);
  v11 = *((unsigned int *)a3 + 10);
  v7 = CoreUICallSend(a2, &v10, 2LL, 6LL, 11, &unk_1803434A5);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8772LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
}
