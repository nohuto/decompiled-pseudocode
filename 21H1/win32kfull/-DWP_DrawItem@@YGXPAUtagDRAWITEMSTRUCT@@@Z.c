/*
 * XREFs of ?DWP_DrawItem@@YGXPAUtagDRAWITEMSTRUCT@@@Z @ 0xC593E
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _ClientFrame@24 @ 0x1B78B9 (_ClientFrame@24.c)
 */

void __thiscall DWP_DrawItem(_DWORD *this)
{
  int v1; // eax

  if ( *this == 2 )
  {
    v1 = this[3];
    if ( v1 == 4 || v1 == 1 && (this[4] & 0x10) != 0 )
      ((void (__fastcall *)(_DWORD, _DWORD *, _DWORD))ClientFrame)(this[6], this + 7, *(_DWORD *)(_gpsi + 4416));
  }
}
