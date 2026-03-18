/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801BDD30
 * Callers:
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1801BDC8C (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORS.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801EBAD4 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180051D54 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C933C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180164308 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x180164D48 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(
        struct CResource ***this,
        CResourceTable *a2,
        unsigned __int64 *a3,
        char a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  struct CResource **v10; // rax
  __int64 v11; // rsi
  struct CResource *ResourceWithoutType; // r15
  __int64 v13; // rcx
  struct CResource **v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  struct CResource *v19; // [rsp+30h] [rbp-28h] BYREF

  if ( !a4 )
  {
    v7 = (__int64 *)(this + 12);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[12], (unsigned int)(this[13] - this[12]));
    v8 = *v7;
    v7[1] = *v7;
    if ( *a3 > (v7[2] - v8) >> 3 )
    {
      if ( *a3 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector<T> too long");
      std::vector<CDataSourceReader *>::_Reallocate_exactly((__int64)v7, *a3);
    }
  }
  v9 = 0LL;
  v10 = this[13];
  v11 = v10 - this[12];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *a3 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *(_DWORD *)(a3[1] + 4 * v9));
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              192LL) )
        break;
      v14 = this[13];
      v19 = ResourceWithoutType;
      if ( this[14] == v14 )
      {
        std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>((__int64 *)this + 12, v14, &v19);
      }
      else
      {
        *v14 = ResourceWithoutType;
        ++this[13];
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)a3 )
      {
        v10 = this[13];
        goto LABEL_14;
      }
    }
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x4Du, 0LL);
  }
  else
  {
LABEL_14:
    v15 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            &this[12][(unsigned int)v11],
            (unsigned int)(v10 - this[12]) - (unsigned int)v11);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x53u, 0LL);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v17;
}
