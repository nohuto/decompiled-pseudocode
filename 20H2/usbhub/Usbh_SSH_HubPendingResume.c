/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x1C00140B0
 * Callers:
 *     UsbhFdoReturnPortStatus @ 0x1C00099C0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001B180 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhUnlockSSH @ 0x1C001CC84 (UsbhUnlockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C0059AEC (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  void *v14; // rcx
  unsigned int v15; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  if ( !a1 )
    goto LABEL_29;
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  switch ( a2 )
  {
    case 5u:
      v7 = *(_QWORD *)(a3 + 8);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        if ( !v8 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
        if ( *(_DWORD *)v8 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v7 + 64));
        v9 = *(unsigned int *)(v8 + 3456);
        *(_DWORD *)(v8 + 3124) = 5;
        *(_DWORD *)(32 * v9 + v8 + 3468) = 5;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *(_QWORD *)(v8 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v8 + 3128), 16, 1, 0);
        return (unsigned int)-1073741823;
      }
LABEL_29:
      UsbhTrapFatal_Dbg(0LL, 0LL);
    case 7u:
      v13 = FdoExt(*(_QWORD *)(a3 + 8));
      v10 = 0;
      v13[781] = 1;
      v13[8 * v13[864] + 867] = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v13 + 399) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 782), 16, 1, 0);
      break;
    case 8u:
      v12 = FdoExt(*(_QWORD *)(a3 + 8));
      v10 = 0;
      v12[781] = 5;
      v12[8 * v12[864] + 867] = 5;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v12 + 399) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 782), 16, 1, 0);
      UsbhSshResumeDownstream(a1, a3, 1);
      break;
    default:
      switch ( a2 )
      {
        case 1u:
          UsbhUnlockSSH(a3, 5LL);
          v10 = 0;
          break;
        case 6u:
          UsbhUnlockSSH(a3, 5LL);
          v14 = v6 + 846;
          v10 = 0;
          KeWaitForSingleObject(v14, Executive, 0, 0, 0LL);
          v15 = UsbhLockSSH(a3, a2);
          if ( v15 == 6 )
            v10 = -1073741823;
          UsbhUnlockSSH(a3, v15);
          break;
        case 9u:
          UsbhUnlockSSH(a3, 6LL);
          UsbhDisarmHubForWakeDetect(a1);
          v10 = 0;
          break;
        default:
          UsbhUnlockSSH(a3, 5LL);
          return (unsigned int)-1073741823;
      }
      break;
  }
  return v10;
}
