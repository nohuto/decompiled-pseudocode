/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x1408A5390
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x1408A0DE0 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x14063D9C4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14063F78C (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140918870 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int16 *v14; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v16[176]; // [rsp+80h] [rbp-80h] BYREF

  memset(v16, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.Buffer = (wchar_t *)v16;
    String.MaximumLength = 170;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpUnicodeStringToWstr(&v14, 0LL, (unsigned __int16 *)a1);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)v14,
                       3LL,
                       0LL,
                       (__int64)String.Buffer,
                       a2,
                       a8,
                       a6,
                       a5,
                       a7,
                       0);
  PnpUnicodeStringToWstrFree(v14, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
