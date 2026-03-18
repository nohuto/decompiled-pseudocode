/*
 * XREFs of ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0168700
 * Callers:
 *     DxgkGetPathsModality @ 0x1C0132F00 (DxgkGetPathsModality.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120184 (DxgkReleaseSessionModeChangeLock.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C012F0F0 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C01319EC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0131C28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C016878C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  CCD_BTL *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v13, 0);
  v7 = v4;
  if ( v4 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v12 + 24) = v7;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    v8 = CCD_BTL::Global(v6, v5);
    LODWORD(v7) = CCD_BTL::RetrieveAllPaths(v8, this, a2);
    if ( (int)v7 >= 0 )
    {
      LODWORD(v7) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v7 >= 0 )
        LODWORD(v7) = CCD_TOPOLOGY::FillPathsTargetFlags(this, v9);
    }
  }
  if ( v13 )
    DxgkReleaseSessionModeChangeLock(v10, v9);
  return (unsigned int)v7;
}
