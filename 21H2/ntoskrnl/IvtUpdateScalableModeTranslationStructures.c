/*
 * XREFs of IvtUpdateScalableModeTranslationStructures @ 0x1405300A8
 * Callers:
 *     IvtUpdateTranslationStructures @ 0x140530270 (IvtUpdateTranslationStructures.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x14052E940 (IvtGetBlockedDomain.c)
 *     IvtGetPasidGranularTranslationType @ 0x14052EA40 (IvtGetPasidGranularTranslationType.c)
 *     IvtGetScalableModePasidTables @ 0x14052EA60 (IvtGetScalableModePasidTables.c)
 *     IvtUpdateScalableModeContextEntry @ 0x14052FEA0 (IvtUpdateScalableModeContextEntry.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x14052FFE0 (IvtUpdateScalableModePasidTablesForPasid.c)
 */

_QWORD *__fastcall IvtUpdateScalableModeTranslationStructures(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        _QWORD *a10)
{
  __int64 *ScalableModePasidTables; // rsi
  __int64 v13; // rcx
  char v14; // di
  int v15; // edx
  int PasidGranularTranslationType; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int16 v19; // r10
  __int64 v20; // r9
  _QWORD *result; // rax
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  v26 = a2;
  ScalableModePasidTables = a4;
  if ( !a4 )
    ScalableModePasidTables = IvtGetScalableModePasidTables(a1, a2);
  v13 = 0LL;
  v14 = 0;
  v25 = 0LL;
  if ( a7 )
  {
    v15 = *(_DWORD *)(a7 + 4);
    if ( v15 == 1 )
    {
      v14 = 1;
      IvtGetBlockedDomain(a1, &v26, (unsigned __int64 *)&v25);
      v13 = v25;
      goto LABEL_11;
    }
    if ( v15 )
    {
      v13 = *(_QWORD *)(a7 + 40) >> 12;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 319) )
        goto LABEL_11;
      v13 = *(__int64 *)(a1 + 328) >> 12;
    }
    v14 = 1;
  }
LABEL_11:
  PasidGranularTranslationType = IvtGetPasidGranularTranslationType(v13, 0, v14);
  IvtUpdateScalableModePasidTablesForPasid(
    a1,
    (__int64)ScalableModePasidTables,
    v18,
    PasidGranularTranslationType,
    v19,
    v17);
  IvtUpdateScalableModeContextEntry(a1, a2, ScalableModePasidTables, v20, v22, v23, v24, a9);
  result = a10;
  if ( a10 )
    *a10 = 0x10000LL;
  return result;
}
