/*
 * XREFs of ?vInit@BEZIER@@QAEXPAU_POINTFIX@@PAU_RECTFX@@PB_J@Z @ 0x236CAE
 * Callers:
 *     ?bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235587 (-bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?vNextPoint@LINER@@AAEXXZ @ 0x236DD5 (-vNextPoint@LINER@@AAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall BEZIER::vInit(BEZIER *this, struct _POINTFIX *a2, struct _RECTFX *a3, __int64 *a4)
{
  BOOL v5; // eax

  v5 = a4 == gpeqErrorLow && BEZIER32::bInit(this, a2, 0);
  *((_DWORD *)this + 42) = v5;
  if ( !v5 )
    BEZIER64::vInit(this, a2, 0, a4);
}
