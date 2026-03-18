/*
 * XREFs of ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01E5F2C
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03A9374 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v6; // rcx

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v6 = *(_QWORD *)PathDescriptor;
    if ( (*(_QWORD *)PathDescriptor & 0x10000000000000LL) != 0 )
    {
      WdLogSingleEntry1(1LL, 1245LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_PATH_SMI_TMI_FORCED_FIXED) == 0",
        1245LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = *(_QWORD *)PathDescriptor;
    }
    if ( (v6 & 0x800000) != 0 )
    {
      if ( (v6 & 0x100) == 0 )
      {
        WdLogSingleEntry1(1LL, 1252LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID",
          1252LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = *(_QWORD *)PathDescriptor;
      }
      if ( (v6 & 0x20000) == 0 )
      {
        WdLogSingleEntry1(1LL, 1253LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_CONTENT_SIZE_VALID",
          1253LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
}
