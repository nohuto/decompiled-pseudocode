/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x140768F28
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x140768EE0 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406A7714 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406A94DC (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1409119B0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  WCHAR *v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v19, 0, 0xAAuLL);
  v17 = 0LL;
  v16 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    WORD1(v17) = 170;
    v18 = v19;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v17) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr((__int16 **)&v16, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v16, 3, 0LL, (__int64)v18, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v16, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
