/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180041D34
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x180041BBC (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x180041C84 (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORS.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAX_K@Z @ 0x180041EA8 (-_Reallocate_exactly@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAX.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800D7BE4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@PEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@QEAAPEAPEAVCVectorShape@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1802118D4 (--$_Emplace_reallocate@PEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorSha.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(struct CResource ***this, CResourceTable *a2, _QWORD *a3, char a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  struct CResource **v11; // rax
  __int64 v12; // rsi
  struct CResource *ResourceWithoutType; // r15
  unsigned int v14; // ecx
  struct CResource **v15; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  struct CResource *v20; // [rsp+30h] [rbp-28h] BYREF

  if ( !a4 )
  {
    v7 = (__int64 *)(this + 13);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[13], (unsigned int)(this[14] - this[13]));
    v8 = *v7;
    v7[1] = *v7;
    if ( *a3 > (unsigned __int64)((v7[2] - v8) >> 3) )
    {
      if ( *a3 > 0x1FFFFFFFFFFFFFFFuLL )
        std::_Xlength_error("vector too long");
      std::vector<CVectorShape *>::_Reallocate_exactly(v7, *a3);
    }
  }
  v9 = this + 13;
  v10 = 0LL;
  v11 = this[14];
  v12 = v11 - this[13];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)(unsigned int)v10 >= *a3 )
      {
        gsl::details::terminate((gsl::details *)(unsigned int)v10);
        JUMPOUT(0x180041EA1LL);
      }
      _mm_lfence();
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *(_DWORD *)(a3[1] + 4 * v10));
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              192LL) )
        break;
      v15 = this[14];
      v20 = ResourceWithoutType;
      if ( v15 == this[15] )
      {
        std::vector<CVectorShape *>::_Emplace_reallocate<CVectorShape *>(v9, v15, &v20);
      }
      else
      {
        *v15 = ResourceWithoutType;
        ++this[14];
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)a3 )
      {
        v11 = this[14];
        goto LABEL_12;
      }
    }
    v18 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x4Du, 0LL);
  }
  else
  {
LABEL_12:
    v16 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            (struct CResource **)(*v9 + 8LL * (unsigned int)v12),
            (unsigned int)(((__int64)v11 - *v9) >> 3) - (unsigned int)v12);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x53u, 0LL);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v18;
}
