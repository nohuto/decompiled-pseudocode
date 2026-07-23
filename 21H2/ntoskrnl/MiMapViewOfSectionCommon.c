/*
 * XREFs of MiMapViewOfSectionCommon @ 0x140702350
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x1406C0BF8 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1407020E0 (NtMapViewOfSection.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall MiMapViewOfSectionCommon(
        __int64 a1,
        void *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        KPROCESSOR_MODE a9,
        __int64 *a10)
{
  int ProtectionMask; // eax
  int v14; // r8d
  void *v15; // r10
  PVOID *v16; // r15
  NTSTATUS result; // eax
  ACCESS_MASK v18; // edx
  NTSTATUS v19; // r13d
  __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  PVOID v26; // [rsp+48h] [rbp-40h] BYREF

  *(_OWORD *)a10 = 0LL;
  *((_OWORD *)a10 + 1) = 0LL;
  *((_OWORD *)a10 + 2) = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0xBFFFFFFF);
  *((_DWORD *)a10 + 6) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  *((_DWORD *)a10 + 6) = ProtectionMask & 7;
  v16 = (PVOID *)(a10 + 5);
  if ( v14 )
  {
    *v16 = v15;
    a10[4] = (__int64)a2;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               v15,
               a3 + 8,
               (POBJECT_TYPE)PsProcessType,
               a9,
               0x77566D4Du,
               (PVOID *)a10 + 5,
               0LL);
    if ( result < 0 )
      return result;
    v18 = *((_DWORD *)MmMakeSectionAccess + *((unsigned int *)a10 + 6));
    v26 = 0LL;
    v19 = ObReferenceObjectByHandle(a2, v18, MmSectionObjectType, a9, &v26, 0LL);
    a10[4] = (__int64)v26;
    if ( v19 < 0 )
    {
      ObfDereferenceObjectWithTag(*v16, 0x77566D4Du);
      return v19;
    }
  }
  if ( a9 )
  {
    v20 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    v21 = (__int64 *)a5;
    v22 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  else
  {
    v21 = (__int64 *)a5;
  }
  *a10 = *a4;
  a10[1] = *v21;
  if ( a6 )
  {
    if ( a9 )
    {
      v23 = a6;
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      *(_BYTE *)(v23 + 7) = *(_BYTE *)(v23 + 7);
    }
    a10[2] = *(_QWORD *)a6;
  }
  else
  {
    a10[2] = 0LL;
  }
  v24 = *a10;
  if ( (unsigned __int64)*a10 <= 0x7FFFFFFEFFFFLL )
  {
    v25 = a10[1];
    if ( v25 <= 0x7FFFFFFF0000LL - v24 && v24 + v25 <= 0xFFFFFFFFFFFFFFFFuLL >> a8 )
      return 0;
  }
  if ( !a3 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)a10[4]);
    ObfDereferenceObjectWithTag((PVOID)a10[5], 0x77566D4Du);
  }
  return -1073741811;
}
