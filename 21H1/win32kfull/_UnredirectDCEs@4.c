/*
 * XREFs of _UnredirectDCEs@4 @ 0x1BEB2
 * Callers:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42 (-WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 */

int __thiscall UnredirectDCEs(void *this)
{
  _DWORD *i; // esi
  int v3; // edi
  struct tagWND *v5; // [esp+0h] [ebp-Ch]
  const struct tagDCE *v6; // [esp+4h] [ebp-8h]

  if ( GetStyleWindow(this, 2848) )
    return ChangeRedirectionParentInDCEs(this, 0);
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    v3 = i[8];
    if ( (v3 & 0x4400800) == 0 && i[2] && WindowMatchesDCE(v5, v6) && (v3 & 0x1002) != 2 )
      UpdateRedirectedDCE(i, 0);
  }
  return GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
}
