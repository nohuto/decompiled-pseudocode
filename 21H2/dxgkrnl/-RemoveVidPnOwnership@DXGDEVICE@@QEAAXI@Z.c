/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C01EEA54
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx

  v2 = *((_DWORD *)this + 465);
  if ( a2 > v2 )
  {
    v5 = a2;
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 465));
    v4 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Trying to adjust VidPn ownership count down by %d but only %d to remove",
      v5,
      *((unsigned int *)this + 465),
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v4 = v2 - a2;
  }
  *((_DWORD *)this + 465) = v4;
}
