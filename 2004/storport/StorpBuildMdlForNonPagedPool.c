/*
 * XREFs of StorpBuildMdlForNonPagedPool @ 0x1C003A138
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00323CC (WPP_SF_.c)
 */

__int64 __fastcall StorpBuildMdlForNonPagedPool(__int64 a1, struct _MDL *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      MmBuildMdlForNonPagedPool(a2);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x26u,
          (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
      }
      return (unsigned int)-1056964600;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x25u,
        (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
