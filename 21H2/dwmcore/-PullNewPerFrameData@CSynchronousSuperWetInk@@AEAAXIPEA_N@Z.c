/*
 * XREFs of ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180241AF4
 * Callers:
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180241250 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180241524 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x18010183E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     McTemplateU0px_EventWriteTransfer @ 0x180216E18 (McTemplateU0px_EventWriteTransfer.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180240860 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     ??4?$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z @ 0x180240D20 (--4-$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x1802413E8 (-GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180241A10 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180241E1C (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180241EB8 (-clear@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     McTemplateU0pxttt_EventWriteTransfer @ 0x180241EF8 (McTemplateU0pxttt_EventWriteTransfer.c)
 */

void __fastcall CSynchronousSuperWetInk::PullNewPerFrameData(CSynchronousSuperWetInk *this, int a2, bool *a3)
{
  __int64 v3; // rax
  std::_Ref_count_base **v4; // r12
  SIZE_T v6; // r13
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rbx
  _DWORD *v9; // r14
  unsigned int v10; // r15d
  gsl::details *v11; // rcx
  int v12; // edx
  char v13; // r14
  _DWORD *v14; // rbx
  unsigned __int64 v15; // r12
  int v16; // ecx
  void *v17; // r15
  std::_Ref_count_base *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  std::_Ref_count_base *v23; // rdi
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // sf
  unsigned int v28; // eax
  unsigned __int64 LatestLookupId; // [rsp+40h] [rbp-38h]
  void *v30; // [rsp+50h] [rbp-28h] BYREF
  std::_Ref_count_base *v31; // [rsp+58h] [rbp-20h]
  char v32[24]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+48h] BYREF
  int v34; // [rsp+C8h] [rbp+50h]
  bool *v35; // [rsp+D0h] [rbp+58h]
  unsigned int v36; // [rsp+D8h] [rbp+60h]

  v35 = a3;
  v34 = a2;
  v3 = *((_QWORD *)this + 27);
  v4 = (std::_Ref_count_base **)((char *)this + 264);
  *a3 = 0;
  LOBYTE(v33) = 0;
  v6 = *(unsigned int *)(v3 + 8);
  v7 = (unsigned int)(v6 * *(_DWORD *)(v3 + 12));
  v36 = *(_DWORD *)(v3 + 8);
  std::vector<unsigned char>::assign((char *)this + 264, v7, &v33);
  v8 = *v4;
  v9 = (_DWORD *)*((_QWORD *)this + 27);
  v10 = *((_DWORD *)this + 60);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v30, *((_QWORD *)this + 34) - (_QWORD)*v4);
  if ( v30 == (void *)-1LL || !v8 && v30 )
  {
    gsl::details::terminate(v11);
    JUMPOUT(0x180241D4BLL);
  }
  v31 = v8;
  CSharedCircularQueue::PopAll(v9, (__int64)&v30, v10, &v33, (unsigned int *)this + 60);
  while ( 1 )
  {
    v27 = (int)(v33 - 1) < 0;
    v28 = --v33;
    if ( v27 )
      break;
    v13 = 0;
    v14 = (_DWORD *)((char *)*v4 + (unsigned int)v6 * v28);
    if ( v14[4] > (unsigned int)(v6 - 24) )
    {
      v16 = 0;
LABEL_29:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0pxttt_EventWriteTransfer(v16, v12, (_DWORD)this, *(_QWORD *)v14, 0, v13, v16);
      goto LABEL_31;
    }
    v15 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
    {
      v13 = 1;
      *((_BYTE *)this + 96) = 1;
      v15 = *(_QWORD *)v14;
    }
    LatestLookupId = CSynchronousSuperWetInk::GetLatestLookupId(this);
    if ( v15 < LatestLookupId )
    {
      v16 = 1;
      if ( !v13 )
        goto LABEL_29;
    }
    v17 = operator new(v6);
    v18 = (std::_Ref_count_base *)operator new(0x18uLL);
    v23 = v18;
    if ( v18 )
    {
      *((_DWORD *)v18 + 2) = 1;
      *((_DWORD *)v18 + 3) = 1;
      *(_QWORD *)v18 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *((_QWORD *)v18 + 2) = v17;
    }
    else
    {
      v23 = 0LL;
    }
    v30 = v17;
    v31 = v23;
    if ( v6 )
    {
      if ( v17 )
      {
        memcpy_0(v17, v14, v6);
      }
      else
      {
        *(_DWORD *)_o__errno(v20, v19, v21, v22) = 22;
        invalid_parameter_noinfo();
      }
    }
    v24 = (__int64 *)((char *)this + 224);
    if ( v13 )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::clear(v24);
    }
    else
    {
      v25 = std::map<unsigned __int64,std::shared_ptr<unsigned char [0]>>::_Try_emplace<unsigned __int64 const &,>(
              v24,
              (__int64)v32,
              (unsigned __int64 *)v14);
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)(*(_QWORD *)v25 + 40LL), &v30);
      if ( *(_QWORD *)v14 != v34 )
        goto LABEL_21;
    }
    std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, &v30);
LABEL_21:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0px_EventWriteTransfer(
        v26,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_NEW_FROM_GUEST,
        this,
        *(_QWORD *)v14);
    *v35 = 1;
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    if ( v15 < LatestLookupId )
    {
      v16 = 1;
      if ( !v13 )
        goto LABEL_29;
    }
LABEL_31:
    v6 = v36;
    v4 = (std::_Ref_count_base **)((char *)this + 264);
  }
}
