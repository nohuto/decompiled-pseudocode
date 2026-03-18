/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x14089C910
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _PnpGetObjectProperty @ 0x1406A9AFC (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1409119B0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v19; // [rsp+70h] [rbp-90h]
  _BYTE v20[176]; // [rsp+80h] [rbp-80h] BYREF

  memset(v20, 0, 0xAAuLL);
  v18 = 0LL;
  v17 = 0;
  if ( a3 )
  {
    v19 = v20;
    WORD1(v18) = 170;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v18) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     (__int64)v19,
                     a2,
                     (__int64)&v17,
                     a6,
                     a5,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( ObjectProperty >= 0 )
    *a8 = v17;
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
