/*
 * XREFs of NtGdiRemoveMergeFont @ 0x1C027C800
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02AC558 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

__int64 __fastcall NtGdiRemoveMergeFont(HDC a1, char a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  result = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 36) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = XDCOBJ::bRemoveMergeFont(&v5);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v5);
    return v4;
  }
  return result;
}
