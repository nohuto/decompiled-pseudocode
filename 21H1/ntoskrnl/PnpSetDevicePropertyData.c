/*
 * XREFs of PnpSetDevicePropertyData @ 0x14072C26C
 * Callers:
 *     IoSetDevicePropertyData @ 0x14072C410 (IoSetDevicePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x14037B7FC (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x14075E150 (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1409119B0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE *v19; // [rsp+58h] [rbp-F0h]
  _BYTE v20[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v20, 0, 0xAAuLL);
  v18 = 0LL;
  if ( a1 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v10 = 0LL;
  if ( !v10 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    WORD1(v18) = 170;
    v19 = v20;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v18) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v12 = PiPnpRtlSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          *(const WCHAR **)(v10 + 48),
          1,
          0LL,
          (__int64)v19,
          a2,
          a5,
          a7,
          a6,
          0);
  if ( v12 >= 0 && *(_DWORD *)(a2 + 16) == 2 )
  {
    v17 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v17 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v17 )
      v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v12 == -1073741275 )
    v12 = -1073741772;
  if ( *(int *)(v10 + 300) >= 771 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v12;
}
