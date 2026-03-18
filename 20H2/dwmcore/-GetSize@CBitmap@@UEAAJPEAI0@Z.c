/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x1802150F0
 * Callers:
 *     ?GetSize@CBitmap@@WCI@EAAJPEAI0@Z @ 0x1800EFEC0 (-GetSize@CBitmap@@WCI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(struct _RTL_CRITICAL_SECTION *this, LONG *a2, LONG *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this + 3;
  EnterCriticalSection(this + 3);
  v6 = 0;
  if ( a2 && a3 )
  {
    *a2 = this[4].LockCount;
    *a3 = this[4].RecursionCount;
  }
  else
  {
    v6 = -2147024809;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
