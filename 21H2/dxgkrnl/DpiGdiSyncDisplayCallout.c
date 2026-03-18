/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x1C0387190
 * Callers:
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C030C54C (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 *     DpiGdiHandleAsyncDisplayCallout @ 0x1C0387140 (DpiGdiHandleAsyncDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiSyncDisplayCallout(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( dword_1C01304A0 == 2 )
  {
    LOBYTE(a3) = 1;
    HIBYTE(v7) = a2;
    LODWORD(v6) = 8;
    v4 = SMgrGdiCallout(&v6, a1, a3, 0LL, 0LL, 0LL);
    v3 = v4;
    if ( v4 < 0 || SDWORD2(v7) < 0 )
      WdLogSingleEntry1(3LL, v4);
  }
  else
  {
    v3 = -1073741661;
    WdLogSingleEntry1(3LL, -1073741661LL);
  }
  return v3;
}
