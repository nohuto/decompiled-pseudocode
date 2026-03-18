/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x14077B3E4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406D6D28 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x140758458 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
