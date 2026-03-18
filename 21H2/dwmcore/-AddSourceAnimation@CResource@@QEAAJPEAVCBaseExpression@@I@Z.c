/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x180046D0C
 * Callers:
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x180046C70 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x18004968C (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, unsigned int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbx
  _QWORD *Element; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx
  struct CBaseExpression **v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  struct _RTL_GENERIC_TABLE *v13; // rcx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  struct _RTL_GENERIC_TABLE *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int Buffer; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-18h]
  int v24; // [rsp+4Ch] [rbp-14h]
  int v25; // [rsp+50h] [rbp-10h]
  unsigned __int8 NewElement; // [rsp+80h] [rbp+20h] BYREF
  struct CBaseExpression *v27; // [rsp+88h] [rbp+28h] BYREF

  v27 = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
  if ( !v3 )
  {
    v18 = (struct _RTL_GENERIC_TABLE *)DefaultHeap::Alloc(0x48uLL);
    v3 = v18;
    if ( !v18 )
    {
      *((_QWORD *)this + 5) = 0LL;
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x1D5u, 0LL);
      return v11;
    }
    RtlInitializeGenericTable(
      v18,
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData,
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
      CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
      0LL);
    *((_QWORD *)this + 5) = v3;
  }
  Element = (_QWORD *)CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v3, a3);
  if ( !Element )
  {
    v13 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v22 = 0LL;
    Buffer = a3;
    Element = RtlInsertElementGenericTable(v13, &Buffer, 0x28u, &NewElement);
    if ( !Element )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x1DFu, 0LL);
      DynArrayImpl<1>::~DynArrayImpl<1>(&v22);
      return v11;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(&v22);
  }
  v7 = *((unsigned int *)Element + 8);
  v8 = 0;
  if ( (_DWORD)v7 )
  {
    v9 = (struct CBaseExpression **)Element[1];
    while ( v27 != *v9 )
    {
      ++v8;
      ++v9;
      if ( v8 >= (unsigned int)v7 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v10 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v11 = -2147024362;
    v17 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_19;
  }
  if ( v10 > *((_DWORD *)Element + 7) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet(Element + 1, 8LL, 1LL, &v27);
    v17 = v15;
    v11 = v15;
    if ( v15 >= 0 )
      return 0;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v17, 0x1F1u, 0LL);
    return v11;
  }
  *(_QWORD *)(Element[1] + 8 * v7) = v27;
  *((_DWORD *)Element + 8) = v10;
  return 0;
}
