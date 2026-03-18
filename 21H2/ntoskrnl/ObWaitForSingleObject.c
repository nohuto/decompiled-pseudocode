/*
 * XREFs of ObWaitForSingleObject @ 0x1407E0200
 * Callers:
 *     NtWaitForSingleObject @ 0x1407E0180 (NtWaitForSingleObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ObWaitForSingleObject(
        void *a1,
        KPROCESSOR_MODE a2,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v7; // ebx
  PVOID v8; // rdi
  struct _OBJECT_TYPE *v9; // r8
  __int64 DefaultObject; // rcx
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandleWithTag(a1, 0x100000u, 0LL, a2, 0x7457624Fu, &Object, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = Object;
  v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  DefaultObject = (__int64)v9->DefaultObject;
  if ( (DefaultObject & 1) == 0 )
  {
    if ( DefaultObject < 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( (DefaultObject & 2) != 0 )
  {
    if ( (v9->TypeInfo.WaitObjectFlagMask & *(_DWORD *)((_BYTE *)Object + v9->TypeInfo.WaitObjectFlagOffset)) != v9->TypeInfo.WaitObjectFlagMask )
    {
      DefaultObject -= 3LL;
LABEL_4:
      DefaultObject += (__int64)Object;
      goto LABEL_5;
    }
    DefaultObject = *(_QWORD *)((char *)Object + v9->TypeInfo.WaitObjectPointerOffset);
  }
  else
  {
    DefaultObject = *(_QWORD *)((char *)Object + DefaultObject - 1);
  }
LABEL_5:
  if ( ExCrossVmMutantObjectType != v9 )
  {
    v7 = KeWaitForSingleObject((PVOID)DefaultObject, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
    return (unsigned int)v7;
  }
  ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
  return 3221225508LL;
}
