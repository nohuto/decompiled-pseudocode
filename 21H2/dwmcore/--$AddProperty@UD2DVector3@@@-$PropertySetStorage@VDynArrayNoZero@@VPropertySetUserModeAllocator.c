/*
 * XREFs of ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1800E1C00
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800E18B0 (--$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3.c)
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801BB938 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESS.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1800CB2FC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector3>(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // esi
  __int64 result; // rax
  int v10; // ebp
  __int64 v11; // rcx
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
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 12, 1, 0LL);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 56) += 12;
      v11 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v5 + v11) = *(_QWORD *)a3;
      *(_DWORD *)(v5 + v11 + 8) = *(_DWORD *)(a3 + 8);
      result = 0LL;
      *a4 = v7;
    }
    else
    {
      DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
  }
  return result;
}
