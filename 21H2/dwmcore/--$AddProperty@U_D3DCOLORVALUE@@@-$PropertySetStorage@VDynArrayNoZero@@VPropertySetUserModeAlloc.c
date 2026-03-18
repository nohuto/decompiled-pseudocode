/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAI@Z @ 0x1800EBDC4
 * Callers:
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800EBB80 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCO.c)
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801BBCF4 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1800CB2FC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<_D3DCOLORVALUE>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // esi
  __int64 result; // rax
  int v10; // ebp
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v11) = a2;
  HIDWORD(v11) = v5 & 0x1FFFFFFF;
  result = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1,
             &v11);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 16, 1, 0LL);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 56) += 16;
      *(_OWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
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
