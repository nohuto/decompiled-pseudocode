/*
 * XREFs of ?Release@CRegion@@UEBAJXZ @ 0x1C0030AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C003BD30 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &CRegion::`vftable';
    CRegion::SetEmpty(this);
    Win32FreePool(this);
  }
  return v2;
}
