/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x1403C870C
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407C1D6C (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( v3 < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    v3 = 0;
    *((_QWORD *)&CmpRegistryProcess + 1) = Object;
    *(_QWORD *)&CmpRegistryProcess = a2;
  }
  return (unsigned int)v3;
}
