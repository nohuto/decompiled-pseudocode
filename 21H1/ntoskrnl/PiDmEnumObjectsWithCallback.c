/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1406A7068
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1406E9F58 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x14078A2B4 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402E5B90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406A8D10 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x1406A96AC (PiDmObjectIsEnumerable.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // rcx
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE v22[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v26[14]; // [rsp+60h] [rbp-59h] BYREF

  v6 = 0;
  memset(v26, 0, sizeof(v26));
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = v26;
  v22[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  LODWORD(v26[3]) = 0;
  v8 = ObjectManagerForObjectType;
  HIDWORD(v26[3]) = a1;
  v9 = L"\\\\?\\";
  if ( a1 != 3 )
    v9 = &word_1407C1980;
  v26[2] = v9;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  while ( v12 )
  {
    if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)v12) )
      v6 = a2(v12, a3, v22);
    if ( v6 < 0 || v22[0] )
    {
      PiDmObjectRelease(v12);
      return (unsigned int)v6;
    }
    P = v12;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)v8, 1u);
    v17 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v8 + 104), 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v17 )
    {
      v12 = *(void **)v17;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v17 + 8LL));
    }
    else
    {
      v12 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
    PiDmObjectRelease(P);
  }
  return (unsigned int)v6;
}
