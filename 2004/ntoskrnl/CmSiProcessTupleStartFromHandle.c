/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x1403AB79C
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140781E8C (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
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
