/*
 * XREFs of ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180097480
 * Callers:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x180096C74 (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180097294 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180097440 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  PVOID v3; // rax
  void *v4; // rbx
  PVOID v5; // rdi
  void *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  void *v10; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v10 = 0LL;
  *(_QWORD *)&v8 = v2;
  DWORD2(v8) = *((_DWORD *)a2 + 2);
  v9 = v8;
  v3 = RtlLookupElementGenericTable(a1, &v9);
  v4 = v10;
  v5 = v3;
  while ( v4 )
  {
    v7 = v4;
    v4 = (void *)*((_QWORD *)v4 + 2);
    operator delete(v7);
  }
  return v5;
}
