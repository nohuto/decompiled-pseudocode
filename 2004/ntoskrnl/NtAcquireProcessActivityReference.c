/*
 * XREFs of NtAcquireProcessActivityReference @ 0x14071F010
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14034A120 (ExCpuSetResourceManagerAccessCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     PspCreateActivityReference @ 0x14071F118 (PspCreateActivityReference.c)
 */

int __fastcall NtAcquireProcessActivityReference(__int64 *a1, void *a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  int result; // eax
  PVOID v8; // rbx
  int ActivityReference; // edi
  __int64 v10[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( a3 )
    return -1073741583;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a2,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x63417350u,
               &Object,
               0LL);
    if ( result >= 0 )
    {
      v8 = Object;
      ActivityReference = PspCreateActivityReference(Object, (__int64)v10);
      if ( ActivityReference >= 0 )
        *a1 = v10[0];
      ObfDereferenceObjectWithTag(v8, 0x63417350u);
      return ActivityReference;
    }
  }
  return result;
}
