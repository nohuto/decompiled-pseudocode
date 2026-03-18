/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x140778FD4
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x1406EF118 (MiCreateRetpolineRelocationInformation.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiFreeImageLoadConfig @ 0x1407564E8 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
