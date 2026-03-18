/*
 * XREFs of ?Release@CRegion@@UEBAJXZ @ 0x1C0096960
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C009B330 (-SetEmpty@CRegion@@UEAAXXZ.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &CRegion::`vftable';
    CRegion::SetEmpty(this);
    Win32FreePool((__int64)this);
  }
  return v2;
}
