/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x180015B7C
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x1800156D4 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18001E1A4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CApplication::Initialize(_QWORD *pv, const unsigned __int16 *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  void *v4; // r14
  DWORD LastError; // ebx
  __int64 v9; // r9
  signed int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  BOOL v13; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  signed int v15; // eax

  v3 = pv + 3;
  v4 = (void *)pv[3];
  if ( v4 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v4);
    SetLastError(LastError);
  }
  *v3 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v10 = _AllocStringWorker<CTCoAllocPolicy>(pv, a2, a2);
  if ( v10 >= 0 )
  {
    v11 = CApplication::s_lastAppToken + 1;
    pv[80] = a3;
    *((_DWORD *)pv + 4) = v11;
    v12 = *a2;
    CApplication::s_lastAppToken = v11;
    v13 = v12 != 0;
    *((_DWORD *)pv + 149) = v13;
    *((_DWORD *)pv + 148) = v13;
    if ( !v12 )
    {
      *((_DWORD *)pv + 52) = 1;
      *((_DWORD *)pv + 54) = 2;
      *((_DWORD *)pv + 81) = 2;
      *((_DWORD *)pv + 82) = 2;
    }
    ThreadpoolTimer = CreateThreadpoolTimer(
                        CApplication::SoundLevelChangeCompletionCallback,
                        pv,
                        (PTP_CALLBACK_ENVIRON)((char *)ThreadPool + 8));
    pv[33] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      return 0;
    }
    else
    {
      v15 = GetLastError();
      v10 = (unsigned __int16)v15 | 0x80070000;
      if ( v15 <= 0 )
        return (unsigned int)v15;
    }
  }
  return (unsigned int)v10;
}
