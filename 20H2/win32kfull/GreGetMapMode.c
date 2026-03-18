/*
 * XREFs of GreGetMapMode @ 0x1C02B5D84
 * Callers:
 *     IsSysFontAndDefaultMode @ 0x1C025E9A8 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetMapMode(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 104LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
