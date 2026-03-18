/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180271170
 * Callers:
 *     ?GetSize@CBitmap@@WDA@EAAJPEAI0@Z @ 0x180106B30 (-GetSize@CBitmap@@WDA@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 26);
    *a3 = *((_DWORD *)this + 27);
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
