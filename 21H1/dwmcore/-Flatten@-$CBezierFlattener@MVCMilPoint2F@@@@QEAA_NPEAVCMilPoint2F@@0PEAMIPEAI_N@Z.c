/*
 * XREFs of ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18025EB18
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18025F21C (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18025F78C (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18025ECA0 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ?Step@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18025EEA8 (-Step@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x18025EF3C (-TryDoubleTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ.c)
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::Flatten(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r10
  char result; // al

  v8 = 1;
  v9 = 0LL;
  while ( *(_DWORD *)(a1 + 80) > v8 )
  {
    if ( (unsigned int)v9 >= a5 )
      goto LABEL_14;
    CBezierFlattener<float,CMilPoint2F>::Step();
    *(_QWORD *)(a2 + 8 * v11) = *(_QWORD *)(v10 + 48);
    if ( a4 )
      *(_DWORD *)(a4 + 4 * v11) = *(_DWORD *)(v10 + 84);
    if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(v10 + 64) & _xmm), COERCE_FLOAT(*(_DWORD *)(v10 + 68) & _xmm)) <= *(float *)(v10 + 32)
      || *(float *)(v10 + 88) <= 0.001 )
    {
      while ( (unsigned __int8)CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep() )
        ;
    }
    else
    {
      CBezierFlattener<float,CMilPoint2F>::HalveTheStep();
    }
  }
  if ( (unsigned int)v9 < a5 )
  {
    *(_QWORD *)(a2 + 8 * v9) = *(_QWORD *)(a1 + 24);
    if ( a4 )
      *(_DWORD *)(a4 + 4 * v9) = 1065353216;
    LODWORD(v9) = v8 + v9;
    LOBYTE(v8) = 0;
  }
LABEL_14:
  result = v8;
  *a6 = v9;
  return result;
}
