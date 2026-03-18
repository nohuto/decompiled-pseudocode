/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x14063D318
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1406ED720 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x1407988C4 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x14023F480 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14063EFC0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x14063F95C (PiDmObjectIsEnumerable.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        unsigned int a1,
        __int64 (__fastcall *a2)(void *, __int64, _BYTE *),
        __int64 a3)
{
  int v6; // edi
  __int64 ObjectManagerForObjectType; // rax
  __int64 v8; // rsi
  const wchar_t *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v11; // rax
  void *v12; // rbx
  struct _KTHREAD *v13; // rcx
  PVOID v14; // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v20[14]; // [rsp+60h] [rbp-59h] BYREF

  v6 = 0;
  memset(v20, 0, sizeof(v20));
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = v20;
  v16[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  LODWORD(v20[3]) = 0;
  v8 = ObjectManagerForObjectType;
  HIDWORD(v20[3]) = a1;
  v9 = L"\\\\?\\";
  if ( a1 != 3 )
    v9 = &word_1407D36E0;
  v20[2] = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
  v11 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v8 + 104), 0LL, 0LL, 0, RestartKey, &DeleteCount, &P);
  if ( v11 )
  {
    v12 = *(void **)v11;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v11 + 8LL));
  }
  else
  {
    v12 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( v12 )
  {
    if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)v12) )
      v6 = a2(v12, a3, v16);
    if ( v6 < 0 || v16[0] )
    {
      PiDmObjectRelease(v12);
      return (unsigned int)v6;
    }
    P = v12;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
    v14 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v8 + 104), 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v14 )
    {
      v12 = *(void **)v14;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL));
    }
    else
    {
      v12 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PiDmObjectRelease(P);
  }
  return (unsigned int)v6;
}
