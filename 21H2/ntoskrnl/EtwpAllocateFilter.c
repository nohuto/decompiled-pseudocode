/*
 * XREFs of EtwpAllocateFilter @ 0x1407B8678
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x1407B84C0 (EtwpValidateFilterDescriptors.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x140940EBC (EtwpValidateTraceControlFilterDescriptors.c)
 * Callees:
 *     EtwpCreatePerfectHashFunction @ 0x1407B8750 (EtwpCreatePerfectHashFunction.c)
 *     EtwpAllocateEventNameFilter @ 0x140940288 (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x140940640 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1409406CC (EtwpAllocateStringFilterData.c)
 */

__int64 __fastcall EtwpAllocateFilter(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 v11; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  _WORD *v16; // rax
  __int64 v17; // rdx

  v4 = 0;
  switch ( a1 )
  {
    case -2147483640:
      v14 = a3;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v14);
    case -2147483632:
      v14 = a3 + 8;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v14);
    case -2147483616:
      v14 = a3 + 16;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v14);
    case -2147450880:
      v14 = a3 + 24;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v14);
    case -2147479552:
      v6 = *a2;
      v15 = *((unsigned int *)a2 + 2);
      if ( (unsigned int)(v15 - 6) <= 0x3FA )
      {
        v8 = *(unsigned __int16 *)(v6 + 2);
        if ( v15 == 2 * v8 + 4 )
        {
          v9 = 1LL;
          if ( (unsigned __int16)(v8 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v6 + 2) )
            {
              v16 = (_WORD *)(v6 + 4);
              while ( *v16 != 0xFFFF )
              {
                ++v4;
                ++v16;
                if ( v4 >= (unsigned int)v8 )
                  goto LABEL_31;
              }
              return (unsigned int)-1073741811;
            }
LABEL_31:
            v11 = a3 + 40;
LABEL_15:
            LOBYTE(v9) = *(_BYTE *)v6;
            return (unsigned int)EtwpCreatePerfectHashFunction(v9, v6 + 4, (unsigned __int16)v8, v11);
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147483136:
      v6 = *a2;
      v7 = *((unsigned int *)a2 + 2);
      if ( (unsigned int)(v7 - 6) <= 0x3FA )
      {
        v8 = *(unsigned __int16 *)(v6 + 2);
        if ( v7 == 2 * v8 + 4 )
        {
          v9 = 1LL;
          if ( (unsigned __int16)(v8 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v6 + 2) )
            {
              v10 = (_WORD *)(v6 + 4);
              while ( *v10 != 0xFFFF )
              {
                ++v4;
                ++v10;
                if ( v4 >= (unsigned int)v8 )
                  goto LABEL_14;
              }
              return (unsigned int)-1073741811;
            }
LABEL_14:
            v11 = a3 + 32;
            goto LABEL_15;
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147482624:
      v17 = a3 + 48;
      return (unsigned int)EtwpAllocateEventNameFilter(a2, v17);
    case -2147475456:
      v17 = a3 + 56;
      return (unsigned int)EtwpAllocateEventNameFilter(a2, v17);
  }
  if ( a1 != -2147483392 )
    return v4;
  if ( a4 )
    return (unsigned int)EtwpAllocatePayloadFilterData(a4, a2, a3 + 72);
  return 3221225485LL;
}
