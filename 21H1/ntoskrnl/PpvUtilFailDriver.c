/*
 * XREFs of PpvUtilFailDriver @ 0x14050A630
 * Callers:
 *     IoGetDeviceProperty @ 0x1406AF4F0 (IoGetDeviceProperty.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 * Callees:
 *     VfErrorReport7 @ 0x1409D4FB0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D5048 (VfErrorReport8.c)
 */

__int64 __fastcall PpvUtilFailDriver(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( v1 )
      {
        if ( v1 != 1 )
          return result;
        v2 = 589LL;
      }
      else
      {
        v2 = 587LL;
      }
      return VfErrorReport8(v2);
    }
    else
    {
      return VfErrorReport7();
    }
  }
  return result;
}
