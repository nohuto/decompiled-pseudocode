/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C01069EC
 * Callers:
 *     xxxDesktopRecalc @ 0x1C01066F8 (xxxDesktopRecalc.c)
 *     SnapshotWindowRects @ 0x1C01D7238 (SnapshotWindowRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopWindowFromDesktop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      return *(_QWORD *)(v2 + 24);
  }
  return result;
}
