/*
 * XREFs of MiMapImageInSystemSpace @ 0x14060C198
 * Callers:
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x14060FE30 (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x1408C9508 (MiOpenHotPatchFile.c)
 *     MiCreateSessionDriverProtos @ 0x1408D71D8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x14024B1C8 (MiControlAreaRequiresCharge.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 *     MiMapImageInSystemProcess @ 0x1408C11A4 (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 *v7; // rax
  unsigned int v8; // esi
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r14
  __int64 SessionId; // rax
  unsigned int v12; // r15d
  int v13; // r12d
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  _KPROCESS *v16; // r13
  int v17; // r14d
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v19[14]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v20 = 0LL;
  memset(v19, 0, 0x40uLL);
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 56) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (unsigned int)MiControlAreaRequiresCharge((__int64)a1) == 1 )
  {
    v7 = 0LL;
  }
  else
  {
    result = MiReferenceActiveSubsection(a1 + 16, 648, 0x11u);
    if ( (int)result < 0 )
      return result;
    v7 = a1;
  }
  *(_QWORD *)(a3 + 8) = v7;
  if ( (a2 & 1) != 0 )
    v8 = *(_DWORD *)(*a1 + 8);
  else
    v8 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v19[6] = (unsigned __int64)v8 << 12;
  v9 = MiReferenceControlAreaFile((__int64)a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v19[5] = v9 | 1;
  else
    v19[5] = a1;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  LODWORD(v19[7]) |= 0x20u;
  v21 = 0LL;
  v12 = a2 | 8;
  HIDWORD(v19[7]) = HIDWORD(v19[7]) & 0x80000002 | ((SessionId & 0x7FFFF) << 12) | 2;
  v22 = v8 << 12;
  v13 = MiMapViewInSystemSpace((__int64)v19, (__int64)&unk_140C4CB68, &v20, &v22, &v21, 1LL, v12);
  MiDereferenceControlAreaFile((__int64)a1, v10);
  if ( v13 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_10:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v20;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v8;
    return result;
  }
  if ( (v12 & 2) != 0 )
  {
    v18 = 0LL;
    v16 = *(_KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 176) + 104LL);
    KiStackAttachProcess(v16, 0LL, a3 + 32);
    v17 = MiMapImageInSystemProcess(a1, v12, &v20, &v18);
    if ( v17 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v16[1].ActiveProcessorsPadding[6];
      goto LABEL_10;
    }
    KiUnstackDetachProcess(a3 + 32, 0LL);
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v17;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v13;
  }
}
