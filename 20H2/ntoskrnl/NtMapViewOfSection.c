/*
 * XREFs of NtMapViewOfSection @ 0x140621590
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140621360 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406217FC (MiValidateZeroBits.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140621DD0 (MiMapParametersInitialize.c)
 *     EtwTiLogMapExecView @ 0x1406DDC94 (EtwTiLogMapExecView.c)
 *     DbgkMapViewOfSection @ 0x1406EFF84 (DbgkMapViewOfSection.c)
 */

NTSTATUS __cdecl NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax
  __int64 v14; // rbx
  ULONG v15; // r13d
  PLARGE_INTEGER v16; // rdi
  PSIZE_T v17; // r14
  char v18; // r15
  NTSTATUS v19; // ebx
  bool v20; // zf
  unsigned __int8 v21; // [rsp+50h] [rbp-E8h]
  __int64 v22[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v23; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  NTSTATUS v25; // [rsp+88h] [rbp-B0h]
  _QWORD v26[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+158h] [rbp+20h] BYREF

  v27 = ZeroBits;
  memset(v26, 0, sizeof(v26));
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits(&v27);
  if ( result >= 0 )
  {
    v21 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
    v14 = v27;
    v15 = Win32Protect;
    v16 = SectionOffset;
    v17 = ViewSize;
    result = MiMapViewOfSectionCommon(
               (__int64)ProcessHandle,
               SectionHandle,
               0,
               (__int64 *)BaseAddress,
               (unsigned __int64)ViewSize,
               (unsigned __int64)SectionOffset,
               Win32Protect,
               v27,
               v21,
               v22);
    if ( result < 0 )
    {
      ++dword_140C4E660;
      return result;
    }
    v18 = AllocationType;
    v19 = MiMapParametersInitialize(v26, v22[1], AllocationType, v15, v14);
    if ( v19 < 0 )
    {
      v20 = v22[0] == 0;
    }
    else
    {
      v19 = MiMapViewOfSection(
              DmaAdapter[0],
              (unsigned int)v26,
              (unsigned int)v22,
              CommitSize,
              (__int64)&v23,
              InheritDisposition,
              0);
      v25 = v19;
      if ( v19 >= 0 )
      {
        if ( (v26[9] & 4) != 0 )
          DbgkMapViewOfSection(DmaAdapter[1]);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v23) & 2) != 0 )
          EtwTiLogMapExecView(DmaAdapter[1], v21, v22[0], v22[1], v18, v15);
        *v17 = v26[3];
        *BaseAddress = (PVOID)v22[0];
        if ( v16 )
          v16->QuadPart = v23;
        goto LABEL_12;
      }
      v20 = v22[0] == 0;
    }
    if ( v20 )
      ++dword_140C4E660;
    else
      ++dword_140C4E664;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return v19;
  }
  return result;
}
