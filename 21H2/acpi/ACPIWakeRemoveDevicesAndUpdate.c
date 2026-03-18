/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34
 * Callers:
 *     ACPIWakeEmptyRequestQueue @ 0x1C002ECA8 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIRootPowerCallBack @ 0x1C002ED80 (ACPIRootPowerCallBack.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x1C002FABC (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C004F0F0 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C004FF20 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0051080 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWake @ 0x1C0059B80 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0059E04 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C005A010 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C001D5CC (ACPIGpeIndexToGpeRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C001FE48 (ACPIWriteGpeStatusRegister.c)
 *     ACPIWriteGpeEnableRegister @ 0x1C0020100 (ACPIWriteGpeEnableRegister.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0030BE0 (ACPIGpeIndexToByteIndex.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // bp
  __int64 *v5; // rdx
  unsigned __int16 *v6; // rdx
  unsigned int i; // r10d
  __int64 v8; // r9
  __int64 *v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  void **v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // rbx
  unsigned __int8 v20; // cl
  _BYTE *v21; // rax

  v4 = *((_BYTE *)AcpiInformation + 133);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( !v4 )
  {
    v6 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v6 = (unsigned __int16 *)AcpiInformation )
    {
      v8 = i++;
      *((_BYTE *)GpeCurEnable + v8) &= *((_BYTE *)GpeSpecialHandler + v8) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v8) | *((_BYTE *)GpeWakeHandler + v8));
    }
    memset(GpeWakeEnable, 0, v6[51]);
  }
  v9 = (__int64 *)AcpiPowerWaitWakeList;
  while ( v9 != &AcpiPowerWaitWakeList )
  {
    v5 = v9;
    v9 = (__int64 *)*v9;
    v11 = v5[5];
    if ( v11 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v5[25] + 104), 0LL);
      if ( !*(_BYTE *)(v5[25] + 68) )
      {
        v12 = (_QWORD *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5
          || (v13 = (void **)v5[1], *v13 != v5)
          || (*v13 = v12, v12[1] = v13, v14 = *(__int64 ***)(a2 + 8), *v14 != (__int64 *)a2) )
        {
          __fastfail(3u);
        }
        *v5 = a2;
        v5[1] = (__int64)v14;
        *v14 = v5;
        *(_QWORD *)(a2 + 8) = v5;
        *((_DWORD *)v5 + 14) &= ~0x40u;
        *((_DWORD *)v5 + 27) |= 2u;
      }
    }
    else if ( !v4 && (*(_QWORD *)(v11 + 1000) & 0x500000000LL) == 0 && *((_DWORD *)v5 + 26) >= AcpiMostRecentSleepState )
    {
      if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v11 + 504)) + GpeMap) )
      {
        v15 = *(_QWORD *)(v11 + 8);
        v5 = (__int64 *)&unk_1C006FB8B;
        v16 = (const char *)&unk_1C006FB8B;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v5 = *(__int64 **)(v11 + 608);
          if ( (v15 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x11u,
            0x18u,
            (__int64)&WPP_f2b70cf489233296687a8e467b880eb0_Traceguids,
            *(_DWORD *)(v11 + 504),
            v11,
            (const char *)v5,
            v16);
      }
      else
      {
        v17 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v11 + 504));
        v5 = (__int64 *)GpeWakeEnable;
        v18 = 1 << (*(_BYTE *)(v11 + 504) & 7);
        v19 = v17;
        v20 = *((_BYTE *)GpeWakeEnable + v17);
        if ( (v20 & (unsigned __int8)v18) == 0 )
        {
          *((_BYTE *)GpeWakeEnable + v17) = v18 | v20;
          ACPIWriteGpeStatusRegister(v17, v18);
          if ( ((unsigned __int8)v18 & *((_BYTE *)GpeEnable + v19)) != 0 )
          {
            if ( ((unsigned __int8)v18 & *((_BYTE *)GpeSpecialHandler + v19)) == 0 )
            {
              v21 = GpeWakeHandler;
LABEL_34:
              v21[v19] |= v18;
            }
          }
          else if ( ((unsigned __int8)v18 & *((_BYTE *)GpeCurEnable + v19)) == 0 )
          {
            *((_BYTE *)GpeIsLevel + v19) |= v18;
            v21 = GpeCurEnable;
            goto LABEL_34;
          }
        }
      }
    }
  }
  if ( !v4 )
  {
    v10 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      do
      {
        if ( AcpiPowerLeavingS0 )
        {
          v5 = (__int64 *)GpeCurEnable;
          *((_BYTE *)GpeCurEnable + v10) &= ~*((_BYTE *)GpeWakeEnable + v10);
        }
        else
        {
          *((_BYTE *)GpeCurEnable + v10) |= *((_BYTE *)GpeWakeEnable + v10) & (unsigned __int8)~*((_BYTE *)GpePending
                                                                                                + v10);
        }
        LOBYTE(v5) = *((_BYTE *)GpeCurEnable + v10);
        ACPIWriteGpeEnableRegister(v10++, v5);
        v5 = (__int64 *)*((unsigned __int16 *)AcpiInformation + 51);
      }
      while ( v10 < (unsigned int)v5 );
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
