/*
 * XREFs of UnredirectDCEs @ 0x1C0020AD8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x1C00206AC (ChangeRedirectionParentInDCEs.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0020E40 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     UpdateRedirectedDCE @ 0x1C00E8550 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  const struct tagDCE *i; // rbx
  __int16 v3; // r11

  if ( GetStyleWindow(a1, 2848LL) )
    return ChangeRedirectionParentInDCEs(a1, 0);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(const struct tagDCE **)(gpDispInfo + 24LL); i; i = *(const struct tagDCE **)i )
  {
    if ( (*((_DWORD *)i + 16) & 0x4400800) == 0
      && *((_QWORD *)i + 2)
      && (unsigned int)WindowMatchesDCE(a1, i)
      && (v3 & 0x1002) != 2 )
    {
      UpdateRedirectedDCE(i, 0LL);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
