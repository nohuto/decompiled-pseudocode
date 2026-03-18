/*
 * XREFs of ?IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC317E
 * Callers:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC31B8 (-IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 */

int __fastcall CoreWindowProp::IsHostOrComponentThreadOf(int a1, int a2)
{
  int v4; // edi
  _DWORD *i; // esi
  _DWORD *v7; // ecx
  const struct tagTHREADINFO *v8; // [esp+0h] [ebp-10h]
  const struct tagWND *v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  if ( CoreWindowProp::IsHostThreadOf(v8, v9) )
    return 1;
  v4 = 0;
  v10 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a2, &v10) )
  {
    for ( i = *(_DWORD **)(v10 + 20); i; i = (_DWORD *)*i )
    {
      v7 = (_DWORD *)i[1];
      if ( v7 && CoreWindowProp::IsComponent(v7) && a1 == *(_DWORD *)(i[1] + 8) )
        return 1;
    }
  }
  return v4;
}
