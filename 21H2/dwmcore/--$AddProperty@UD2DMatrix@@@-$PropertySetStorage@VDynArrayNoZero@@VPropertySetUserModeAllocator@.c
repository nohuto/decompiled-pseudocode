/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1800E7790
 * Callers:
 *     ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800E754C (--$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@.c)
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801BB558 (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1800CB2FC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // ebp
  __int64 result; // rax
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v12) = a2;
  HIDWORD(v12) = v5 & 0x1FFFFFFF;
  result = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1,
             &v12);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 64, 1, 0LL);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 56) += 64;
      v11 = *(_QWORD *)(a1 + 32);
      *(_OWORD *)(v5 + v11) = *a3;
      *(_OWORD *)(v5 + v11 + 16) = a3[1];
      *(_OWORD *)(v5 + v11 + 32) = a3[2];
      *(_OWORD *)(v5 + v11 + 48) = a3[3];
      *a4 = v7;
      return 0LL;
    }
    else
    {
      DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
  }
  return result;
}
