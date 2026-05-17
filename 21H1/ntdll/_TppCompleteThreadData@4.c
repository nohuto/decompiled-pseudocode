/*
 * XREFs of _TppCompleteThreadData@4 @ 0x4B2B6E8F
 * Callers:
 *     _RtlpTpWaitCallback@16 @ 0x4B2A8970 (_RtlpTpWaitCallback@16.c)
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppTimerpExecuteCallback@8 @ 0x4B2B56A0 (_TppTimerpExecuteCallback@8.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 *     _TppSimplepExecuteCallback@8 @ 0x4B2EB860 (_TppSimplepExecuteCallback@8.c)
 *     _TppJobpExecuteCallback@16 @ 0x4B3837E0 (_TppJobpExecuteCallback@16.c)
 *     _RtlpTpTimerCallback@12 @ 0x4B385320 (_RtlpTpTimerCallback@12.c)
 *     _RtlpTpIoCallback@16 @ 0x4B385720 (_RtlpTpIoCallback@16.c)
 * Callees:
 *     <none>
 */

void __thiscall TppCompleteThreadData(_DWORD *this)
{
  __int64 v1; // kr00_8
  bool v2; // cf

  if ( this )
  {
    while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
      _mm_pause();
    v1 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *((_QWORD *)this + 2) )
    {
      v2 = (unsigned int)v1 < this[4];
      this[4] = v1 - this[4];
      this[5] = HIDWORD(v1) - (v2 + this[5]);
    }
  }
}
