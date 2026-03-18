/*
 * XREFs of ?_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C013E174
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013AD00 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C013E1E0 (-_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ.c)
 */

__int64 __fastcall DXGMONITOR::_QueryColorSpaceTransformCaps(
        DXGMONITOR *this,
        __int64 a2,
        _OWORD *a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r14d
  __int64 v10; // rax
  __int128 v11; // xmm0

  v4 = 0;
  v7 = a2;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  *a4 = 0LL;
  if ( DXGMONITOR::_IsTargetMatrix_3x4Supported(this) )
  {
    if ( v7 >= 0x40 )
    {
      v11 = *(_OWORD *)((char *)this + 1116);
      *a4 = 64LL;
      *a3 = v11;
      a3[1] = *(_OWORD *)((char *)this + 1132);
      a3[2] = *(_OWORD *)((char *)this + 1148);
      a3[3] = *(_OWORD *)((char *)this + 1164);
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
