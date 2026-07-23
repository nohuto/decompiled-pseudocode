/*
 * XREFs of NtMapViewOfSection @ 0x1407020E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTiLogMapExecView @ 0x14061CEF4 (EtwTiLogMapExecView.c)
 *     DbgkMapViewOfSection @ 0x1406C0FF4 (DbgkMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x140702350 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x14070257C (MiValidateZeroBits.c)
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140703390 (MiMapParametersInitialize.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  NTSTATUS result; // eax
  __int64 v16; // rbx
  ULONG v17; // r13d
  PLARGE_INTEGER v18; // rdi
  PSIZE_T v19; // r14
  ULONG v20; // r15d
  NTSTATUS v21; // ebx
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-118h]
  int v25[2]; // [rsp+28h] [rbp-110h]
  char v26; // [rsp+40h] [rbp-F8h]
  char PreviousMode; // [rsp+50h] [rbp-E8h]
  __int64 v28[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v29; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  NTSTATUS v31; // [rsp+88h] [rbp-B0h]
  _QWORD v32[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+158h] [rbp+20h] BYREF

  v33 = ZeroBits;
  memset(v32, 0, sizeof(v32));
  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits(&v33, v13, v14);
  if ( result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v26 = PreviousMode;
    v16 = v33;
    v17 = Win32Protect;
    v18 = SectionOffset;
    v19 = ViewSize;
    result = MiMapViewOfSectionCommon(
               ProcessHandle,
               SectionHandle,
               0LL,
               BaseAddress,
               ViewSize,
               SectionOffset,
               Win32Protect,
               v33,
               v26,
               v28);
    if ( result < 0 )
    {
      ++dword_140C4E820;
      return result;
    }
    v20 = AllocationType;
    v21 = MiMapParametersInitialize(v32, v28[1], AllocationType, v17, v16);
    if ( v21 < 0 )
    {
      v23 = v28[0] == 0;
    }
    else
    {
      v21 = MiMapViewOfSection(
              DmaAdapter[0],
              (unsigned int)v32,
              (unsigned int)v28,
              CommitSize,
              (__int64)&v29,
              InheritDisposition,
              0);
      v31 = v21;
      if ( v21 >= 0 )
      {
        if ( (v32[9] & 4) != 0 )
          DbgkMapViewOfSection((_KPROCESS *)DmaAdapter[1], (__int64)DmaAdapter[0], (void *)v28[0], v22, v24, 0, 0);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v29) & 2) != 0 )
        {
          v25[0] = v17;
          LODWORD(v24) = v20;
          EtwTiLogMapExecView((__int64)DmaAdapter[1], PreviousMode, v28[0], v28[1], v24, *(_QWORD *)v25);
        }
        *v19 = v32[3];
        *BaseAddress = (PVOID)v28[0];
        if ( v18 )
          v18->QuadPart = v29;
        goto LABEL_12;
      }
      v23 = v28[0] == 0;
    }
    if ( v23 )
      ++dword_140C4E820;
    else
      ++dword_140C4E824;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return v21;
  }
  return result;
}
