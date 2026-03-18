/*
 * XREFs of ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180241524
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180240ED0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0px_EventWriteTransfer @ 0x180216E18 (McTemplateU0px_EventWriteTransfer.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180240810 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$al.c)
 *     ??4?$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z @ 0x180240D20 (--4-$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x180240DEC (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180241AF4 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::LookupPerFrameData(
        CSynchronousSuperWetInk *this,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  std::_Ref_count_base *v7; // rcx
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rdx
  __int64 i; // rdx
  __int64 j; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE v24[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  unsigned __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0px_EventWriteTransfer((__int64)this, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA, this, a2);
  v7 = (std::_Ref_count_base *)a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (_QWORD *)((char *)this + 248);
  v9 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v9 && *v9 == v6 )
  {
    std::shared_ptr<unsigned char [0]>::operator=(a3, (_QWORD *)this + 31);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0px_EventWriteTransfer(v10, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_REUSE, this, v6);
    goto LABEL_54;
  }
  v11 = (__int64 *)((char *)this + 224);
  v26 = v6;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
    (__int64 *)this + 28,
    (__int64)v24,
    &v26);
  v13 = (_QWORD *)v25;
  if ( *(_BYTE *)(v25 + 25) || v6 < *(_QWORD *)(v25 + 32) )
  {
    v13 = (_QWORD *)*v11;
    v14 = (_QWORD *)*v11;
  }
  else
  {
    v14 = (_QWORD *)*v11;
  }
  if ( v13 == v14 )
  {
    CSynchronousSuperWetInk::PullNewPerFrameData(this, a2, (bool *)&v26);
    if ( (_BYTE)v26 )
    {
      v26 = v6;
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
        (__int64 *)this + 28,
        (__int64)v24,
        &v26);
      v13 = (_QWORD *)v25;
      if ( *(_BYTE *)(v25 + 25) || v6 < *(_QWORD *)(v25 + 32) )
        v13 = (_QWORD *)*v11;
    }
  }
  if ( *((_QWORD *)this + 29) )
  {
    v16 = *v11;
    if ( v13 != (_QWORD *)*v11 )
    {
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, v13 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0px_EventWriteTransfer(
          v17,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_FOUND_ON_NEW,
          this,
          v6);
      goto LABEL_53;
    }
    v12 = *(_QWORD *)(v16 + 8);
    v18 = (__int64 *)*v11;
    if ( !*(_BYTE *)(v12 + 25) )
    {
      do
      {
        if ( v6 >= *(_QWORD *)(v12 + 32) )
        {
          v12 = *(_QWORD *)(v12 + 16);
        }
        else
        {
          v16 = v12;
          v12 = *(_QWORD *)v12;
        }
      }
      while ( !*(_BYTE *)(v12 + 25) );
      v18 = (__int64 *)*v11;
    }
    v19 = *v18;
    if ( v16 != v19 )
    {
      if ( *(_BYTE *)(v16 + 25) )
      {
        i = *(_QWORD *)(v16 + 16);
      }
      else
      {
        i = *(_QWORD *)v16;
        if ( *(_BYTE *)(*(_QWORD *)v16 + 25LL) )
        {
          for ( i = *(_QWORD *)(v16 + 8); !*(_BYTE *)(i + 25) && v16 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v16 = i;
          if ( *(_BYTE *)(v16 + 25) )
            i = v16;
        }
        else
        {
          for ( j = *(_QWORD *)(i + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            i = j;
        }
      }
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, (_QWORD *)(i + 40));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0px_EventWriteTransfer(
          v22,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NON_EXACT,
          this,
          v6);
      goto LABEL_53;
    }
    if ( !*v8 )
    {
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, (_QWORD *)(v19 + 40));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0px_EventWriteTransfer(
          v23,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_USE_FIRST,
          this,
          v6);
      goto LABEL_53;
    }
LABEL_51:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0px_EventWriteTransfer(
        v12,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NOT_FOUND_REUSE,
        this,
        v6);
LABEL_53:
    std::shared_ptr<unsigned char [0]>::operator=(a3, (_QWORD *)this + 31);
LABEL_54:
    CSynchronousSuperWetInk::CleanupOldPerFrameData(this);
    return 0LL;
  }
  if ( *v8 )
    goto LABEL_51;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0q_EventWriteTransfer(v12, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 7LL);
  return 2147942487LL;
}
