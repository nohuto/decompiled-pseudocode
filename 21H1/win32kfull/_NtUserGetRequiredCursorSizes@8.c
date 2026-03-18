/*
 * XREFs of _NtUserGetRequiredCursorSizes@8 @ 0xA7772
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z @ 0xA77E0 (-HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetRequiredCursorSizes(int a1, volatile void *Address)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  CCursorSizes *v5; // ecx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = HMValidateHandle(a1, 3);
  v4 = v3;
  if ( v3 && *(_DWORD *)(v3 + 24) == v3 )
  {
    ProbeForWrite(Address, 0x28u, 1u);
    CCursorSizes::HandleRequestCursorSizesRequest(v5, (struct tagCURSORSIZEINFO *)Address);
    *(_DWORD *)(v4 + 44) |= 0x4000u;
    v2 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
