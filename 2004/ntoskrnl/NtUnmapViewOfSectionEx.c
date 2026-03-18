/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x140600D00
 * Callers:
 *     NtUnmapViewOfSection @ 0x1406FCBE0 (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 */

NTSTATUS __fastcall NtUnmapViewOfSectionEx(void *a1, unsigned __int64 a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  int v5; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 && a2 > 0x7FFFFFFEFFFFLL )
    return -1073741799;
  result = ObReferenceObjectByHandleWithTag(
             a1,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v5 = MiUnmapViewOfSection((ULONG_PTR)Object);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v5;
  }
  return result;
}
