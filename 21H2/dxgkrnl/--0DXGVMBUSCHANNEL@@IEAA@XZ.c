/*
 * XREFs of ??0DXGVMBUSCHANNEL@@IEAA@XZ @ 0x1C02B25E4
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C02B2D0C (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

DXGVMBUSCHANNEL *__fastcall DXGVMBUSCHANNEL::DXGVMBUSCHANNEL(DXGVMBUSCHANNEL *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &DXGVMBUSCHANNEL::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 25) = 82;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 53;
  *((_DWORD *)this + 36) = 53;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 82;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  return this;
}
