/*
 * XREFs of IcClearPossibleData @ 0x1C0094980
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092350 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1C0093900 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C00942E0 (IrqArbBootAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0097104 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B752C (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

void IcClearPossibleData()
{
  __int64 i; // r10
  unsigned int v1; // r9d
  unsigned int v2; // r11d
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int v5; // edx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v1 = 0;
      v2 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v3 = i + 136;
        v4 = i + 136;
        do
        {
          *(_DWORD *)(v3 - 100) = 0;
          v4 += 200LL;
          v3 += 200LL;
          *(_OWORD *)(v4 - 200) = 0LL;
          *(_OWORD *)(v4 - 184) = 0LL;
          *(_OWORD *)(v4 - 168) = 0LL;
          *(_OWORD *)(v4 - 152) = 0LL;
          *(_OWORD *)(v4 - 136) = 0LL;
          *(_QWORD *)(v4 - 120) = 0LL;
          *(_DWORD *)(v3 - 200) = 0;
          v5 = v1 + *(_DWORD *)(i + 16);
          ++v1;
          *(_DWORD *)(v3 - 144) = v5;
        }
        while ( v1 < v2 );
      }
    }
  }
}
