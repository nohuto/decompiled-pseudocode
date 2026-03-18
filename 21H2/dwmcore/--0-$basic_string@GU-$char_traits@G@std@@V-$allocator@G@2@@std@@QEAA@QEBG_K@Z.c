/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180061A74
 * Callers:
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x180060038 (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV-$basi.c)
 *     ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180061970 (--$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@@@YAJAEAV-$basic_string@G.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180061B90 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1)
{
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::assign(a1);
  return a1;
}
