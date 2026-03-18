/*
 * XREFs of ACPIPccProcessSci @ 0x1C005A6BC
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0030DD0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C005A8D0 (AcpiPccCommandComplete.c)
 *     AcpiPccPlatformNotification @ 0x1C005AE9C (AcpiPccPlatformNotification.c)
 */

char ACPIPccProcessSci()
{
  _WORD *v0; // rax
  unsigned int i; // edi
  _QWORD *v2; // rbx

  LOBYTE(v0) = AcpiPccSciReferenceCount;
  if ( AcpiPccSciReferenceCount )
  {
    LOBYTE(v0) = AcpiPccLegacySubspace;
    if ( AcpiPccLegacySubspace )
    {
      LODWORD(v0) = *(_DWORD *)(AcpiPccLegacySubspace + 432);
      if ( (_DWORD)v0 )
      {
        LOWORD(v0) = **(_WORD **)(AcpiPccLegacySubspace + 56);
        if ( ((unsigned __int8)v0 & 2) != 0 )
          LOBYTE(v0) = AcpiPccCommandComplete(AcpiPccLegacySubspace);
      }
    }
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v2 = (_QWORD *)(AcpiPccSubspaces + 656LL * i);
        LOBYTE(v0) = *(_BYTE *)v2 + 1;
        if ( ((unsigned __int8)v0 & 0xFE) == 0 && v2[7] )
        {
          if ( *((_DWORD *)v2 + 108) && (*(_WORD *)v2[7] & 2) != 0 )
            AcpiPccCommandComplete(AcpiPccSubspaces + 656LL * i);
          v0 = (_WORD *)v2[7];
          if ( (*v0 & 8) != 0 )
            LOBYTE(v0) = AcpiPccPlatformNotification(v2);
        }
      }
    }
  }
  return (char)v0;
}
