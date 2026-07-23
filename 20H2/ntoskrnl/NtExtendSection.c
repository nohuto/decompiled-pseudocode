/*
 * XREFs of NtExtendSection @ 0x1406DA9C0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v8; // [rsp+60h] [rbp+18h]
  LONGLONG QuadPart; // [rsp+68h] [rbp+20h] BYREF

  QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)NewSectionSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewSectionSize < 0x7FFFFFFF0000LL )
      v6 = (__int64)NewSectionSize;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    QuadPart = NewSectionSize->QuadPart;
  }
  else
  {
    QuadPart = NewSectionSize->QuadPart;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(SectionHandle, 0x10u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection(Object, &QuadPart, 0LL);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    NewSectionSize->QuadPart = QuadPart;
    return v8;
  }
  return result;
}
