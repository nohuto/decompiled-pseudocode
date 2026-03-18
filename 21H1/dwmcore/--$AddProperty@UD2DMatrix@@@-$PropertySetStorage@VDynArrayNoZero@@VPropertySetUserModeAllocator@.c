/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x180091E40
 * Callers:
 *     ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x180091F4C (--$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@.c)
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801838C8 (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v7; // rsi
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v15) = a2;
  v9 = v7 + 1;
  HIDWORD(v15) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_5;
  }
  if ( v9 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, &v15);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
LABEL_5:
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_6;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v15;
  *(_DWORD *)(a1 + 24) = v9;
LABEL_6:
  result = DynArrayImpl<0>::Grow((int)a1 + 32, 1, 64, 1, 0LL);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) += 64;
    v14 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)(v5 + v14) = *a3;
    *(_OWORD *)(v5 + v14 + 16) = a3[1];
    *(_OWORD *)(v5 + v14 + 32) = a3[2];
    *(_OWORD *)(v5 + v14 + 48) = a3[3];
    *a4 = v7;
    return 0LL;
  }
  return result;
}
