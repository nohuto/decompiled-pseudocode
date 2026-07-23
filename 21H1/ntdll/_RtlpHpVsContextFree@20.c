/*
 * XREFs of _RtlpHpVsContextFree@20 @ 0x4B37F419
 * Callers:
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 * Callees:
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     @RtlpInterlockedFlushSList@4 @ 0x4B33E8E6 (@RtlpInterlockedFlushSList@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpVsContextFreeList@12 @ 0x4B37F65A (_RtlpHpVsContextFreeList@12.c)
 */

int __fastcall RtlpHpVsContextFree(PRTL_SRWLOCK SRWLock, unsigned int a2, int a3, int a4, unsigned int *a5)
{
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  bool v13; // zf
  unsigned int v14; // ecx
  PRTL_SRWLOCK v15; // ecx

  v6 = a3 - 8;
  if ( (*(_BYTE *)&SRWLock[38].0 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v6 = a3 - 16;
  v7 = 0;
  if ( !a2 )
  {
    v8 = v6;
    if ( (v6 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v6) < 0 )
    {
      v9 = v6 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v6 + 4);
LABEL_12:
      v9 = (unsigned __int8)v9;
LABEL_14:
      a2 = (v8 - (v9 << 12)) & 0xFFFFF000;
      goto LABEL_15;
    }
    v10 = ((v6 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v6) >> 16) & 0x7FFF;
    if ( v10 )
    {
      v8 = v6 - 8 * v10;
      if ( (v8 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v8) < 0 )
      {
LABEL_11:
        v9 = v8 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v8 + 4);
        goto LABEL_12;
      }
      v11 = ((v8 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v8) >> 16) & 0x7FFF;
      if ( v11 )
      {
        v8 += -8 * v11;
        goto LABEL_11;
      }
    }
    v9 = 0;
    goto LABEL_14;
  }
LABEL_15:
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 20) ^ *(_WORD *)(a2 + 22)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)SRWLock ^ SRWLock[32].Value, a2, 0, 0, 0);
    return v7;
  }
  v12 = v6 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v6;
  if ( v12 < 0 )
  {
    v13 = (*(_BYTE *)&SRWLock[38].0 & 4) == 0;
    v14 = 8 * ((unsigned __int16)v12 >> 1) - 8;
    *a5 = v14;
    if ( !v13 && v14 < 0x1000 )
    {
      v15 = SRWLock + 16;
      if ( *(_WORD *)&SRWLock[17].0 < 0x20u )
      {
        RtlpInterlockedPushEntrySList((unsigned int)v15, (_DWORD *)(v6 + 8));
        return 1;
      }
      v7 = RtlpInterlockedFlushSList((unsigned int)v15);
    }
    *(_DWORD *)(v6 + 8) = v7;
    RtlpHpVsContextFreeList(SRWLock, a4, v6 + 8);
    return 1;
  }
  RtlpLogHeapFailure(8, (unsigned int)SRWLock ^ SRWLock[32].Value, a3, v6, 0, 0);
  return v7;
}
