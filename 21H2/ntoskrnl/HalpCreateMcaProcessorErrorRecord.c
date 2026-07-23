/*
 * XREFs of HalpCreateMcaProcessorErrorRecord @ 0x1404BA10C
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9D30 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x1404B9568 (HalpAddMcaToProcessorGenericSection.c)
 *     HalpAddMcaToProcessorSpecificSection @ 0x1404B9718 (HalpAddMcaToProcessorSpecificSection.c)
 *     WheaInitializeRecordHeader @ 0x1405BCC30 (WheaInitializeRecordHeader.c)
 */

__int64 __fastcall HalpCreateMcaProcessorErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  __int64 v10; // r13
  unsigned int v11; // r15d
  _OWORD *v12; // rsi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r15d
  __int64 v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  unsigned int v19; // ecx
  unsigned int v21; // [rsp+60h] [rbp+8h]
  unsigned int v22; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v22 = 0;
  memset((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader(a3);
  *(_WORD *)(a3 + 10) = 4;
  v10 = a3 + v9;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  v21 = v9;
  v11 = v9 + 192;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (*(_DWORD *)(a2 + 12) >> 1)) & 4;
  if ( v11 > a4 )
    return (unsigned int)-1073741789;
  ((void (__fastcall *)(__int64, __int64))off_140C006B8[0])(a3 + 128, v10);
  v12 = (_OWORD *)(a2 + 80);
  HalpAddMcaToProcessorGenericSection(a2 + 80, v10);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v21;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v11 + 65 > a4 )
    return (unsigned int)-1073741789;
  HalpAddMcaToProcessorSpecificSection(a2 + 80, (GUID *)(a3 + v11), &v22);
  v13 = v22;
  *(_DWORD *)(a3 + 200) = v11;
  *(_DWORD *)(a3 + 204) = v13;
  v14 = v11 + v13;
  *(_WORD *)(a3 + 208) = 768;
  v15 = v11 + v13 + 272;
  *(GUID *)(a3 + 216) = XPF_PROCESSOR_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v15 > a4 )
    return (unsigned int)-1073741789;
  v16 = 2LL;
  v17 = (_OWORD *)(a3 + v14);
  do
  {
    *v17 = *v12;
    v17[1] = v12[1];
    v17[2] = v12[2];
    v17[3] = v12[3];
    v17[4] = v12[4];
    v17[5] = v12[5];
    v17[6] = v12[6];
    v17 += 8;
    v18 = v12[7];
    v12 += 8;
    *(v17 - 1) = v18;
    --v16;
  }
  while ( v16 );
  *v17 = *v12;
  *(_DWORD *)(a3 + 272) = v14;
  *(_DWORD *)(a3 + 276) = 272;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  v19 = *(_DWORD *)(a2 + 8);
  if ( v19 + v15 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v15), (const void *)a2, v19);
    *(_DWORD *)(a3 + 344) = v15;
    *(_DWORD *)(a3 + 348) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 352) = 768;
    *(GUID *)(a3 + 360) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 392) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
