/*
 * XREFs of ACPIPccProcessSci @ 0x1C00596BC
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0025B50 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C00599F0 (AcpiPccCommandComplete.c)
 *     AcpiPccPlatformNotification @ 0x1C0059EA4 (AcpiPccPlatformNotification.c)
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
        v2 = (_QWORD *)(AcpiPccSubspaces + 648LL * i);
        LOBYTE(v0) = *(_BYTE *)v2 + 1;
        if ( ((unsigned __int8)v0 & 0xFE) == 0 && v2[7] )
        {
          if ( *((_DWORD *)v2 + 108) && (*(_WORD *)v2[7] & 2) != 0 )
            AcpiPccCommandComplete(AcpiPccSubspaces + 648LL * i);
          v0 = (_WORD *)v2[7];
          if ( (*v0 & 8) != 0 )
            LOBYTE(v0) = AcpiPccPlatformNotification(v2);
        }
      }
    }
  }
  return (char)v0;
}
