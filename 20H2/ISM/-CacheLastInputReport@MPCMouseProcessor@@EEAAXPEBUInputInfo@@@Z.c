/*
 * XREFs of ?CacheLastInputReport@MPCMouseProcessor@@EEAAXPEBUInputInfo@@@Z @ 0x18001E910
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::CacheLastInputReport(MPCMouseProcessor *this, const struct InputInfo *a2)
{
  memcpy_0((char *)this + 6368, a2, 0x7F0uLL);
  *((_BYTE *)this + 6320) = 1;
  *(_QWORD *)((char *)this + 6324) = 0LL;
  *((_DWORD *)this + 1583) = 0;
}
