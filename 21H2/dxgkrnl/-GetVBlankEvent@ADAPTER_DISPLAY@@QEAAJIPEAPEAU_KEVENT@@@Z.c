/*
 * XREFs of ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C01E74A0
 * Callers:
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01E7284 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVBlankEvent(ADAPTER_DISPLAY *this, __int64 a2, struct _KEVENT **a3, __int64 a4)
{
  __int64 v5; // rbx

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6758LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6758LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, a4) + 106) & 4) != 0 )
    *a3 = *(struct _KEVENT **)(4000 * v5 + *((_QWORD *)this + 16) + 928);
  return 0LL;
}
