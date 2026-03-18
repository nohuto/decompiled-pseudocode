/*
 * XREFs of ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x180185FDC
 * Callers:
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180185F90 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ @ 0x180197C90 (-PushStateToPrincipalOnPlaceholderProxyReset@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800B1B50 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
        BamoImpl::BamoDataProviderProxyImpl *this)
{
  __int64 v2; // rcx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct IMessageCallSendHost *v8; // rax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
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
    v5 = *((_DWORD *)this + 10);
    v6 = *((unsigned int *)this + 6);
    v7 = *(unsigned int *)(v2 + 36);
    v8 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v2);
    LOWORD(v10) = 4;
    v12[0] = v7;
    v12[1] = v6;
    v9 = CoreUICallSend(v8, v12, 2LL, 0LL, v10, &unk_1802D1365, v5, v11);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2094,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v9);
      __debugbreak();
    }
  }
}
