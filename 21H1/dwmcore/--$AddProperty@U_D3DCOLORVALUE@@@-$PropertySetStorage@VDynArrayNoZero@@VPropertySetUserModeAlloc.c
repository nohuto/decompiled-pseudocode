/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAI@Z @ 0x1800C49C4
 * Callers:
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800C4880 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCO.c)
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180183FB8 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<_D3DCOLORVALUE>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v14) = a2;
  v9 = v7 + 1;
  HIDWORD(v14) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_5;
  }
  if ( v9 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v14);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
LABEL_5:
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_6;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
  *(_DWORD *)(a1 + 24) = v9;
LABEL_6:
  result = DynArrayImpl<0>::Grow(a1 + 32, 1u, 16, 1, 0LL);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) += 16;
    *(_OWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
    *a4 = v7;
    return 0LL;
  }
  return result;
}
