/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800E37D0
 * Callers:
 *     ?GetStride@CBitmapLock@@WBI@EAAJPEAI@Z @ 0x180108070 (-GetStride@CBitmapLock@@WBI@EAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 72) )
    {
      v5 = 0;
      *a2 = *((_DWORD *)this + 24);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2003292412, 0x8Cu);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2147024809, 0x8Au);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v5;
}
