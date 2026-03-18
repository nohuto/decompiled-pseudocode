/*
 * XREFs of ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180097294
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180097144 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801DE32C (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180097480 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 */

__int64 __fastcall CExpressionManager::InsertExpressionIntoTargetMap(
        CExpressionManager *this,
        struct CTargetMapEntry *a2,
        struct CBaseExpression *a3,
        struct SubchannelMaskInfo *a4)
{
  struct _RTL_GENERIC_TABLE *v4; // rbp
  unsigned int v8; // edi
  _QWORD *Element; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]
  unsigned __int8 NewElement; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 328);
  v14 = *(_QWORD *)a2;
  v15 = *((_DWORD *)a2 + 2);
  v8 = 0;
  Element = (_QWORD *)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement((char *)this + 328, &v14);
  if ( !Element )
  {
    Element = RtlInsertElementGenericTable(v4, a2, 0x18u, &NewElement);
    if ( !Element )
    {
      v13 = 1047;
LABEL_8:
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, v13, 0LL);
      return v8;
    }
  }
  v11 = DefaultHeap::Alloc(0x18uLL);
  if ( !v11 )
  {
    v13 = 1051;
    goto LABEL_8;
  }
  *v11 = 0LL;
  v11[1] = 0LL;
  v11[2] = 0LL;
  *v11 = a4;
  v11[1] = a3;
  v11[2] = Element[2];
  Element[2] = v11;
  return v8;
}
