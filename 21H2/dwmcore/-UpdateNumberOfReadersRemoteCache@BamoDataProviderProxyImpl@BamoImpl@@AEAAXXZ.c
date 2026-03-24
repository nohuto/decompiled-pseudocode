/*
 * XREFs of ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x18018204C
 * Callers:
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180182000 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ @ 0x180193E70 (-PushStateToPrincipalOnPlaceholderProxyReset@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800D6E30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016479C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
        BamoImpl::BamoDataProviderProxyImpl *this)
{
  __int64 v2; // rcx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  struct IMessageCallSendHost *v7; // rax
  unsigned int v8; // eax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 32LL) + 56LL) )
  {
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v2);
      if ( SendHost )
        v4 = (__int64)SendHost + 56;
      else
        v4 = 72LL;
      *(_BYTE *)v4 = 1;
      v2 = *((_QWORD *)this + 2);
    }
    v5 = *((unsigned int *)this + 6);
    v6 = *(unsigned int *)(v2 + 36);
    v7 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v2);
    v9[0] = v6;
    v9[1] = v5;
    v8 = CoreUICallSend(v7, v9, 2LL, 0LL, 4, &unk_1802D082D);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2094,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v8);
      __debugbreak();
    }
  }
}
