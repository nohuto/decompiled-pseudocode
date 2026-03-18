/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18009695C
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800968B0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x180096AB4 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, unsigned int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbx
  _QWORD *Element; // rbx
  struct _RTL_GENERIC_TABLE *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct CBaseExpression **v16; // rcx
  struct _RTL_GENERIC_TABLE *v17; // rax
  __int64 v18; // rcx
  unsigned int Buffer; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]
  int v23; // [rsp+50h] [rbp-10h]
  unsigned __int8 NewElement; // [rsp+80h] [rbp+20h] BYREF
  struct CBaseExpression *v25; // [rsp+88h] [rbp+28h] BYREF

  v25 = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
  if ( !v3 )
  {
    v17 = (struct _RTL_GENERIC_TABLE *)DefaultHeap::Alloc(0x48uLL);
    v3 = v17;
    if ( v17 )
      RtlInitializeGenericTable(
        v17,
        CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData,
        (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
        CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
        0LL);
    else
      v3 = 0LL;
    *((_QWORD *)this + 5) = v3;
    if ( !v3 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1D4u, 0LL);
      return v14;
    }
  }
  Element = (_QWORD *)CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v3, a3);
  if ( !Element )
  {
    v7 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0LL;
    Buffer = a3;
    Element = RtlInsertElementGenericTable(v7, &Buffer, 0x28u, &NewElement);
    if ( !Element )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1DEu, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>(&v20);
      return v14;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v20);
  }
  v9 = *((unsigned int *)Element + 8);
  v10 = 0;
  if ( (_DWORD)v9 )
  {
    v16 = (struct CBaseExpression **)Element[1];
    while ( v25 != *v16 )
    {
      ++v10;
      ++v16;
      if ( v10 >= (unsigned int)v9 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v11 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v11 < (unsigned int)v9 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_9;
    }
    if ( (unsigned int)v11 > *((_DWORD *)Element + 7) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(Element + 1, 8LL, 1LL, &v25);
      v14 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
LABEL_9:
      if ( (v14 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x1F0u, 0LL);
        return v14;
      }
      return 0;
    }
    *(_QWORD *)(Element[1] + 8 * v9) = v25;
    *((_DWORD *)Element + 8) = v11;
  }
  return 0;
}
