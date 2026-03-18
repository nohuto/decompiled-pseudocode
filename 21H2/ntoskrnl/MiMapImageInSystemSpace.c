/*
 * XREFs of MiMapImageInSystemSpace @ 0x1406F3884
 * Callers:
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 *     MiParseComAndCetHeaders @ 0x1407E4D40 (MiParseComAndCetHeaders.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     MiCreateSessionDriverProtos @ 0x140981070 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 *     MiMapImageInSystemProcess @ 0x14096CE14 (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 *v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 SessionId; // rax
  unsigned int v12; // r15d
  int v13; // r12d
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  _KPROCESS *v16; // r13
  _DWORD *v17; // r9
  int v18; // r14d
  _QWORD v19[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+58h] BYREF

  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
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
  v13 = MiMapViewInSystemSpace((unsigned int)v19, (unsigned int)&v20, (unsigned int)&v22, (unsigned int)&v21, 1LL, v12);
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
    v22 = 0LL;
    v16 = *(_KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 176) + 104LL);
    KiStackAttachProcess(v16, 0LL, a3 + 32, v17);
    v18 = MiMapImageInSystemProcess(a1, v12, &v20, &v22);
    if ( v18 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v16[1].ActiveProcessors.StaticBitmap[26];
      goto LABEL_10;
    }
    KiUnstackDetachProcess(a3 + 32, 0LL);
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v18;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v13;
  }
}
