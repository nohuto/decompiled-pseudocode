/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1800AC1A8
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x18001B378 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x18001FD68 (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1800AF270 (--$AddProperty@M@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4D.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800AF328 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1800AF3EC (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 *     ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x1800AF4C0 (--$AddProperty@UD2DVector4@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x180180980 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
    else
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC0u, 0LL);
    }
  }
  return v4;
}
