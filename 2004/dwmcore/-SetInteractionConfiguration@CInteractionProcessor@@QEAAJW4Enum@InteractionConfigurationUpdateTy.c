/*
 * XREFs of ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800ABEF4
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18009C78C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801C7814 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_ @ 0x1800ABDD4 (_anonymous_namespace_--SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800AC0C4 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 */

__int64 __fastcall CInteractionProcessor::SetInteractionConfiguration(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        unsigned int a5)
{
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  unsigned int v12; // edx
  int v14; // eax
  int v15; // eax
  int v16; // r8d
  __int64 v17; // r8
  int v18; // eax

  v7 = a3 - 1;
  if ( !v7 )
  {
    v15 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 720LL : 88LL));
    v11 = 0;
    v12 = v15;
    if ( v15 < 0 )
      return v12;
    if ( !a2 )
      *(_BYTE *)(a1 + 148) |= 1u;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 752LL : 248LL));
    v11 = 0;
    v12 = v14;
    if ( v14 < 0 )
      return v12;
    if ( !a2 )
      *(_BYTE *)(a1 + 308) |= 1u;
    goto LABEL_7;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 688LL : 408LL));
    v11 = 0;
    v12 = v10;
    if ( v10 < 0 )
      return v12;
    if ( !a2 )
      *(_BYTE *)(a1 + 468) |= 1u;
    goto LABEL_7;
  }
  v16 = v9 - 1;
  if ( !v16 )
  {
    v11 = 0;
    v17 = a2 != 0 ? 8 : 0;
    v12 = 0;
    if ( a4 )
    {
      if ( a5 )
      {
        *(_DWORD *)(v17 + a1 + 640) = *a4;
LABEL_7:
        if ( (v12 & 0x80000000) == 0 && a2 == 1 )
        {
          if ( *(_DWORD *)(a1 + 648)
            || *(_DWORD *)(a1 + 680)
            || *(_DWORD *)(a1 + 712)
            || *(_DWORD *)(a1 + 744)
            || *(_DWORD *)(a1 + 776) )
          {
            v11 = 1;
          }
          *(_BYTE *)(a1 + 1264) &= ~1u;
          *(_BYTE *)(a1 + 1264) |= v11;
        }
        return v12;
      }
    }
    else if ( a5 )
    {
      v12 = -2147024809;
      goto LABEL_7;
    }
    *(_DWORD *)(v17 + a1 + 640) = 0;
    goto LABEL_7;
  }
  if ( v16 != 1 )
    return (unsigned int)-2147024809;
  v18 = anonymous_namespace_::SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_(
          (__int64)a4,
          a5,
          a1 + (a2 != 0 ? 656LL : 568LL));
  v11 = 0;
  v12 = v18;
  if ( v18 >= 0 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 628) |= 1u;
    goto LABEL_7;
  }
  return v12;
}
