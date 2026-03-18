/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140008590
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x1400088AC (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ??0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z @ 0x140009B04 (--0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z.c)
 * Callees:
 *     memmove_0 @ 0x140004AE3 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000849C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 */

char *__fastcall std::wstring::wstring(char *a1, _WORD *Src, __int64 a3)
{
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx

  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  if ( v5 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
      (__int64)a1,
      v5,
      a3,
      Src);
  }
  else
  {
    v6 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v6 = *(char **)a1;
    v7 = 2 * v5;
    *((_QWORD *)a1 + 2) = v5;
    memmove_0(v6, Src, 2 * v5);
    *(_WORD *)&v6[v7] = 0;
  }
  return a1;
}
