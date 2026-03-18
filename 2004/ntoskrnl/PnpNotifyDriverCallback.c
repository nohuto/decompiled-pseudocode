/*
 * XREFs of PnpNotifyDriverCallback @ 0x140648974
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C7ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x140648470 (PnpNotifyTargetDeviceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14089C9C8 (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x1408AFE78 (PipKsrNotifyDrivers.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsGetCurrentProcessSessionId @ 0x14026D6D0 (PsGetCurrentProcessSessionId.c)
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rdi
  int v7; // eax
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v9; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // edi
  _KPROCESS *SessionById; // rax
  struct _DMA_ADAPTER *v17; // rsi
  int v18; // eax
  ULONG_PTR v19; // r8
  _OWORD v21[3]; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  memset(v21, 0, sizeof(v21));
  LOBYTE(v7) = MmIsSessionAddress((unsigned __int64)v3);
  if ( !v7 || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v9 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    LOBYTE(v12) = MmIsSessionAddress((unsigned __int64)v3);
    if ( !v12
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v13 = v3(a2, *(_QWORD *)(a1 + 40));
      v9 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v13;
      v14 = 0;
    }
    else
    {
      SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 20));
      v17 = (struct _DMA_ADAPTER *)SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v14 = MmAttachSession(SessionById, (__int64)v21);
      if ( v14 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v9 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v18;
        v14 = MmDetachSession((__int64)v17, (__int64)v21);
      }
      HalPutDmaAdapter(v17);
    }
    if ( CurrentIrql != v9 || SpareLong != CombinedApcDisable )
    {
      v19 = *(_QWORD *)(a1 + 48);
      if ( v19 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 48), (PVOID)(unsigned int)*(__int16 *)(v19 + 2));
        v19 = *(_QWORD *)(a1 + 48);
        if ( *(_WORD *)(v19 + 56) )
        {
          IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
          v19 = *(_QWORD *)(a1 + 48);
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, v19, v9, CombinedApcDisable);
    }
    return (unsigned int)v14;
  }
  return 3221225485LL;
}
