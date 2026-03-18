/*
 * XREFs of ParseFieldList @ 0x1C00219D8
 * Callers:
 *     Field @ 0x1C00218B0 (Field.c)
 *     IndexField @ 0x1C0023590 (IndexField.c)
 *     BankField @ 0x1C0066E40 (BankField.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     PrintIndent @ 0x1C0066760 (PrintIndent.c)
 */

__int64 __fastcall ParseFieldList(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v9; // r15
  int v10; // ebp
  _BYTE v12[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v5 = 0;
  v13 = 0;
  v12[0] = 0;
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1, a2, a3, a4);
    ConPrintf("{");
    ++dword_1C0082804;
  }
  v14 = 0LL;
  while ( *(_QWORD *)(a1 + 120) < a2 )
  {
    v5 = ParseField(a1, a3, (unsigned int)&v15, (unsigned int)&v13, (__int64)v12, (__int64)&v14);
    if ( v5 )
      break;
    v9 = **(_QWORD **)(a3 + 96);
    if ( (gDebugger & 0xD0) != 0 && *(_QWORD *)(a1 + 120) < a2 )
      ConPrintf(",");
    if ( a5 != -1 )
    {
      v10 = v13;
      if ( (unsigned int)(v13 + 7) >> 3 > a5 && *(_BYTE *)(*(_QWORD *)(v9 + 96) + 12LL) != 6 )
      {
        v5 = -1072431100;
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        PrintDebugMessage(127, (unsigned int)(v10 + 7) >> 3, a5, 0, 0LL);
        break;
      }
    }
  }
  if ( v14 )
    HeapFree(v14);
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_1C0082804;
    PrintIndent(a1, a2, a3, a4);
    ConPrintf("}");
  }
  return v5;
}
