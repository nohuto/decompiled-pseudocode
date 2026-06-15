/*
 * XREFs of ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BC250
 * Callers:
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionState@@@Z @ 0x18007267C (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionS.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocString<CTCoAllocPolicy>(__int64 a1, __int64 a2, const unsigned __int16 *a3, char **a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  char *v9; // rax

  v4 = -1LL;
  v6 = 0;
  do
    ++v4;
  while ( a3[v4] );
  v8 = v4 + 1;
  *a4 = 0LL;
  if ( v4 + 1 >= v4 && is_mul_ok(v8, 2uLL) )
  {
    v9 = (char *)CoTaskMemAlloc(2 * v8);
    *a4 = v9;
    if ( v9 )
      StringCchCopyNExW(v9, v4 + 1, a3, v4);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v6;
}
