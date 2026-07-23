/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x140629EF8
 * Callers:
 *     PiDmGetObjectList @ 0x14061F288 (PiDmGetObjectList.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmListInit @ 0x1407A2FE4 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 * Callees:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140252630 (RtlEnumerateGenericTableLikeADirectory.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14062BBA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x14062C53C (PiDmObjectIsEnumerable.c)
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
    v9 = &word_1407D7CE0;
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
