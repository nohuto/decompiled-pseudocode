/*
 * XREFs of ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x180020228
 * Callers:
 *     ??$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x180020190 (--$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2.c)
 *     ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180183B1C (--$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector2>(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v9; // r8d
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
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
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_9;
  }
  if ( v9 > *(_DWORD *)(a1 + 20) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, &v14);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
LABEL_9:
    if ( v13 < 0 )
      return (unsigned int)v13;
    goto LABEL_5;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
  *(_DWORD *)(a1 + 24) = v9;
LABEL_5:
  result = DynArrayImpl<0>::Grow((int)a1 + 32, 1, 8, 1, 0LL);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) += 8;
    *(_QWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
    result = 0LL;
    *a4 = v7;
  }
  return result;
}
