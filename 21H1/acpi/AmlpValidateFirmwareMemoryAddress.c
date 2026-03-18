/*
 * XREFs of AmlpValidateFirmwareMemoryAddress @ 0x1C0029EAC
 * Callers:
 *     MapPhysMem @ 0x1C0029E04 (MapPhysMem.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C0063674 (AMLIValidateFirmwareMemoryAddress.c)
 * Callees:
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 */

__int64 __fastcall AmlpValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *a1;
  v5 = a2 + *a1;
  if ( v5 <= 4096 )
  {
    return 0;
  }
  else
  {
    v6 = MemoryInfo;
    if ( v2 < 4096 )
      v2 = 4096LL;
    v7 = 0;
    v8 = 0;
    if ( *(_QWORD *)(MemoryInfo + 8) )
    {
      v9 = 0LL;
      do
      {
        v10 = *(_QWORD *)(v6 + 24 * v9 + 16);
        if ( v5 > v10 && v2 < *(_QWORD *)(v6 + 24 * v9 + 24) + v10 )
        {
          if ( *(_DWORD *)(v6 + 24 * v9 + 32) == 1 )
            return (unsigned int)-1073741788;
          if ( *(_DWORD *)(v6 + 24 * v9 + 32) == 3 && gAllowInvalidReclaimMemoryMap )
          {
            LogError(3222536208LL);
            AcpiDiagTraceAmlError(0LL, 3222536208LL);
            PrintDebugMessage(103, *a1, a2 + *a1, 0, 0LL);
          }
        }
        v6 = MemoryInfo;
        v9 = ++v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(MemoryInfo + 8) );
    }
  }
  return v7;
}
