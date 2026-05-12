/*
 * XREFs of StorpAllocatePool @ 0x1C0014058
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00323CC (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocatePool(__int64 a1, unsigned int a2, ULONG a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax

  v4 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( KeGetCurrentIrql() > 2u )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 27LL, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
      }
      return (unsigned int)-1056964600;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a2, a3);
      *a4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 28LL, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
        }
        return (unsigned int)-1056964605;
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v4;
}
