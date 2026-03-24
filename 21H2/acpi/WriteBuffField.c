/*
 * XREFs of WriteBuffField @ 0x1C0024994
 * Callers:
 *     AccessFieldData @ 0x1C0031E7C (AccessFieldData.c)
 * Callees:
 *     WriteSystemMem @ 0x1C0024A34 (WriteSystemMem.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 */

__int64 __fastcall WriteBuffField(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ecx
  unsigned int v8; // ebx

  v4 = 0;
  v6 = (a3[3] & 0xF) - 1;
  v8 = 1;
  if ( v6 <= 3 )
    v8 = 1 << v6;
  if ( *a3 + v8 > *(_DWORD *)(a2 + 8) )
  {
    LogError(3222536196LL);
    AcpiDiagTraceAmlError(a1, 3222536196LL);
    PrintDebugMessage(211, *a3, *(_DWORD *)(a2 + 8), v8, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + *a3), v8);
  }
  return v4;
}
