/*
 * XREFs of SdbpCheckAttribute @ 0x1407ADAAC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407AD86C (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslStringPatternMatchW @ 0x14074EE20 (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpCheckUptoVersion @ 0x1407AEB38 (SdbpCheckUptoVersion.c)
 *     SdbpCheckFromVersion @ 0x140969E40 (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x140969E84 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckAttribute(
        _DWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  bool v10; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 == 16414 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( a2 == 16435 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( a2 <= 0x5001u )
    goto LABEL_9;
  if ( a2 <= 0x5003u )
  {
    if ( a4 >= 8 )
    {
      v8 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
      goto LABEL_14;
    }
    goto LABEL_22;
  }
  if ( a2 != 20493 && a2 != 20486 )
  {
    if ( a2 > 0x5011u && a2 <= 0x5013u )
    {
      if ( a4 >= 8 )
      {
        v8 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
        goto LABEL_14;
      }
      goto LABEL_22;
    }
LABEL_9:
    v7 = a2 & 0xF000;
    switch ( v7 )
    {
      case 16384:
        if ( a4 < 4 )
          goto LABEL_22;
        v10 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
        break;
      case 20480:
        if ( a4 < 8 )
          goto LABEL_22;
        v10 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
        break;
      case 24576:
        if ( a4 >= 2 )
        {
          v8 = AslStringPatternMatchW(a3, *(unsigned __int16 **)(a5 + 16));
LABEL_14:
          v5 = v8;
          goto LABEL_15;
        }
        goto LABEL_22;
      default:
LABEL_15:
        result = 1LL;
        *a1 = v5;
        return result;
    }
    LOBYTE(v5) = v10;
    goto LABEL_15;
  }
  if ( a4 >= 8 )
  {
    v8 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
    goto LABEL_14;
  }
LABEL_22:
  AslLogCallPrintf(1LL);
  return 0LL;
}
