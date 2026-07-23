/*
 * XREFs of _LdrpRecordUnloadEvent@4 @ 0x4B2DA5AD
 * Callers:
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C (_WerEscalationReadImageVersionInfoForModuleBaseSafe@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

PVOID __thiscall LdrpRecordUnloadEvent(int this)
{
  int v1; // eax
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // edi
  PVOID result; // eax
  int v9; // edx
  size_t v10; // [esp-4h] [ebp-2Ch]
  SIZE_T v11; // [esp-4h] [ebp-2Ch]
  int v12; // [esp+Ch] [ebp-1Ch] BYREF
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  v1 = LdrpUnloadIndex;
  v17 = LdrpUnloadIndex & 0xF;
  v3 = 92 * v17;
  dword_4B3A5DC8[v3 / 4] = LdrpUnloadIndex;
  LdrpUnloadIndex = v1 + 1;
  RtlpUnloadEventTrace[v3 / 4] = *(_DWORD *)(this + 24);
  dword_4B3A5DC4[v3 / 4] = *(_DWORD *)(this + 32);
  v4 = *(unsigned __int16 *)(this + 44);
  v18 = v4;
  if ( (unsigned __int16)v4 > 0x40u )
  {
    LOWORD(v4) = 64;
    v18 = 64;
  }
  v5 = (unsigned __int16)v4;
  LODWORD(v10) = (unsigned __int16)v4;
  memcpy(&word_4B3A5DD4[v3 / 2], *(const void **)(this + 48), v10);
  if ( (unsigned __int16)v18 < 0x40u )
    word_4B3A5DD4[46 * v17 + (v5 >> 1)] = 0;
  WerEscalationReadImageVersionInfoForModuleBaseSafe(&v12);
  dword_4B3A5DCC[v3 / 4] = v12;
  dword_4B3A5DD0[v3 / 4] = v13;
  dword_4B3A5E14[v3 / 4] = v14;
  dword_4B3A5E18[v3 / 4] = v15;
  v17 = RtlpUnloadEventTraceEx;
  if ( RtlpUnloadEventTraceEx )
    goto LABEL_6;
  v9 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
  {
    v9 = 0xFFFF;
    RtlpUnloadEventTraceExNumber = 0xFFFF;
  }
  LODWORD(v11) = 92 * v9;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, v11);
  v17 = (int)result;
  RtlpUnloadEventTraceEx = (int)result;
  if ( result )
  {
LABEL_6:
    v6 = LdrpUnloadIndexEx;
    v16 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v7 = 92 * v16;
    LODWORD(v11) = v5;
    *(_DWORD *)(v7 + v17 + 8) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v6 + 1;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx) = *(_DWORD *)(this + 24);
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 4) = *(_DWORD *)(this + 32);
    memcpy((void *)(v7 + RtlpUnloadEventTraceEx + 20), *(const void **)(this + 48), v11);
    if ( (unsigned __int16)v18 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (46 * v16 + (v5 >> 1)) + 20) = 0;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 12) = v12;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 16) = v13;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 84) = v14;
    result = (PVOID)RtlpUnloadEventTraceEx;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 88) = v15;
  }
  return result;
}
