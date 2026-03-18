/*
 * XREFs of _NtGdiRemoveMergeFont@8 @ 0x1D97B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QAEHU_UNIVERSAL_FONT_ID@@@Z @ 0x211230 (-bRemoveMergeFont@XDCOBJ@@QAEHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

int __stdcall NtGdiRemoveMergeFont(HDC a1, int *a2)
{
  int result; // eax
  int v3; // esi
  _DWORD v4[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v5; // [esp+1Ch] [ebp-20h]
  int v6; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v5 = 0;
  v6 = 0;
  v4[1] = 0;
  v4[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  result = v4[0];
  if ( v4[0] )
  {
    if ( (*(_DWORD *)(v4[0] + 24) & 1) != 0 )
    {
      v3 = 0;
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = *a2;
      v6 = a2[1];
      ms_exc.registration.TryLevel = -2;
      v3 = XDCOBJ::bRemoveMergeFont(v4, v5, v6);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return v3;
  }
  return result;
}
