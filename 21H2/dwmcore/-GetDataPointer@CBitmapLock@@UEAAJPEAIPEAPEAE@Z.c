/*
 * XREFs of ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800E3840
 * Callers:
 *     ?GetDataPointer@CBitmapLock@@WBI@EAAJPEAIPEAPEAE@Z @ 0x180108030 (-GetDataPointer@CBitmapLock@@WBI@EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetDataPointer(CBitmapLock *this, unsigned int *a2, unsigned __int8 **a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)this + 72) )
      {
        v7 = 0;
        *a2 = *((_DWORD *)this + 30);
        *a3 = (unsigned __int8 *)*((_QWORD *)this + 14);
      }
      else
      {
        v7 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2003292412, 0x9Eu);
      }
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024809, 0x9Cu);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024809, 0x9Bu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
