/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x180050A60
 * Callers:
 *     ?GetResolution@CBitmap@@WBI@EAAJPEAN0@Z @ 0x1800561E0 (-GetResolution@CBitmap@@WBI@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180050B8C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (char *)this + 96;
  v9 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((float *)this + 44);
    *a3 = *((float *)this + 45);
  }
  else
  {
    v4 = -2147024809;
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v9);
  return v4;
}
