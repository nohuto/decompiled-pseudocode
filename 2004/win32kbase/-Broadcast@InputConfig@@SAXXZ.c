/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1C000F5E4
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000C574 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x1C005FB60 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C006A854 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputConfig::Broadcast(void)
{
  InputExtensibilityCallout *v0; // rdi
  char *v1; // rbx
  CInputConfig *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  CInputConfig *v6; // rax
  CInputConfig *i; // r14
  _QWORD **v8; // rsi
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  char *v11; // rax
  char *v12; // rdi
  int v13; // ecx
  __int64 *v14; // rsi
  int v15; // ebp
  __int64 *j; // r9
  char *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _QWORD v21[28]; // [rsp+20h] [rbp-F8h] BYREF

  v0 = gpInputExtensibilityCallout;
  v1 = (char *)gpInputExtensibilityCallout + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v0, 7LL);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v0 )
  {
    v2 = gpInputConfig;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v6 = *(CInputConfig **)v2;
    for ( i = **(CInputConfig ***)v2; ; i = *(CInputConfig **)i )
    {
      if ( v6 == v2 || (v8 = (_QWORD **)((char *)v6 + 16), v6 == (CInputConfig *)-16LL) )
      {
LABEL_12:
        ExReleaseResourceLite(CInputConfig::slock);
        KeLeaveCriticalRegion();
        memset((char *)v21 + 4, 0, 0xD8uLL);
        LODWORD(v21[0]) = 1;
        ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
          v18,
          7LL,
          v21,
          220LL);
        return;
      }
      v9 = *((_DWORD *)v6 + 359);
      if ( v9 > 1 )
      {
        v20 = 200LL * (v9 - 1);
        if ( v20 > 0xFFFFFFFF || (v10 = v20 + 220, (unsigned int)v20 >= 0xFFFFFF24) )
        {
          v10 = 0;
          MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL, v3, v4, v5);
        }
        if ( !v10 )
          goto LABEL_15;
      }
      else
      {
        v10 = 220;
      }
      v11 = (char *)Win32AllocPoolZInit(v10, 1866690121LL);
      v12 = v11;
      if ( !v11 )
        goto LABEL_12;
      *(_DWORD *)v11 = 0;
      *(_QWORD *)(v11 + 4) = *v8;
      v13 = *((_DWORD *)v8 + 2);
      v14 = (__int64 *)(v8 + 178);
      *((_DWORD *)v11 + 4) = v9;
      v15 = 0;
      *((_DWORD *)v11 + 3) = v13;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = (__int64 *)*v14; j != v14 && j != (__int64 *)-16LL; j = (__int64 *)*j )
      {
        v17 = &v12[200 * v15 + 20];
        *(_OWORD *)v17 = *((_OWORD *)j + 1);
        *((_OWORD *)v17 + 1) = *((_OWORD *)j + 2);
        *((_OWORD *)v17 + 2) = *((_OWORD *)j + 3);
        *((_OWORD *)v17 + 3) = *((_OWORD *)j + 4);
        *((_OWORD *)v17 + 4) = *((_OWORD *)j + 5);
        *((_OWORD *)v17 + 5) = *((_OWORD *)j + 6);
        *((_OWORD *)v17 + 6) = *((_OWORD *)j + 7);
        v17 += 128;
        ++v15;
        *((_OWORD *)v17 - 1) = *((_OWORD *)j + 8);
        *(_OWORD *)v17 = *((_OWORD *)j + 9);
        *((_OWORD *)v17 + 1) = *((_OWORD *)j + 10);
        *((_OWORD *)v17 + 2) = *((_OWORD *)j + 11);
        *((_OWORD *)v17 + 3) = *((_OWORD *)j + 12);
        *((_QWORD *)v17 + 8) = j[26];
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      InputExtensibilityCallout::CoreMsgSendMessage(v19, 7LL, v12, v10, v21[0]);
      Win32FreePool(v12);
LABEL_15:
      v6 = i;
    }
  }
}
