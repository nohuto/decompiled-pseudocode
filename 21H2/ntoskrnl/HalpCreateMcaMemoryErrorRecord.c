/*
 * XREFs of HalpCreateMcaMemoryErrorRecord @ 0x1404B9E98
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9D30 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404B9464 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 *     HalpAddMcaToMemoryErrorSection @ 0x1404B94D0 (HalpAddMcaToMemoryErrorSection.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x1404B9568 (HalpAddMcaToProcessorGenericSection.c)
 *     WheaInitializeRecordHeader @ 0x1405BCC30 (WheaInitializeRecordHeader.c)
 */

__int64 __fastcall HalpCreateMcaMemoryErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r13d
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  _OWORD *v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // r13d
  _OWORD *v18; // rcx
  __int64 v19; // rax
  __int128 v20; // xmm1
  unsigned int v21; // ecx

  v8 = 0;
  memset((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader(a3);
  *(_WORD *)(a3 + 10) = 4;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a3 + 104) ^ (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v10;
  v11 = (v10 ^ (*(_DWORD *)(a2 + 12) >> 1)) & 4 ^ v10;
  *(_DWORD *)(a3 + 104) = v11;
  v12 = (*(_BYTE *)(a2 + 12) & 0xC0) == 0x40 ? v11 & 0xFFFFFFDF : v11 | 0x20;
  v13 = v9 + 80;
  *(_DWORD *)(a3 + 104) = v12;
  if ( v9 + 80 > a4 )
    return (unsigned int)-1073741789;
  v14 = (_OWORD *)(a2 + 80);
  v15 = a2 + 80;
  if ( HalpMcaExtendedLoggingSupported )
    HalpAddMcaExtendedLogToMemoryErrorSection(v15, a3 + 128, a3 + v9);
  else
    HalpAddMcaToMemoryErrorSection(v15, (_QWORD *)(a3 + v9));
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v9;
  *(_WORD *)(a3 + 136) = 768;
  *(_DWORD *)(a3 + 132) = 80;
  *(GUID *)(a3 + 144) = MEMORY_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v9 + 272 > a4 )
    return (unsigned int)-1073741789;
  ((void (__fastcall *)(__int64, __int64))off_140C006B8[0])(a3 + 200, a3 + v13);
  HalpAddMcaToProcessorGenericSection(a2 + 80, a3 + v13);
  *(_DWORD *)(a3 + 200) = v13;
  v16 = *(_DWORD *)(a3 + 204) + v13;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  v17 = v16 + 272;
  if ( v16 + 272 > a4 )
    return (unsigned int)-1073741789;
  v18 = (_OWORD *)(a3 + v16);
  v19 = 2LL;
  do
  {
    *v18 = *v14;
    v18[1] = v14[1];
    v18[2] = v14[2];
    v18[3] = v14[3];
    v18[4] = v14[4];
    v18[5] = v14[5];
    v18[6] = v14[6];
    v18 += 8;
    v20 = v14[7];
    v14 += 8;
    *(v18 - 1) = v20;
    --v19;
  }
  while ( v19 );
  *v18 = *v14;
  *(_DWORD *)(a3 + 272) = v16;
  *(_DWORD *)(a3 + 276) = 272;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  v21 = *(_DWORD *)(a2 + 8);
  if ( v21 + v17 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v17), (const void *)a2, v21);
    *(_DWORD *)(a3 + 344) = v17;
    *(_DWORD *)(a3 + 348) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 352) = 768;
    *(GUID *)(a3 + 360) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 392) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
