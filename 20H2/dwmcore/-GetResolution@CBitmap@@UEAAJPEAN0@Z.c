/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x180215060
 * Callers:
 *     ?GetResolution@CBitmap@@WCI@EAAJPEAN0@Z @ 0x1800EFEB0 (-GetResolution@CBitmap@@WCI@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(struct _RTL_CRITICAL_SECTION *this, double *a2, double *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this + 3;
  EnterCriticalSection(this + 3);
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = *(float *)&this[4].OwningThread;
    *a3 = *((float *)&this[4].OwningThread + 1);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
