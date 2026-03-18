/*
 * XREFs of _GetDisplayAffinity@8 @ 0xC4A42
 * Callers:
 *     _NtUserGetWindowDisplayAffinity@8 @ 0xC49B8 (_NtUserGetWindowDisplayAffinity@8.c)
 *     _SetDisplayAffinity@8 @ 0x1A5988 (_SetDisplayAffinity@8.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __fastcall GetDisplayAffinity(_DWORD *a1, int *a2)
{
  int v3; // esi

  v3 = 0;
  *a2 = 0;
  if ( _IsTopLevelWindow(a1) && (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
  {
    v3 = 1;
    *a2 = _GetProp((int)a1, (unsigned __int16)atomDispAffinity, 1);
  }
  return v3;
}
