/*
 * XREFs of ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D3A04
 * Callers:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C007A050 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

void __fastcall _CleanupUnneededSystemCursorSizes(int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct tagCURSOR *v4; // rcx
  struct tagCURSOR *DPICursor; // rax
  struct tagCURSOR *v6; // rcx
  struct tagCURSOR *v7; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v10; // r9

  v1 = 0LL;
  v3 = 19LL;
  do
  {
    v4 = *(struct tagCURSOR **)(v1 + gasyscur[0] + 8);
    if ( v4 )
    {
      DPICursor = FindDPICursor(v4, a1);
      v7 = DPICursor;
      if ( DPICursor )
      {
        if ( DPICursor != v6 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
          FixupGlobalCursor(v7, ProcessWin32Process);
          _DestroyCursor(v7, 0LL, v9, v10);
        }
      }
    }
    v1 += 552LL;
    --v3;
  }
  while ( v3 );
}
