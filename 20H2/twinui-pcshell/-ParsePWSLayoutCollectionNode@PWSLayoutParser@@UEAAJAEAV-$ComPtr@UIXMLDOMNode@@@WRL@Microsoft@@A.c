/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180226C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180146DF0 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180155124 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x1801A0940 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x1801A0ACC (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AE.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x1801A10AC (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1801A12AC (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1801A14C4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1802265F8 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1802269F8 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1802273B4 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(PWSLayoutParser *this, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  PWSLayoutParser *v5; // r14
  int v6; // eax
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  void *v14; // r8
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r15d
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  const char *v24; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v25; // rax
  int Selected; // eax
  int v27; // r14d
  void *v28; // rbx
  struct IPenWorkspaceLayoutItem **v29; // r14
  __int64 v30; // r15
  struct IPenWorkspaceLayoutItem *v31; // rbx
  void *v32; // r8
  __int64 v33; // rdx
  struct IPenWorkspaceLayoutItem **v34; // rdx
  void *v35; // rbx
  struct IPenWorkspaceLayoutItem *v37; // [rsp+20h] [rbp-248h] BYREF
  __int64 v38; // [rsp+28h] [rbp-240h] BYREF
  __int64 v39; // [rsp+30h] [rbp-238h] BYREF
  __int128 v40; // [rsp+38h] [rbp-230h] BYREF
  __int64 v41; // [rsp+48h] [rbp-220h]
  __int64 v42; // [rsp+50h] [rbp-218h] BYREF
  __int64 v43; // [rsp+60h] [rbp-208h] BYREF
  __int64 v44; // [rsp+68h] [rbp-200h]
  __int64 v45; // [rsp+70h] [rbp-1F8h]
  __int64 v46; // [rsp+78h] [rbp-1F0h]
  __int64 v47; // [rsp+80h] [rbp-1E8h] BYREF
  char v48; // [rsp+88h] [rbp-1E0h]
  __int128 v49; // [rsp+90h] [rbp-1D8h]
  __int128 v50; // [rsp+A0h] [rbp-1C8h]
  __int128 v51; // [rsp+B0h] [rbp-1B8h]
  __int128 v52; // [rsp+C0h] [rbp-1A8h]
  __int64 v53; // [rsp+D0h] [rbp-198h]
  __int64 v54; // [rsp+D8h] [rbp-190h]
  char v55; // [rsp+E0h] [rbp-188h]
  _QWORD *v56; // [rsp+F0h] [rbp-178h]
  _OWORD v57[2]; // [rsp+100h] [rbp-168h] BYREF
  __int64 v58; // [rsp+120h] [rbp-148h] BYREF
  char v59; // [rsp+128h] [rbp-140h]
  __int128 v60; // [rsp+130h] [rbp-138h]
  __int128 v61; // [rsp+140h] [rbp-128h]
  __int128 v62; // [rsp+150h] [rbp-118h]
  __int128 v63; // [rsp+160h] [rbp-108h]
  __int64 v64; // [rsp+170h] [rbp-F8h]
  __int64 v65; // [rsp+178h] [rbp-F0h]
  char v66; // [rsp+180h] [rbp-E8h]
  _QWORD v67[8]; // [rsp+190h] [rbp-D8h] BYREF
  _BYTE v68[152]; // [rsp+1D0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]
  struct IXMLDOMNode *v72; // [rsp+288h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v39 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v8)[12])(v8, &v39);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v72 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      v49 = 0LL;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0;
      while ( 1 )
      {
        v10 = v39;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
        if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v10 + 72LL))(v10, &v72) < 0 || !v72 )
          break;
        v38 = 0LL;
        v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
        v12 = (**v11)(v11, &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60, &v38);
        v7 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_27;
        }
        v37 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
        v13 = PWSLayoutParser::ParsePinnedAppNode(v5, v72, &v37);
        v7 = v13;
        if ( v13 < 0 )
        {
          v22 = (unsigned int)v13;
          v23 = 107LL;
          goto LABEL_24;
        }
        v15 = v44;
        if ( v44 == v46 )
        {
          v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)&v43,
                 v44 + 1,
                 v14);
          if ( v7 < 0 )
          {
            v22 = (unsigned int)v7;
            v23 = 108LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
              (const char *)v22);
LABEL_25:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
LABEL_27:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
            WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v47);
            CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v43);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
            goto LABEL_43;
          }
          v15 = v44;
        }
        v44 = v15 + 1;
        v16 = (__int64 *)(v43 + 8 * (v15 + 1) - 8);
        if ( v43 + 8 * (v15 + 1) != 8 )
        {
          *v16 = (__int64)v37;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
        }
        v17 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>(&v42);
        v18 = *v17;
        v56 = (_QWORD *)*v17;
        *v17 = 0LL;
        v19 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        if ( !v18 )
        {
          v7 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6F,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_25;
        }
        v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v38, &v47);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x70,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
          WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v47);
          CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v43);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
          v7 = v21;
          goto LABEL_43;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      }
      try
      {
        v40 = 0LL;
        v41 = 0LL;
        std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>((__int64 *)&v40, &v43);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x77,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          v24);
        v5 = this;
        v3 = a3;
      }
      memset(v57, 0, sizeof(v57));
      v58 = 0LL;
      v59 = 0;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0;
      v56 = v67;
      v67[0] = off_1804A5888;
      v67[7] = v67;
      v25 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v68,
              (PWSLayoutParser *)((char *)v5 + 40));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedPenWorkspaceLayout>(
                   (__int64 *)&v40,
                   v25,
                   (__int64)v67,
                   (__int64)v57);
      v27 = Selected;
      if ( Selected >= 0 )
      {
        v29 = *(struct IPenWorkspaceLayoutItem ***)&v57[0];
        v30 = *(_QWORD *)&v57[0] + 8LL * *((_QWORD *)&v57[0] + 1);
        while ( v29 != (struct IPenWorkspaceLayoutItem **)v30 )
        {
          v31 = *v29;
          v37 = *v29;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
          v33 = v3[1];
          if ( v33 != v3[3]
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)v3,
                      v33 + 1,
                      v32) >= 0 )
          {
            v34 = (struct IPenWorkspaceLayoutItem **)(*v3 + 8 * v3[1]++);
            if ( v34 )
            {
              *v34 = 0LL;
              if ( v34 != &v37 )
              {
                *v34 = v31;
                v37 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
          ++v29;
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v58);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v57);
        v35 = (void *)v40;
        if ( (_QWORD)v40 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v40, *((__int64 *)&v40 + 1));
          std::_Deallocate<16,0>(v35, (const struct std::nothrow_t *)(136 * ((v41 - (__int64)v35) / 136)));
          v40 = 0LL;
          v41 = 0LL;
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v47);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v43);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v58);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v57);
        v28 = (void *)v40;
        if ( (_QWORD)v40 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v40, *((__int64 *)&v40 + 1));
          std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)(136 * ((v41 - (__int64)v28) / 136)));
          v40 = 0LL;
          v41 = 0LL;
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v47);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v43);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v72);
        v7 = v27;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_43:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return (unsigned int)v7;
}
