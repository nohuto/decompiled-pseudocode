/*
 * XREFs of UsbhRefPdoDeviceHandle @ 0x1C0015C80
 * Callers:
 *     UsbhSetPdoIdleReady @ 0x1C0012EFC (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x1C0013058 (UsbhClearPdoIdleReady.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0016EC0 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C00177A8 (UsbhSyncSendCommandToDevice.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A530 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C00301E8 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003DC2C (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C003E230 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048FE8 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1C0049400 (UsbhPdoQueryWmiDataBlock.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0056620 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0057714 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoSetDeviceData @ 0x1C0057830 (UsbhPdoSetDeviceData.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhRefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // rax
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, __int64, __int64, _QWORD); // rax
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8

  v4 = a4;
  if ( !a1 )
    goto LABEL_33;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_32;
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( !a2 )
LABEL_33:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = *(int *)(v11 + 1152);
  v13 = *(_DWORD *)(v11 + 1152);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 824923716;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a2;
      *(_QWORD *)(v15 + 24) = v12;
      v13 = *(_DWORD *)(v11 + 1152);
    }
  }
  if ( v13 == 2 )
  {
    v16 = *(_QWORD *)(v11 + 1160);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 724260420;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = v4;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      if ( *(_DWORD *)v19 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v20 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v19 + 4464);
      if ( v20 )
      {
        v21 = v20(*(_QWORD *)(v19 + 4232), v16, a3, (unsigned int)v4);
        if ( v21 >= 0 )
        {
          v22 = *(_QWORD *)(v11 + 1160);
LABEL_19:
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v23 = *(_QWORD *)(a1 + 64);
            if ( v23 )
            {
              v24 = *(_QWORD *)(v23 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
              *(_DWORD *)v24 = 841700932;
              *(_QWORD *)(v24 + 16) = v21;
              *(_QWORD *)(v24 + 8) = 0LL;
              *(_QWORD *)(v24 + 24) = v22;
            }
          }
          goto LABEL_22;
        }
      }
      else
      {
        v21 = -1073741822;
      }
      v22 = 0LL;
      goto LABEL_19;
    }
LABEL_32:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  if ( v13 <= 1 )
    Log(a1, 256, 1146497825, a2, (int)v13);
  v22 = 0LL;
LABEL_22:
  KeReleaseSpinLock(v9, v10);
  return v22;
}
