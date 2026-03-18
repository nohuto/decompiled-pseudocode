/*
 * XREFs of PnpNotifyDriverCallback @ 0x14078D3DC
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14094488C (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140944ADC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PipKsrNotifyDrivers @ 0x140958B94 (PipKsrNotifyDrivers.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rdi
  BOOL IsSessionAddress; // eax
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v9; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v12; // eax
  int v13; // edi
  ULONG_PTR SessionById; // rax
  void *v16; // rsi
  int v17; // eax
  ULONG_PTR v18; // r8
  _OWORD v20[3]; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  memset(v20, 0, sizeof(v20));
  IsSessionAddress = MmIsSessionAddress((__int64)v3);
  if ( !IsSessionAddress || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v9 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    if ( !IsSessionAddress
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v12 = v3(a2, *(_QWORD *)(a1 + 40));
      v9 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v12;
      v13 = 0;
    }
    else
    {
      SessionById = MmGetSessionById(*(_DWORD *)(a1 + 20));
      v16 = (void *)SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v13 = MmAttachSession(SessionById);
      if ( v13 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v9 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v17;
        v13 = MmDetachSession((__int64)v16, (__int64)v20);
      }
      ObfDereferenceObject(v16);
    }
    if ( CurrentIrql != v9 || SpareLong != CombinedApcDisable )
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
      KeBugCheckEx(0xCAu, 0xAuLL, v18, v9, CombinedApcDisable);
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
