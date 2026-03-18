/*
 * XREFs of DxgkGetWin32kImportTable @ 0x1C0043A44
 * Callers:
 *     DxgkCreateAllocation @ 0x1C0157500 (DxgkCreateAllocation.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetWin32kImportTable(__int64 a1, __int64 a2)
{
  return *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 38048);
}
