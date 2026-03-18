/*
 * XREFs of UnredirectDCEs @ 0x1C0091808
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0091758 (ChangeRedirectionParentInDCEs.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0091B70 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00E75F0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  const struct tagDCE *i; // rbx
  __int16 v3; // r11

  if ( GetStyleWindow((__int64)a1, 2848) )
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
