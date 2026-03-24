/*
 * XREFs of VidSchTerminateDevice @ 0x1C0081B10
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00816A0 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00D2C00 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0011678 (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0022578 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C002D364 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C0080F38 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchFlushDevice @ 0x1C0081F00 (VidSchFlushDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C008AC50 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(char *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  void *v7; // rdx
  int v8; // ebp
  int v9; // ebx
  HANDLE CurrentProcessId; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 i; // rbx

  if ( P )
  {
    v4 = *((_QWORD *)P + 4);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2784), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)P + 422, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v4 + 2784));
    VidSchFlushDevice((int)P);
    if ( (*((_DWORD *)P + 12) & 1) != 0 )
    {
      v7 = (void *)*((_QWORD *)P + 2);
      if ( v7 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v4 + 8), v7);
        *((_QWORD *)P + 2) = 0LL;
        if ( bTracingEnabled )
        {
          v8 = *((_DWORD *)P + 12) >> 2;
          v9 = *((_DWORD *)P + 12) >> 1;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ppqpttq_EtwWriteTransfer(
              v11,
              &EventDestroyDevice,
              v12,
              CurrentProcessId,
              *(_QWORD *)(v4 + 16),
              -1,
              P,
              v9 & 1,
              v8 & 1);
        }
      }
    }
    if ( *(_BYTE *)(v4 + 2132) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 40); i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)&P[4 * i + 1072] )
        {
          *(_DWORD *)&P[4 * i + 1072] = 1;
          VidSchControlVSyncDevice(P, 4LL, 0LL, (unsigned int)i);
        }
      }
    }
    else if ( *((_DWORD *)P + 268) )
    {
      *((_DWORD *)P + 268) = 1;
      VidSchControlVSyncDevice(P, 4LL, 0LL, 4294967293LL);
    }
    if ( P[240] )
      VidSchiCloseProcessAdapterInfo(*((_QWORD *)P + 5), (unsigned int *)v4);
    ExDeleteResourceLite((PERESOURCE)(P + 968));
    VidSchiDecrementDeviceReference(P, 0);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
