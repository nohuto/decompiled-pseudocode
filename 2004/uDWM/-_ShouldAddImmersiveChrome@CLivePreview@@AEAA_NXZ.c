/*
 * XREFs of ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x180083D40
 * Callers:
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180081E2C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x180084114 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x180083764 (-_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ.c)
 */

char __fastcall CLivePreview::_ShouldAddImmersiveChrome(CLivePreview *this)
{
  char v1; // r9

  if ( *((_BYTE *)this + 282) || CLivePreview::_IsImmersiveAppOnTaskbar(this) )
    return 1;
  return v1;
}
