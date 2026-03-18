/*
 * XREFs of ?OnMessage@BamoDataSourceProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x1801DFEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::OnMessage(
        BamoImpl::BamoDataSourceProxyImpl *this,
        const void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 80LL),
         &IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_mC$gak3dNtwldfQAUjQi8$oQItA_BamoGroup$eddace5b,
         56LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 != -2018375668 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11327LL,
        (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v2,
        v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C42,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B2080CLL);
  }
  return v3;
}
