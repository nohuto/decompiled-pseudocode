/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180216F50
 * Callers:
 *     ?GetSize@CBitmap@@WCA@EAAJPEAI0@Z @ 0x1800F0230 (-GetSize@CBitmap@@WCA@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 40);
    *a3 = *((_DWORD *)this + 41);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
