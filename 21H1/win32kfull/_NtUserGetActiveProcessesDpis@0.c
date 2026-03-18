/*
 * XREFs of _NtUserGetActiveProcessesDpis@0 @ 0xE7962
 * Callers:
 *     <none>
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 */

int __stdcall NtUserGetActiveProcessesDpis()
{
  int v0; // edi
  int i; // esi
  int DpiCacheSlot; // eax

  v0 = 0;
  EnterCrit(0, 1);
  for ( i = _gppiList; i; i = *(_DWORD *)(i + 208) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 160));
    if ( DpiCacheSlot != -1 )
      v0 |= 1 << DpiCacheSlot;
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
