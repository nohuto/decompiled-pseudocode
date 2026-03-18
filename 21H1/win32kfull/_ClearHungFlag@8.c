/*
 * XREFs of _ClearHungFlag@8 @ 0x715BC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE (-VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z.c)
 */

struct tagVWPL *__fastcall ClearHungFlag(struct tagVWPL **a1, unsigned __int16 a2)
{
  int v3; // edi
  unsigned int v4; // ecx
  struct tagVWPL *result; // eax
  int v6; // [esp+0h] [ebp-Ch]
  unsigned int *v7; // [esp+4h] [ebp-8h]

  v3 = *((_BYTE *)a1[5] + 11) & 0x18;
  SetOrClrWF(0, (int)a1, a2, 1);
  result = a1[5];
  if ( (*((_BYTE *)result + 11) & 0x18) == 0 )
  {
    if ( v3 )
      return (struct tagVWPL *)VWPLRemoveBase(_gpvwplHungRedraw, a1, v4, 0, v6, v7);
  }
  return result;
}
