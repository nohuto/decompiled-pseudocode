/*
 * XREFs of ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00DF8B0
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C00DF740 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     ?_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C00DEE10 (-_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00DF944 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02F6F18 (-_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02F71E0 (-_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02F763C (-_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02F7770 (-_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchIoctrls(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        _OWORD *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v11; // rax
  unsigned int v12; // edx
  void *v13; // r8
  int v14; // ebx
  int v15; // ebx
  unsigned int active; // eax
  unsigned int v17; // ecx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx

  v8 = (unsigned int)a2;
  v9 = a3;
  v11 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = this;
  v14 = v8 - 2297856;
  if ( !v14 )
    return (unsigned int)DXGMONITOR::_QueryColorSpaceTransformCaps(this, a5, a6, a7);
  v15 = v14 - 4;
  if ( v15 )
  {
    v20 = v15 - 4;
    if ( !v20 )
    {
      active = DXGMONITOR::_SetActiveColorProfileName(this, v12, v13);
      goto LABEL_4;
    }
    v21 = v20 - 1016;
    if ( v21 )
    {
      v22 = v21 - 4;
      if ( v22 )
      {
        if ( v22 != 4 )
          return (unsigned int)-1073741637;
        return (unsigned int)DXGMONITOR::_DsiReset(this, v9, a4, a5, a6, a7);
      }
      else
      {
        return (unsigned int)DXGMONITOR::_DsiTransmission(this, v9, a4, a5, a6, a7);
      }
    }
    else
    {
      return (unsigned int)DXGMONITOR::_QueryMipiDsiCaps(this, a5, a6, a7);
    }
  }
  active = DXGMONITOR::_SetColorSpaceTransform(this, v9, a4);
LABEL_4:
  v17 = active;
  *a7 = 0LL;
  return v17;
}
