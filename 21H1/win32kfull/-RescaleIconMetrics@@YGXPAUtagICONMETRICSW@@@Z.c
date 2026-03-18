/*
 * XREFs of ?RescaleIconMetrics@@YGXPAUtagICONMETRICSW@@@Z @ 0x144F48
 * Callers:
 *     ?SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z @ 0x145212 (-SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall RescaleIconMetrics(INT *this)
{
  INT v2; // ecx
  INT v3; // eax
  INT v4; // esi

  v2 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  v3 = *(unsigned __int16 *)(_gpsi + 6242);
  if ( (_WORD)v2 != (_WORD)v3 )
  {
    v4 = v2;
    this[1] = EngMulDiv(this[1], v3, v2);
    this[2] = EngMulDiv(this[2], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[5] = EngMulDiv(this[5], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[4] = EngMulDiv(this[4], *(unsigned __int16 *)(_gpsi + 6242), v4);
  }
}
