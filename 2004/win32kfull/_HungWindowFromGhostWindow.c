/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C00E79E8
 * Callers:
 *     NtUserHungWindowFromGhostWindow @ 0x1C00E7780 (NtUserHungWindowFromGhostWindow.c)
 *     GetMonitorMaxArea @ 0x1C00E7954 (GetMonitorMaxArea.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 Prop; // rax
  __int64 v5; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop || (Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) != 0 )
    {
      v5 = HMValidateHandleNoSecure(Prop, 1);
      v2 = v5;
      if ( v5 && (unsigned int)IsWindowBeingDestroyed(v5) )
        return 0LL;
    }
  }
  return v2;
}
