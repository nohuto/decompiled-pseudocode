/*
 * XREFs of ?RescaleNonClientMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z @ 0x144FCD
 * Callers:
 *     ?xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z @ 0x145849 (-xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall RescaleNonClientMetrics(INT *this)
{
  INT v2; // ecx
  INT v3; // eax
  INT v4; // esi

  v2 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  v3 = *(unsigned __int16 *)(_gpsi + 6242);
  if ( (_WORD)v2 != (_WORD)v3 )
  {
    v4 = v2;
    this[4] = EngMulDiv(this[4], v3, v2);
    this[5] = EngMulDiv(this[5], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[7] = EngMulDiv(this[7], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[6] = EngMulDiv(this[6], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[29] = EngMulDiv(this[29], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[30] = EngMulDiv(this[30], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[32] = EngMulDiv(this[32], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[31] = EngMulDiv(this[31], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[54] = EngMulDiv(this[54], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[55] = EngMulDiv(this[55], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[57] = EngMulDiv(this[57], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[56] = EngMulDiv(this[56], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[80] = EngMulDiv(this[80], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[79] = EngMulDiv(this[79], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[103] = EngMulDiv(this[103], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[102] = EngMulDiv(this[102], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[2] = EngMulDiv(this[2], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[3] = EngMulDiv(this[3], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[1] = EngMulDiv(this[1], *(unsigned __int16 *)(_gpsi + 6242), v4);
    this[125] = EngMulDiv(this[125], *(unsigned __int16 *)(_gpsi + 6242), v4);
  }
}
