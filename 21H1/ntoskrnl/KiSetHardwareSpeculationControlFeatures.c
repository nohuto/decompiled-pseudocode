/*
 * XREFs of KiSetHardwareSpeculationControlFeatures @ 0x1403A9930
 * Callers:
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A9A34 (KiDetectHardwareSpecControlFeatures.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall KiSetHardwareSpeculationControlFeatures(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v4; // dx
  ULONG_PTR v5; // rcx
  unsigned __int16 v6; // t1
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v7 = 0LL;
  result = KiDetectHardwareSpecControlFeatures(a1, a2, &v7, &v8);
  v4 = v7;
  if ( (v7 & 0x20) != 0 )
    *(_BYTE *)(a1 + 249) |= 4u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(_WORD *)&KeNumberProcessorsGroup0[4];
    v5 = v6;
    if ( v6 != v4 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, v5, v4, 0LL);
  }
  else
  {
    LOWORD(KiSpeculationFeatures) = 0;
    LODWORD(KiSpeculationFeatures) = v4 | (unsigned int)KiSpeculationFeatures;
    result = *((_QWORD *)&v7 + 1);
    *((_QWORD *)&KiSpeculationFeatures + 1) = *((_QWORD *)&v7 + 1);
    KiSsbdBit = *((_QWORD *)&v7 + 1);
    *(_WORD *)&KeNumberProcessorsGroup0[4] = v4;
    DWORD1(KiSpeculationFeatures) = DWORD1(v7);
    KiSsbdMsr = DWORD1(v7);
  }
  if ( v8 )
    KiMicrocodeTrackerEnabled = 1;
  return result;
}
