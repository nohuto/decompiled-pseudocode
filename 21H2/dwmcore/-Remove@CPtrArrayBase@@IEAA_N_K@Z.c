/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180062408
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180015218 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800171F4 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180045B3C (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x1800493B0 (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1801F8054 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180208144 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180232820 (--1CProjectedShadow@@MEAA@XZ.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x180062490 (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 */

char __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this)
{
  unsigned __int64 Count; // rax
  __int64 v2; // rdx
  CPtrArrayBase *v3; // rcx
  __int64 v4; // r11
  char v5; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx

  Count = CPtrArrayBase::GetCount(this);
  v5 = 0;
  if ( Count == 1 )
  {
    if ( v2 == (*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      *(_QWORD *)v3 = 0LL;
      return 1;
    }
  }
  else if ( Count )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v4 == *(_QWORD *)((*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v7 + 16) )
        break;
      v8 = (unsigned int)(v8 + 1);
      v7 = (unsigned int)v8;
    }
    while ( (unsigned int)v8 < Count );
    if ( v8 < Count )
    {
      CPtrArrayBase::RemoveAt(v3, v8, 1uLL);
      return 1;
    }
  }
  return v5;
}
