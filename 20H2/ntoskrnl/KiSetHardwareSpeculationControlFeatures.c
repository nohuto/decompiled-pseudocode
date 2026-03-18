/*
 * XREFs of KiSetHardwareSpeculationControlFeatures @ 0x1403A8060
 * Callers:
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiSetHardwareSpeculationControlFeatures(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v4; // dx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v5 = 0LL;
  result = KiDetectHardwareSpecControlFeatures(a1, a2, &v5, &v6);
  v4 = v5;
  if ( (v5 & 0x20) != 0 )
    *(_BYTE *)(a1 + 249) |= 4u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    if ( *(_WORD *)((char *)&Mm64BitPhysicalAddress + 3) != v4 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, *(unsigned __int16 *)((char *)&Mm64BitPhysicalAddress + 3), v4, 0LL);
  }
  else
  {
    LOWORD(KiSpeculationFeatures) = 0;
    LODWORD(KiSpeculationFeatures) = v4 | (unsigned int)KiSpeculationFeatures;
    result = *((_QWORD *)&v5 + 1);
    *((_QWORD *)&KiSpeculationFeatures + 1) = *((_QWORD *)&v5 + 1);
    KiSsbdBit = *((_QWORD *)&v5 + 1);
    *(_WORD *)((char *)&Mm64BitPhysicalAddress + 3) = v4;
    DWORD1(KiSpeculationFeatures) = DWORD1(v5);
    KiSsbdMsr = DWORD1(v5);
  }
  if ( v6 )
    KiMicrocodeTrackerEnabled = 1;
  return result;
}
