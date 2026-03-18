/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800F7D98
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  int Current; // eax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  struct CThreadContext *v3; // rcx
  struct CThreadContext *v5; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v5);
  v2 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v1, 0LL, 0LL, Current, 0x131u);
  }
  else
  {
    v3 = v5;
    *((_DWORD *)v5 + 8) = 32;
    *((_DWORD *)v3 + 12) = 32;
    *((_DWORD *)v3 + 16) = 32;
    *((_DWORD *)v3 + 24) = 2;
    *((_DWORD *)v3 + 28) = 2;
    *((_DWORD *)v3 + 32) = 32;
    *((_DWORD *)v3 + 36) = 32;
    *((_DWORD *)v3 + 40) = 32;
    *((_DWORD *)v3 + 44) = 32;
    *((_DWORD *)v3 + 48) = 32;
    *((_DWORD *)v3 + 52) = 32;
    *((_DWORD *)v3 + 56) = 8;
    *((_DWORD *)v3 + 60) = 8;
    *((_DWORD *)v3 + 64) = 8;
    *((_DWORD *)v3 + 68) = 8;
    *((_DWORD *)v3 + 72) = 8;
    *((_DWORD *)v3 + 76) = 8;
    *((_DWORD *)v3 + 80) = 1;
  }
  return v2;
}
