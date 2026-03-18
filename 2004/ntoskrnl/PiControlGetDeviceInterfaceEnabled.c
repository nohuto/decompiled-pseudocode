/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402024E0 (PiControlFreeUserModeCallersBuffer.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405D9020 (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405D90E4 (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x1405DAEAC (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  WORD1(v13) = v4;
  LOWORD(v13) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v13 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v12, 0LL, &v13);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v12, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PiDmObjectRelease((PVOID)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v12, &v13);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v13 + 1));
    return (unsigned int)Object;
  }
  return result;
}
