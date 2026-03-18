/*
 * XREFs of NtAcquireProcessActivityReference @ 0x1406E1100
 * Callers:
 *     <none>
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140258040 (ExCpuSetResourceManagerAccessCheck.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PspCreateActivityReference @ 0x1406E1214 (PspCreateActivityReference.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtAcquireProcessActivityReference(_QWORD *a1, ULONG_PTR a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v6; // rcx
  __int64 result; // rax
  PVOID v8; // rbx
  int ActivityReference; // edi
  _QWORD v10[3]; // [rsp+48h] [rbp-20h] BYREF
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
    return 3221225713LL;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( (int)result >= 0 )
  {
    result = ObpReferenceObjectByHandleWithTag(a2, 0x63417350u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v8 = Object;
      ActivityReference = PspCreateActivityReference(Object, v10);
      if ( ActivityReference >= 0 )
        *a1 = v10[0];
      ObfDereferenceObjectWithTag(v8, 0x63417350u);
      return (unsigned int)ActivityReference;
    }
  }
  return result;
}
