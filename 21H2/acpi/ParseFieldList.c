/*
 * XREFs of ParseFieldList @ 0x1C0015C40
 * Callers:
 *     Field @ 0x1C0019CE0 (Field.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 * Callees:
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintIndent @ 0x1C0067C48 (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseFieldList(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v7; // r12d
  unsigned int v9; // ebx
  __int64 v10; // r14
  int v11; // edi
  _BYTE v13[4]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+34h] [rbp-34h] BYREF
  _DWORD *v15; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = a4;
  v7 = 0;
  v13[0] = 0;
  v14 = 0;
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1, a2, a3, a4);
    ConPrintf("{");
    ++dword_1C00819C4;
  }
  v9 = a5;
  v15 = 0LL;
  while ( *(_QWORD *)(a1 + 120) < a2 )
  {
    v7 = ParseField(a1, (unsigned __int8 *)a3, &v16, &v14, v13, &v15);
    if ( v7 )
      break;
    v10 = **(_QWORD **)(a3 + 96);
    if ( (gDebugger & 0xD0) != 0 && *(_QWORD *)(a1 + 120) < a2 )
      ConPrintf(",");
    if ( v9 != -1 )
    {
      v11 = v14;
      if ( (unsigned int)(v14 + 7) >> 3 > v9 && *(_BYTE *)(*(_QWORD *)(v10 + 96) + 12LL) != 6 )
      {
        v7 = -1072431100;
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        PrintDebugMessage(127, (unsigned int)(v11 + 7) >> 3, v9, 0, 0LL);
        break;
      }
    }
  }
  if ( v15 )
    HeapFree(v15);
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_1C00819C4;
    PrintIndent(a1, a2, a3, a4);
    ConPrintf("}");
  }
  return v7;
}
