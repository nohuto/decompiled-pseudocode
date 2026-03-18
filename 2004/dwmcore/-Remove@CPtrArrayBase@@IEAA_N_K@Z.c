/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BDC0C
 * Callers:
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x18001E634 (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18002D84C (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A20F0 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x1800A2A94 (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800BCE6C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800BD5B8 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800C9914 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017AC3C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800BDC84 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 */

bool __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, __int64 a2)
{
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r8
  bool result; // al
  unsigned int v7; // ecx
  __int64 v8; // rdx

  v4 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*(_QWORD *)this & 2) != 0 )
    v5 = *v4;
  else
    v5 = *(_QWORD *)this & 1LL;
  result = 0;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( a2 == (*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        *(_QWORD *)this = 0LL;
        return 1;
      }
    }
    else
    {
      v7 = 0;
      v8 = 0LL;
      do
      {
        if ( a2 == v4[v8 + 2] )
          break;
        v8 = ++v7;
      }
      while ( v7 < v5 );
      if ( v7 < v5 )
      {
        CPtrArrayBase::RemoveAt(this, v7);
        return 1;
      }
    }
  }
  return result;
}
