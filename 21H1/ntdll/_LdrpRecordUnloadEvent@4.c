/*
 * XREFs of _LdrpRecordUnloadEvent@4 @ 0x4B2DA5AD
 * Callers:
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C (_WerEscalationReadImageVersionInfoForModuleBaseSafe@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __thiscall LdrpRecordUnloadEvent(int this)
{
  int v1; // eax
  unsigned int v3; // edi
  int v4; // eax
  size_t v5; // esi
  int v6; // ecx
  int v7; // edi
  int result; // eax
  int v9; // edx
  int v10; // [esp+Ch] [ebp-1Ch] BYREF
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v1 = LdrpUnloadIndex;
  v15 = LdrpUnloadIndex & 0xF;
  v3 = 92 * v15;
  dword_4B3A5DC8[v3 / 4] = LdrpUnloadIndex;
  LdrpUnloadIndex = v1 + 1;
  RtlpUnloadEventTrace[v3 / 4] = *(_DWORD *)(this + 24);
  dword_4B3A5DC4[v3 / 4] = *(_DWORD *)(this + 32);
  v4 = *(unsigned __int16 *)(this + 44);
  v16 = v4;
  if ( (unsigned __int16)v4 > 0x40u )
  {
    LOWORD(v4) = 64;
    v16 = 64;
  }
  v5 = (unsigned __int16)v4;
  memcpy(&word_4B3A5DD4[v3 / 2], *(const void **)(this + 48), (unsigned __int16)v4);
  if ( (unsigned __int16)v16 < 0x40u )
    word_4B3A5DD4[46 * v15 + (v5 >> 1)] = 0;
  WerEscalationReadImageVersionInfoForModuleBaseSafe(&v10);
  dword_4B3A5DCC[v3 / 4] = v10;
  dword_4B3A5DD0[v3 / 4] = v11;
  dword_4B3A5E14[v3 / 4] = v12;
  dword_4B3A5E18[v3 / 4] = v13;
  v15 = RtlpUnloadEventTraceEx;
  if ( RtlpUnloadEventTraceEx )
    goto LABEL_6;
  v9 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
  {
    v9 = 0xFFFF;
    RtlpUnloadEventTraceExNumber = 0xFFFF;
  }
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 92 * v9);
  v15 = result;
  RtlpUnloadEventTraceEx = result;
  if ( result )
  {
LABEL_6:
    v6 = LdrpUnloadIndexEx;
    v14 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v7 = 92 * v14;
    *(_DWORD *)(v7 + v15 + 8) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v6 + 1;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx) = *(_DWORD *)(this + 24);
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 4) = *(_DWORD *)(this + 32);
    memcpy((void *)(v7 + RtlpUnloadEventTraceEx + 20), *(const void **)(this + 48), v5);
    if ( (unsigned __int16)v16 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (46 * v14 + (v5 >> 1)) + 20) = 0;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 12) = v10;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 16) = v11;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 84) = v12;
    result = RtlpUnloadEventTraceEx;
    *(_DWORD *)(v7 + RtlpUnloadEventTraceEx + 88) = v13;
  }
  return result;
}
