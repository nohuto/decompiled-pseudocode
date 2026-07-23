/*
 * XREFs of MiReferenceAweHandle @ 0x14054DE8C
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D5D08 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x140320D98 (MiAweControlArea.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MiReferenceAweHandle(HANDLE Handle, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4, _QWORD *a5)
{
  _QWORD *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v10; // rax
  void *v11; // r8
  int v12; // r9d
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = a5;
  v14 = 0LL;
  Object = 0LL;
  *a5 = 0LL;
  if ( Handle == (HANDLE)-1LL )
    return 0;
  if ( ObReferenceObjectByHandleWithTag(Handle, a2, MmSectionObjectType, a3, 0x68506D4Du, &Object, 0LL) < 0 )
  {
    result = ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, a3, 0x68506D4Du, &v14, 0LL);
    if ( result >= 0 )
      *a4 = v14;
  }
  else
  {
    v10 = MiSectionControlArea((__int64)Object);
    if ( MiAweControlArea(v10) )
    {
      *v6 = v11;
      return v12;
    }
    else
    {
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
      return -1073741816;
    }
  }
  return result;
}
