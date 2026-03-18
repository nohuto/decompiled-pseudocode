/*
 * XREFs of NtAssignProcessToJobObject @ 0x1406880D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTraceJobAssignProcess @ 0x1409E22CC (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall NtAssignProcessToJobObject(void *a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rbx
  KPROCESSOR_MODE PreviousMode; // bp
  int v5; // esi
  PVOID v6; // rdi
  __int64 v7; // r8
  PVOID v8; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v11; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v11, 0LL);
  if ( v5 >= 0 )
  {
    if ( a2 == -7LL )
    {
      v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[16];
      goto LABEL_4;
    }
    v5 = ObpReferenceObjectByHandleWithTag(a2, 0x624A7350u, (__int64)&Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
LABEL_4:
      v6 = Object;
      v7 = v2;
      v8 = v11;
      v5 = PsAssignProcessToJobObject(v11, (__int64)Object, v7);
      goto LABEL_5;
    }
  }
  v6 = Object;
  v8 = v11;
LABEL_5:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v8, v6, (unsigned int)v5);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x624A7350u);
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v5;
}
