/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140287380
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140287428 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // r9
  ULONG_PTR *v4; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1) )
    return 1LL;
  if ( v1 > 1 )
    v4 = v2 == 2
       ? *(ULONG_PTR **)(qword_140C51F48
                       + 8LL
                       * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 366))
       : &MiSystemPartition;
  else
    v4 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  if ( v4 == *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v3 + 62) & 1) == 0 || v2 == 1 || v2 == 4 )
    return 2LL;
  ++dword_140C52950;
  return 0LL;
}
