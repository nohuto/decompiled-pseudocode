/*
 * XREFs of ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01D5D78
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D3EC0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01EE858 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01D5E50 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C01D5F70 (EnforceDriverModelScalingPolicy.c)
 */

void __fastcall CCD_TOPOLOGY::FillScalingIntent(CCD_TOPOLOGY *this)
{
  unsigned int i; // esi
  __int64 v3; // rax
  unsigned __int16 v4; // dx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_QWORD *)PathDescriptor & 0x10000LL) != 0 )
    {
      v7 = *((_DWORD *)PathDescriptor + 34);
      v8 = *((_DWORD *)PathDescriptor + 35);
      if ( v7 != v8 && (unsigned int)(v8 - 4) <= 1 )
      {
        if ( v7 == 1 )
          DxgkGetAdapterDefaultScaling((char *)PathDescriptor + 16, (char *)PathDescriptor + 140);
        else
          *((_DWORD *)PathDescriptor + 35) = v7;
      }
      EnforceDriverModelScalingPolicy((char *)PathDescriptor + 16, (char *)PathDescriptor + 140, v6);
    }
    else
    {
      if ( (*(_QWORD *)PathDescriptor & 0x40000000000LL) != 0
        && (v9 = *((_DWORD *)PathDescriptor + 34), v9 >= 2)
        && v9 <= 5 )
      {
        *((_DWORD *)PathDescriptor + 35) = v9;
        EnforceDriverModelScalingPolicy((char *)PathDescriptor + 16, (char *)PathDescriptor + 140, v6);
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)PathDescriptor + 16, (char *)PathDescriptor + 140);
      }
      *(_QWORD *)PathDescriptor |= 0x10000uLL;
    }
  }
}
