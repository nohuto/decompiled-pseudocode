/*
 * XREFs of MiReleaseSessionDriverCharges @ 0x140764F68
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140524E04 (MiReturnCrossPartitionControlAreaCharges.c)
 */

__int64 __fastcall MiReleaseSessionDriverCharges(__int64 a1)
{
  __int64 v3[19]; // [rsp+20h] [rbp-98h] BYREF

  memset(&v3[1], 0, 0x88uLL);
  if ( *(_BYTE *)(a1 + 65) == 1 )
    MiReturnCrossPartitionControlAreaCharges(*(_QWORD *)(a1 + 80));
  v3[0] = *(_QWORD *)(a1 + 80);
  return MiManageSubsectionView(v3, (_QWORD *)(a1 + 24), 4);
}
