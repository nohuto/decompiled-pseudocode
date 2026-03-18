/*
 * XREFs of HmgMarkUndeletable @ 0x1C0015580
 * Callers:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0015520 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMarkUndeletableBitmap @ 0x1C0015560 (GreMarkUndeletableBitmap.c)
 *     GreMarkUndeletableBrush @ 0x1C0017830 (GreMarkUndeletableBrush.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     SetSysColor @ 0x1C00A6AF4 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1C0295010 (bInitICM.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

__int64 __fastcall HmgMarkUndeletable(unsigned int a1, char a2)
{
  unsigned int v3; // edi
  __int16 v4; // ebx^2
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v4 )
    {
      *(_BYTE *)(v6 + 15) |= 1u;
      v3 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  return v3;
}
