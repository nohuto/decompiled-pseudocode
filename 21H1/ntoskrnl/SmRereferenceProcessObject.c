/*
 * XREFs of SmRereferenceProcessObject @ 0x1402029F8
 * Callers:
 *     SmProcessStoreMemoryPriorityRequest @ 0x1405CEF78 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall SmRereferenceProcessObject(void *a1, __int64 a2, KPROCESSOR_MODE a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  PVOID v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x2000u, (POBJECT_TYPE)PsProcessType, a3, &v6, 0LL);
  *a4 = v6;
  return result;
}
