/*
 * XREFs of KiSelectProcessorToPreempt @ 0x14051FFB8
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x14051F740 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x140398FA4 (KiIsQosGroupingActive.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall KiSelectProcessorToPreempt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  char *v10; // r14
  __int64 v11; // rbx
  bool IsQosGroupingActive; // al
  int v13; // r8d
  unsigned int v14; // r9d
  char v15; // r10
  __int64 v16; // r13
  unsigned int v17; // ecx
  char *v18; // r11
  unsigned int v19; // ecx
  char *v20; // rdx
  _BYTE v22[64]; // [rsp+20h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 33856) & a3;
  if ( ((v5 - 1) & v5) != 0 )
  {
    v8 = *(unsigned __int8 **)(a2 + 33864);
    v9 = v8[593];
    v10 = &v22[v9];
    memmove(&v22[v9], v8 + 528, v8[592]);
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 360LL);
    IsQosGroupingActive = KiIsQosGroupingActive();
    v16 = (unsigned int)(v13 + 2);
    if ( IsQosGroupingActive
      && (v11 & v5) != 0
      && (unsigned __int8)*(_DWORD *)(a1 + 512) - (unsigned int)v16 <= (unsigned int)v16 )
    {
      v17 = v9;
      if ( (unsigned int)v9 < v14 )
      {
        v18 = &v22[v9];
        do
        {
          if ( ((v16 << v17) & v11 & v5) != 0 && *v18 < v15 )
          {
            v15 = *v18;
            v13 = v17;
          }
          v17 += v16;
          v18 += v16;
        }
        while ( v17 < v14 );
      }
    }
    if ( a4 )
    {
      if ( v13 >= 0 )
        return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
      v19 = v9;
      if ( (unsigned int)v9 < v14 )
      {
        v20 = &v22[v9];
        do
        {
          if ( ((v16 << v19) & a4) != 0 && *v20 < v15 )
          {
            v15 = *v20;
            v13 = v19;
          }
          v19 += v16;
          v20 += v16;
        }
        while ( v19 < v14 );
      }
    }
    if ( v13 >= 0 )
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
    while ( (unsigned int)v9 < v14 )
    {
      if ( ((v16 << v9) & v5) != 0 && *v10 < v15 )
      {
        v15 = *v10;
        v13 = v9;
      }
      LODWORD(v9) = v16 + v9;
      v10 += v16;
    }
    if ( v13 >= 0 )
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
  }
  return a2;
}
