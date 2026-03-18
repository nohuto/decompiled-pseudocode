/*
 * XREFs of ACPIRegLocalCopyString @ 0x1C008FB98
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F9E0 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1F58 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3EBC (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC584 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIRegLocalCopyString(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  char *v5; // r10
  __int64 v6; // rdx
  char v7; // r8
  char v8; // al
  char *result; // rax

  v3 = 0;
  if ( a3 )
  {
    v5 = a1;
    v6 = a2 - (_QWORD)a1;
    do
    {
      v7 = v5[v6];
      if ( !v7 )
        break;
      v8 = v5[v6];
      if ( v7 == 32 )
        v8 = 95;
      ++v3;
      *v5++ = v8;
    }
    while ( v3 < a3 );
  }
  result = &a1[v3];
  *result = 0;
  return result;
}
