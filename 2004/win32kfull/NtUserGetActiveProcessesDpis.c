/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1C01218B0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 i; // r11
  unsigned int DpiCacheSlot; // eax
  __int64 v6; // r11

  EnterCrit(0LL, 1LL);
  v3 = 0;
  for ( i = gppiList; i; i = *(_QWORD *)(v6 + 376) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 284));
    if ( DpiCacheSlot != -1 )
    {
      v1 = DpiCacheSlot;
      v0 = (unsigned int)(1 << DpiCacheSlot);
      v3 |= v0;
    }
  }
  UserSessionSwitchLeaveCrit(v1, v0, v2);
  return v3;
}
