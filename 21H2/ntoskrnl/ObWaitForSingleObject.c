/*
 * XREFs of ObWaitForSingleObject @ 0x140707C90
 * Callers:
 *     NtWaitForSingleObject @ 0x140707C10 (NtWaitForSingleObject.c)
 * Callees:
 *     ObpGetWaitObject @ 0x140350440 (ObpGetWaitObject.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ObWaitForSingleObject(
        void *a1,
        KPROCESSOR_MODE a2,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v7; // ebx
  char *v8; // rdi
  void *WaitObject; // r10
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandleWithTag(a1, 0x100000u, 0LL, a2, 0x7457624Fu, &Object, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = (char *)Object;
  WaitObject = (void *)ObpGetWaitObject((__int64)Object - 48);
  if ( !ExCrossVmMutantObjectType
    || (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v8 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v8 - 48) >> 8)] != ExCrossVmMutantObjectType )
  {
    v7 = KeWaitForSingleObject(WaitObject, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
    return (unsigned int)v7;
  }
  ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
  return 3221225508LL;
}
