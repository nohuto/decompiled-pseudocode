/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1406A73E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402E5DD0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406A7650 (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406A7714 (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x1406A89EC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x1406A94DC (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  BugCheckParameter2 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  WORD1(v16) = v4;
  LOWORD(v16) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v16 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v15, 0LL, &v16);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v15, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
        PiDmObjectRelease((PVOID)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v15, &v16);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v16 + 1));
    return (unsigned int)Object;
  }
  return result;
}
