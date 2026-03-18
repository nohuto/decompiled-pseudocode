/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x1C02C531C
 * Callers:
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C026A2E8 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 *     DpiGdiHandleAsyncDisplayCallout @ 0x1C02C52D0 (DpiGdiHandleAsyncDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiSyncDisplayCallout(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  LODWORD(v10) = 8;
  LOBYTE(a3) = 1;
  v11 = 0LL;
  v3 = SMgrGdiCallout(&v10, a1, a3, 0LL, 0LL, 0LL);
  v7 = v3;
  if ( v3 < 0 || SDWORD2(v11) < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
