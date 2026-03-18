/*
 * XREFs of _RedirectDCEs@4 @ 0x73D3A
 * Callers:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42 (-WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 */

int __thiscall RedirectDCEs(void *this)
{
  _DWORD *i; // esi
  int v3; // eax

  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    v3 = i[8];
    if ( (v3 & 0x4400800) == 0 && i[2] && (v3 & 0x1000) != 0 )
    {
      if ( WindowMatchesDCE((int)this, (int)i) )
        UpdateRedirectedDCE(i, 0);
    }
  }
  return GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
}
