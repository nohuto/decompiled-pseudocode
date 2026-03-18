/*
 * XREFs of ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01D5EDC
 * Callers:
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6328 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RescaleIconMetrics(struct tagICONMETRICSW *a1, __int64 a2, __int64 a3)
{
  INT v4; // r8d
  INT v5; // ebx

  v4 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 284);
  if ( (_WORD)v4 != *(_WORD *)(gpsi + 6998LL) )
  {
    v5 = v4;
    *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), v4);
    *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v5);
    *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 6998LL), v5);
    *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), *(unsigned __int16 *)(gpsi + 6998LL), v5);
  }
}
