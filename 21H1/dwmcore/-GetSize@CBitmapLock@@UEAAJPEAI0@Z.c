/*
 * XREFs of ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800CBF80
 * Callers:
 *     ?GetSize@CBitmapLock@@WBA@EAAJPEAI0@Z @ 0x1800EE3F0 (-GetSize@CBitmapLock@@WBA@EAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetSize(CBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( a2 )
  {
    if ( a3 )
    {
      if ( *((_BYTE *)this + 64) )
      {
        v7 = 0;
        *a2 = *((_DWORD *)this + 20);
        *a3 = *((_DWORD *)this + 21);
      }
      else
      {
        v7 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292412, 0x7Bu, 0LL);
      }
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x79u, 0LL);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x78u, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
