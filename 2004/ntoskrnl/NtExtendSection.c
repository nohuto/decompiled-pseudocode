/*
 * XREFs of NtExtendSection @ 0x140708170
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtExtendSection(HANDLE Handle, LARGE_INTEGER *a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+18h]
  LARGE_INTEGER v9; // [rsp+68h] [rbp+20h] BYREF

  v9.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    v9 = *a2;
  }
  else
  {
    v9 = *a2;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0x10u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection((__int64)Object, &v9, 0);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    *a2 = v9;
    return v8;
  }
  return result;
}
