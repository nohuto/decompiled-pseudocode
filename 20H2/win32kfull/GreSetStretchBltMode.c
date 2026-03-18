/*
 * XREFs of GreSetStretchBltMode @ 0x1C0092280
 * Callers:
 *     BltIcon @ 0x1C0092070 (BltIcon.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // r8
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v5 = 2;
    v3 = *(_DWORD *)(v4 + 232);
    *(_DWORD *)(v4 + 232) = a2;
    if ( a2 <= 4 )
      v5 = a2;
    *(_BYTE *)(*(_QWORD *)(v7[0] + 976LL) + 215LL) = v5;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
