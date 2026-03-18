/*
 * XREFs of PnpNotifyDriverCallback @ 0x140646E68
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CCCDC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1406ECA80 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14073B830 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x1408A24F8 (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x1408B59A8 (PipKsrNotifyDrivers.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     PsGetCurrentProcessSessionId @ 0x140245DF0 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v8; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  ULONG_PTR SessionById; // rax
  struct _DMA_ADAPTER *v16; // rsi
  int v17; // eax
  ULONG_PTR v18; // r8
  _OWORD v20[3]; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  memset(v20, 0, sizeof(v20));
  if ( !MmIsSessionAddress((unsigned __int64)v3) || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v8 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    if ( !MmIsSessionAddress((unsigned __int64)v3)
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v12 = v3(a2, *(_QWORD *)(a1 + 40));
      v8 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v12;
      v13 = 0;
    }
    else
    {
      SessionById = MmGetSessionById(*(unsigned int *)(a1 + 20), v11);
      v16 = (struct _DMA_ADAPTER *)SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v13 = MmAttachSession(SessionById);
      if ( v13 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v8 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v17;
        v13 = MmDetachSession((__int64)v16, (__int64)v20);
      }
      HalPutDmaAdapter(v16);
    }
    if ( CurrentIrql != v8 || SpareLong != CombinedApcDisable )
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( v18 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 48), (PVOID)(unsigned int)*(__int16 *)(v18 + 2));
        v18 = *(_QWORD *)(a1 + 48);
        if ( *(_WORD *)(v18 + 56) )
        {
          IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
          v18 = *(_QWORD *)(a1 + 48);
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, v18, v8, CombinedApcDisable);
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
