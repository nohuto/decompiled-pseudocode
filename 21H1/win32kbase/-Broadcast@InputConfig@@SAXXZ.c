/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1C00A52A4
 * Callers:
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x1C0052020 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C00AAB48 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0061924 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputConfig::Broadcast(void)
{
  InputExtensibilityCallout *v0; // rdi
  char *v1; // rbx
  CInputConfig *v2; // r15
  CInputConfig *v3; // rax
  CInputConfig *i; // r14
  _QWORD **v5; // rsi
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  char *v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  __int64 *v11; // rsi
  unsigned int v12; // ebp
  __int64 *j; // r9
  _OWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  _BYTE v20[216]; // [rsp+24h] [rbp-F4h] BYREF

  v0 = gpInputExtensibilityCallout;
  v1 = (char *)gpInputExtensibilityCallout + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = InputExtensibilityCallout::_CanSendMessageToDestinationInternal((__int64)v0, 7);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v0 )
  {
    v2 = gpInputConfig;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v3 = *(CInputConfig **)v2;
    for ( i = **(CInputConfig ***)v2; ; i = *(CInputConfig **)i )
    {
      if ( v3 == v2 || (v5 = (_QWORD **)((char *)v3 + 16), v3 == (CInputConfig *)-16LL) )
      {
LABEL_12:
        ExReleaseResourceLite(CInputConfig::slock);
        KeLeaveCriticalRegion();
        memset(v20, 0, sizeof(v20));
        InputExtensibilityCallout::CoreMsgSendMessage(v15, 7);
        return;
      }
      v6 = *((_DWORD *)v3 + 359);
      if ( v6 > 1 )
      {
        v19 = 200LL * (v6 - 1);
        if ( v19 > 0xFFFFFFFF || (v7 = v19 + 220, (unsigned int)v19 >= 0xFFFFFF24) )
        {
          v7 = 0;
          MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL);
        }
        if ( !v7 )
          goto LABEL_15;
      }
      else
      {
        v7 = 220;
      }
      v8 = (char *)Win32AllocPoolZInit(v7, 0x6F436E49u);
      v9 = (__int64)v8;
      if ( !v8 )
        goto LABEL_12;
      *(_DWORD *)v8 = 0;
      *(_QWORD *)(v8 + 4) = *v5;
      v10 = *((_DWORD *)v5 + 2);
      v11 = (__int64 *)(v5 + 178);
      *((_DWORD *)v8 + 4) = v6;
      v12 = 0;
      *((_DWORD *)v8 + 3) = v10;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = (__int64 *)*v11; j != v11 && j != (__int64 *)-16LL; j = (__int64 *)*j )
      {
        v14 = (_OWORD *)(200LL * v12 + v9 + 20);
        *v14 = *((_OWORD *)j + 1);
        v14[1] = *((_OWORD *)j + 2);
        v14[2] = *((_OWORD *)j + 3);
        v14[3] = *((_OWORD *)j + 4);
        v14[4] = *((_OWORD *)j + 5);
        v14[5] = *((_OWORD *)j + 6);
        v14[6] = *((_OWORD *)j + 7);
        v14 += 8;
        ++v12;
        *(v14 - 1) = *((_OWORD *)j + 8);
        *v14 = *((_OWORD *)j + 9);
        v14[1] = *((_OWORD *)j + 10);
        v14[2] = *((_OWORD *)j + 11);
        v14[3] = *((_OWORD *)j + 12);
        *((_QWORD *)v14 + 8) = j[26];
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      InputExtensibilityCallout::CoreMsgSendMessage(v16, 7);
      Win32FreePool(v9, v17, v18);
LABEL_15:
      v3 = i;
    }
  }
}
