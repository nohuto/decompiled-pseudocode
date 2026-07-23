/*
 * XREFs of NtMapViewOfSection @ 0x1405FEC70
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405FD590 (MiMapParametersInitialize.c)
 *     MiMapViewOfSectionCommon @ 0x1405FEEE0 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1405FF10C (MiValidateZeroBits.c)
 *     DbgkMapViewOfSection @ 0x1406B7680 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x14070BB14 (EtwTiLogMapExecView.c)
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
  unsigned __int8 v21; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v22; // [rsp+50h] [rbp-E8h]
  __int64 v23[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  NTSTATUS v26; // [rsp+88h] [rbp-B0h]
  _QWORD v27[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+158h] [rbp+20h] BYREF

  v28 = ZeroBits;
  memset(v27, 0, sizeof(v27));
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits(&v28);
  if ( result >= 0 )
  {
    v22 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
    v21 = v22;
    v14 = v28;
    v15 = Win32Protect;
    v16 = SectionOffset;
    v17 = ViewSize;
    result = MiMapViewOfSectionCommon(
               ProcessHandle,
               SectionHandle,
               0LL,
               BaseAddress,
               ViewSize,
               SectionOffset,
               Win32Protect,
               v28,
               v21,
               v23);
    if ( result < 0 )
    {
      ++dword_140C4E5E0;
      return result;
    }
    v18 = AllocationType;
    v19 = MiMapParametersInitialize(
            v27,
            (__int64)DmaAdapter[0],
            (__int64)DmaAdapter[1],
            v23[0],
            v23[1],
            AllocationType,
            v15,
            v14);
    if ( v19 < 0 )
    {
      v20 = v23[0] == 0;
    }
    else
    {
      v19 = MiMapViewOfSection(
              (__int64)DmaAdapter[0],
              (__int64)v27,
              (void **)v23,
              CommitSize,
              &v24,
              InheritDisposition,
              0);
      v26 = v19;
      if ( v19 >= 0 )
      {
        if ( (v27[9] & 4) != 0 )
          DbgkMapViewOfSection(DmaAdapter[1]);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v24) & 2) != 0 )
          EtwTiLogMapExecView(DmaAdapter[1], v22, v23[0], v23[1], v18, v15);
        *v17 = v27[3];
        *BaseAddress = (PVOID)v23[0];
        if ( v16 )
          v16->QuadPart = v24;
        goto LABEL_12;
      }
      v20 = v23[0] == 0;
    }
    if ( v20 )
      ++dword_140C4E5E0;
    else
      ++dword_140C4E5E4;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return v19;
  }
  return result;
}
