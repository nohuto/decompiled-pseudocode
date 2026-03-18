/*
 * XREFs of VidSchTerminateDevice @ 0x1C0098CB0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0098844 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00F55F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0013948 (VidSchiDecrementDeviceReference.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C002CA90 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C003C0A8 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C0097E38 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C00A3490 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(char *P)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  void *v5; // rdx
  bool v6; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // ebx

  if ( P )
  {
    v2 = *((_QWORD *)P + 4);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 2880), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)P + 424, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v2 + 2880));
    VidSchFlushDevice((int)P);
    if ( (*((_DWORD *)P + 12) & 1) != 0 )
    {
      v5 = (void *)*((_QWORD *)P + 2);
      if ( v5 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v2 + 8), v5);
        v6 = bTracingEnabled == 0;
        *((_QWORD *)P + 2) = 0LL;
        if ( !v6 )
        {
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C006E941 & 4) != 0 )
            McTemplateK0ppqpttqpqp_EtwWriteTransfer(v8, &EventDestroyDevice, v9, CurrentProcessId, *(_QWORD *)(v2 + 16));
        }
      }
    }
    if ( *(_BYTE *)(v2 + 2212) )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 40); ++i )
      {
        if ( *(_DWORD *)&P[4 * i + 1072] )
        {
          *(_DWORD *)&P[4 * i + 1072] = 1;
          VidSchControlVSyncDevice(P, 4LL, 0LL, i);
        }
      }
    }
    else if ( *((_DWORD *)P + 268) )
    {
      *((_DWORD *)P + 268) = 1;
      VidSchControlVSyncDevice(P, 4LL, 0LL, 4294967293LL);
    }
    if ( P[240] )
      VidSchiCloseProcessAdapterInfo(*((_QWORD *)P + 5), v2);
    ExDeleteResourceLite((PERESOURCE)(P + 968));
    VidSchiDecrementDeviceReference(P, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
}
