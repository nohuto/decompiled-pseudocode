/*
 * XREFs of ?OnMessage@BamoDataProviderProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x1800F1540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnMessage(
        BamoImpl::BamoDataProviderProxyImpl *this,
        const void *a2)
{
  int v2; // ebx
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 80LL),
         &IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_mC$gak3dNtwldfQAUjQi8$oQItA_BamoGroup$eddace5b,
         56LL);
  if ( v2 < 0 )
  {
    if ( v2 != -2018375668 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2209,
        (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v2,
        v4);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220C,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B2080CLL);
  }
  return (unsigned int)v2;
}
