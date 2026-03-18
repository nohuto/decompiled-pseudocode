/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x180219890
 * Callers:
 *     ?GetResolution@CBitmap@@WCA@EAAJPEAN0@Z @ 0x1800ED290 (-GetResolution@CBitmap@@WCA@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = *((float *)this + 42);
    *a3 = *((float *)this + 43);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
