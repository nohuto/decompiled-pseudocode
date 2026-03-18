/*
 * XREFs of RedirectDCEs @ 0x1C0091AD0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0091B70 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00E75F0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(struct tagWND *a1)
{
  __int64 *i; // rbx
  int v3; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v3 = *((_DWORD *)i + 16);
    if ( (v3 & 0x4400800) == 0 && i[2] && (v3 & 0x1000) != 0 )
    {
      if ( (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i) )
        UpdateRedirectedDCE(i, 0LL);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
