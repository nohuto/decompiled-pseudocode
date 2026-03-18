/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x1407899E4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiCreateRetpolineRelocationInformation @ 0x14070F7AC (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x140767098 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineRelocationInformation(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)P[6];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
