/*
 * XREFs of _WindowRedirectionBitmapMatchesMonitorAdapter@4 @ 0x2026A
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _GetWindowMonitorAdapterLuid@8 @ 0x202DA (_GetWindowMonitorAdapterLuid@8.c)
 *     _GreGetDxSharedSurface@24 @ 0x38958 (_GreGetDxSharedSurface@24.c)
 */

int __thiscall WindowRedirectionBitmapMatchesMonitorAdapter(void *this)
{
  int v2; // esi
  _BYTE v4[12]; // [esp+10h] [ebp-28h] BYREF
  int v5; // [esp+1Ch] [ebp-1Ch] BYREF
  int v6; // [esp+20h] [ebp-18h]
  int v7; // [esp+24h] [ebp-14h] BYREF
  int v8; // [esp+28h] [ebp-10h]
  _BYTE v9[4]; // [esp+2Ch] [ebp-Ch] BYREF
  int v10; // [esp+30h] [ebp-8h] BYREF
  int v11; // [esp+34h] [ebp-4h]

  v11 = 0;
  v7 = 0;
  v8 = 0;
  v2 = 1;
  v5 = 0;
  v6 = 0;
  v10 = 0;
  if ( (int)GreGetDxSharedSurface(&v5, v9, &v10, v4) >= 0
    && v11
    && GetWindowMonitorAdapterLuid(this, &v7)
    && (v7 != v5 || v8 != v6) )
  {
    return 0;
  }
  return v2;
}
