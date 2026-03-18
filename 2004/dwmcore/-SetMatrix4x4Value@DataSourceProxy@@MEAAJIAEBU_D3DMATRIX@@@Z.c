/*
 * XREFs of ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180182120
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180180B4C (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSIO.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18018182C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180181BB8 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetMatrix4x4Value(DataSourceProxy *this, int a2, const struct _D3DMATRIX *a3)
{
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_OWORD *)&a3->_21;
  v10[0] = *(_OWORD *)&a3->_11;
  v6 = *(_OWORD *)&a3->_31;
  v10[1] = v4;
  v7 = *(_OWORD *)&a3->_41;
  v10[2] = v6;
  v10[3] = v7;
  v8 = DataSourcePropertySet::SetProperty<D2DMatrix>((_QWORD *)this + 8, a2, v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
