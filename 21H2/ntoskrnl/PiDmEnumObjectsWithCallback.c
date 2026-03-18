/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x140779850
 * Callers:
 *     PiDmGetObjectList @ 0x1406DD014 (PiDmGetObjectList.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmListInit @ 0x1408449C8 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402DEB90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDmObjectIsEnumerable @ 0x140779800 (PiDmObjectIsEnumerable.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14077B33C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        unsigned int a1,
        __int64 (__fastcall *a2)(void *, __int64, _BYTE *),
        __int64 a3)
{
  int v6; // esi
  __int64 ObjectManagerForObjectType; // rax
  __int64 v8; // rdi
  const wchar_t *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v11; // rax
  void *v12; // rbx
  struct _KTHREAD *v13; // rax
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
    v9 = &word_140867F00;
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
  KeLeaveCriticalRegion();
  while ( v12 )
  {
    if ( PiDmObjectIsEnumerable((ULONG_PTR)v12) && (v6 = a2(v12, a3, v16), v6 < 0) || v16[0] )
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
    KeLeaveCriticalRegion();
    PiDmObjectRelease(P);
  }
  return (unsigned int)v6;
}
