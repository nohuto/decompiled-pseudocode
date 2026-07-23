/*
 * XREFs of PopDripsWatchdogCallbackHandler @ 0x1408EEF38
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EF0E0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x14056B370 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDripsWatchdogGetDeviceActiveTime @ 0x1405764F0 (PopDripsWatchdogGetDeviceActiveTime.c)
 *     PopDeviceConstraintsEnforced @ 0x14057F524 (PopDeviceConstraintsEnforced.c)
 *     PopDirectedDripsNotify @ 0x14078DCD8 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408E3720 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E47E4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x1408FA750 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

void __fastcall PopDripsWatchdogCallbackHandler(
        __int16 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  int v7; // ebp
  bool v8; // bl
  int v10; // ecx
  _OWORD *i; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  int v14; // ecx
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = 0LL;
  v7 = a1 & 0x100;
  v8 = 0;
  if ( PopDirectedDripsTimeout && a4 / 0x989680 >= (unsigned int)PopDirectedDripsTimeout || a6 )
    v8 = (byte_140C50000 & 1) == 0 || (a1 & 1) != 0;
  if ( ((a1 & 0x80) != 0 || (a1 & 0x100) != 0 || v8)
    && PopDeviceConstraintsEnforced()
    && (int)PopFxBuildDripsBlockingDeviceList(a3, v15) >= 0 )
  {
    if ( v8 )
    {
      v10 = 4;
    }
    else
    {
      if ( !v7 )
      {
LABEL_17:
        for ( i = *(_OWORD **)&v15[0]; i != v15; i = *(_OWORD **)i )
        {
          if ( v8
            || v7
            && ((PopDripsWatchdogGetDeviceActiveTime((__int64)i - 872),
                 !PopFxIsDirectedPowerTransitionSupported((__int64)i - 872, 0LL))
              ? (v13 = (unsigned int)PopFxDirectedFxDefaultTimeout)
              : (v13 = *((unsigned int *)i + 10)),
                v12 >= v13) )
          {
            PopDirectedDripsMarkCandidateDevice((__int64)i - 872);
          }
          else
          {
            PopDripsWatchdogInvokeDeviceCallbacks((char *)i - 872, a2);
          }
        }
        if ( v8 )
        {
          v14 = 5;
        }
        else
        {
          if ( !v7 )
          {
LABEL_33:
            PopFxDestroyDripsBlockingDeviceList(v15);
            return;
          }
          v14 = 3;
        }
        PopDirectedDripsNotify(v14, (char *)&a5);
        goto LABEL_33;
      }
      v10 = 2;
    }
    PopDirectedDripsNotify(v10, (char *)&a5);
    goto LABEL_17;
  }
}
