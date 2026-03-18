/*
 * XREFs of UsbhQueryBusRelations @ 0x1C0011530
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0014DE0 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036194 (SET_PDO_HWPNPSTATE.c)
 */

__int64 __fastcall UsbhQueryBusRelations(__int64 a1, IRP *a2)
{
  unsigned int v4; // r12d
  int ActivityIdIrp; // eax
  __int64 v6; // rdi
  __int128 *v7; // rdx
  const GUID *v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID *Information; // r15
  _DWORD *v14; // r8
  __int64 v15; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rbx
  _DWORD *v22; // rbx
  KIRQL v23; // al
  _QWORD *v24; // r15
  _QWORD *v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  KSPIN_LOCK **v28; // rbx
  KSPIN_LOCK *v29; // r15
  __int64 v30; // rax
  KIRQL v31; // dl
  unsigned int v32; // r14d
  __int128 *v33; // r8
  _DWORD *v34; // rcx
  const GUID *v35; // rdx
  __int128 v37; // xmm0
  NTSTATUS v38; // eax
  unsigned int v39; // r10d
  KSPIN_LOCK *v40; // rax
  KSPIN_LOCK *v41; // r12
  KIRQL v42; // al
  KSPIN_LOCK v43; // rcx
  KSPIN_LOCK **v44; // rcx
  PVOID *v45; // rbx
  __int64 v46; // rdi
  KIRQL v47; // [rsp+64h] [rbp-9Ch]
  int v48; // [rsp+68h] [rbp-98h]
  __int128 v49; // [rsp+108h] [rbp+8h] BYREF
  __int128 v50; // [rsp+118h] [rbp+18h] BYREF
  __int128 v51; // [rsp+128h] [rbp+28h] BYREF

  v4 = 0;
  v49 = 0LL;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v49);
  else
    ActivityIdIrp = -1073741823;
  v48 = ActivityIdIrp;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_81;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( ActivityIdIrp >= 0 )
    v7 = &v49;
  else
    v7 = 0LL;
  v50 = 0LL;
  if ( dword_1C006B650 )
  {
    if ( v7 )
    {
      v37 = *v7;
      v8 = (const GUID *)&v50;
      v50 = v37;
    }
    else
    {
      v8 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v8);
  }
  v9 = *(int *)(v6 + 1360);
  v10 = *(_DWORD *)(v6 + 1360);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 827474513;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = a2;
      *(_QWORD *)(v12 + 24) = v9;
      v10 = *(_DWORD *)(v6 + 1360);
    }
  }
  Information = (PVOID *)a2->IoStatus.Information;
  if ( Information )
    v4 = *(_DWORD *)Information;
  if ( v10 != 5 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = 0;
    v38 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), a2);
    Log(a1, 2, 1363300897, 0LL, v38);
    return v39;
  }
  v14 = *(_DWORD **)(a1 + 64);
  if ( !v14 )
    goto LABEL_81;
  if ( *v14 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  Usbh_SSH_Event(a1, 6LL, v14 + 346);
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
    goto LABEL_81;
  if ( *(_DWORD *)v15 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  ExDefaultNonPagedPoolType,
                                  8LL * (v4 + *(unsigned __int8 *)(v15 + 2938) - 1) + 16,
                                  0x42554855u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v32 = -1073741670;
    Log(a1, 2, 1363300915, (__int64)a2, 0LL);
    a2->IoStatus.Information = 0LL;
    if ( v4 )
    {
      v45 = Information + 1;
      v46 = v4;
      do
      {
        ObfDereferenceObject(*v45++);
        --v46;
      }
      while ( v46 );
    }
    if ( Information )
      ExFreePoolWithTag(Information, 0);
    a2->IoStatus.Status = -1073741670;
    IofCompleteRequest(a2, 0);
    goto LABEL_44;
  }
  v18 = *(_QWORD *)(a1 + 64);
  if ( !v18 )
    goto LABEL_81;
  if ( *(_DWORD *)v18 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  memset(PoolWithTag, 0, 8LL * (v4 + *(unsigned __int8 *)(v18 + 2938) - 1) + 16);
  if ( v4 )
  {
    *v17 = v4;
    memmove(v17 + 4, Information + 1, 8LL * v4);
  }
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 844251729;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = a2;
      *(_QWORD *)(v20 + 24) = v17;
    }
  }
  v21 = *(_DWORD **)(a1 + 64);
  if ( !v21 )
    goto LABEL_81;
  if ( *v21 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v22 = v21 + 346;
  v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v22[34] = 1;
  *((_BYTE *)v22 + 132) = v23;
  v22[22] = 2018460752;
  v22[23] = 8;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v22;
  *((_QWORD *)v22 + 3) = KeGetCurrentThread();
  v24 = *(_QWORD **)(v6 + 4808);
  for ( *(_DWORD *)(v6 + 904) = 0; v24 != (_QWORD *)(v6 + 4808); v24 = (_QWORD *)*v24 )
  {
    v25 = v24 - 165;
    Log(a1, 2, 1902277169, (__int64)(v24 - 165), 0LL);
    FdoExt(a1);
    if ( !v24[152] )
      v25[317] = MEMORY[0xFFFFF78000000014];
    ObfReferenceObject((PVOID)v25[105]);
    *(_QWORD *)&v17[2 * (*v17)++ + 2] = v25[105];
    v26 = PdoExt(v25[105]);
    v27 = ((unsigned __int8)v26[1] + 1) & 7;
    v26[1] = v27;
    v27 *= 32LL;
    *(_DWORD *)((char *)v26 + v27 + 16) = 8;
    *(_DWORD *)((char *)v26 + v27 + 20) = v26[281];
    *(_DWORD *)((char *)v26 + v27 + 24) = 3;
    v26[281] = 3;
  }
  v28 = (KSPIN_LOCK **)(v6 + 4824);
  while ( 1 )
  {
    v29 = *v28;
    if ( *v28 == (KSPIN_LOCK *)v28 )
      break;
    if ( (KSPIN_LOCK **)v29[1] != v28 )
      goto LABEL_69;
    v40 = (KSPIN_LOCK *)*v29;
    if ( *(KSPIN_LOCK **)(*v29 + 8) != v29 )
      goto LABEL_69;
    *v28 = v40;
    v41 = v29 - 165;
    v40[1] = (KSPIN_LOCK)v28;
    Log(a1, 2, 1902277170, (__int64)(v29 - 165), 0LL);
    SET_PDO_HWPNPSTATE(*(v29 - 60), 5LL, 9LL);
    *v29 = 0LL;
    v29[1] = 0LL;
    v42 = KeAcquireSpinLockRaiseToDpc(v29 + 186);
    v47 = v42;
    if ( *((_DWORD *)v29 + 374) == 1 )
    {
      v43 = v41[105];
      *((_DWORD *)v41 + 704) = 0;
      USBD_RemoveDeviceFromGlobalList(v43);
      v42 = v47;
    }
    KeReleaseSpinLock(v41 + 351, v42);
    v44 = *(KSPIN_LOCK ***)(v6 + 4848);
    if ( *v44 != (KSPIN_LOCK *)(v6 + 4840) )
LABEL_69:
      __fastfail(3u);
    *v29 = v6 + 4840;
    v29[1] = (KSPIN_LOCK)v44;
    *v44 = v29;
    *(_QWORD *)(v6 + 4848) = v29;
  }
  v30 = *(_QWORD *)(a1 + 64);
  if ( !v30 )
LABEL_81:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v30 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_DWORD *)(v30 + 1520) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v31 = *(_BYTE *)(v30 + 1516);
  *(_DWORD *)(v30 + 1472) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v31);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = (unsigned __int64)v17;
  v32 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), a2);
LABEL_44:
  if ( v48 >= 0 )
    v33 = &v49;
  else
    v33 = 0LL;
  v51 = 0LL;
  if ( dword_1C006B650 )
  {
    v34 = *(_DWORD **)(a1 + 64);
    if ( !v34 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v34 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    if ( v33 )
    {
      v35 = (const GUID *)&v51;
      v51 = *v33;
    }
    else
    {
      v35 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v35);
  }
  return v32;
}
