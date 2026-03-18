/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QAEXXZ @ 0x1D1265
 * Callers:
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     ?vClearDpiScaling@DC@@QAEXXZ @ 0x8E326 (-vClearDpiScaling@DC@@QAEXXZ.c)
 *     ?vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z @ 0x1D11D0 (-vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QBEHXZ @ 0x4F3AC (-bDpiScaleTransform@DC@@QBEHXZ.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 */

void __thiscall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  int v1; // ebx
  int v2; // ecx
  int v3; // [esp+8h] [ebp-1Ch]
  int v4[2]; // [esp+14h] [ebp-10h] BYREF
  DC *v5; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h] BYREF

  v1 = 1;
  v5 = this;
  v6 = 1;
  if ( DC::bDpiScaleTransform(this) )
  {
    v3 = *(_DWORD *)(v2 + 528);
    v4[0] = *(_DWORD *)(v2 + 524);
    v4[1] = v3;
    if ( eftol_c(v4, &v6, 1) )
      v1 = v6;
    else
      v6 = 1;
  }
  DC::SetCachedDpiScaleValue(v5, v1);
}
