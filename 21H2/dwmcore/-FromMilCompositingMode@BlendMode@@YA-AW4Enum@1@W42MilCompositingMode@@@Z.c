/*
 * XREFs of ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x1801A6DF4
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801A25D0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendMode::FromMilCompositingMode(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 5LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 21LL;
    if ( v2 == 2 )
      return 22LL;
  }
  return 0LL;
}
