/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046C94
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004EC98 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140007300 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140009CF0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA60 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C6B0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D610 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4D0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140016510 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BF54 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC88 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140029D37 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14003DFA0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x14003E930 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14004663C (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int16 *v9; // rbx
  struct IAudioMediaType *v10; // rdi
  int v11; // eax
  unsigned __int16 *v12; // rax
  CPipeInstance *v13; // rdi
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  int v17; // ebx
  char *v18; // rax
  _UNKNOWN **v19; // rcx
  __int64 v21; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-D8h] BYREF
  int pExceptionObject; // [rsp+58h] [rbp-D0h] BYREF
  int v24; // [rsp+5Ch] [rbp-CCh] BYREF
  int v25; // [rsp+60h] [rbp-C8h] BYREF
  int v26; // [rsp+64h] [rbp-C4h] BYREF
  int v27; // [rsp+68h] [rbp-C0h] BYREF
  int v28; // [rsp+6Ch] [rbp-BCh] BYREF
  struct IAudioMediaType *v29; // [rsp+70h] [rbp-B8h] BYREF
  LPVOID *v30; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 *v32; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+90h] [rbp-98h] BYREF
  __int128 v34; // [rsp+98h] [rbp-90h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-80h]
  __int128 v36; // [rsp+B0h] [rbp-78h]
  int v37; // [rsp+C0h] [rbp-68h]
  long *v38; // [rsp+C8h] [rbp-60h] BYREF
  ATL::CAtlException *v39; // [rsp+D0h] [rbp-58h] BYREF
  GUID v40; // [rsp+E0h] [rbp-48h] BYREF
  BOOL v42; // [rsp+138h] [rbp+10h]
  unsigned __int16 *v44; // [rsp+148h] [rbp+20h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 10;
  v5 = *(_DWORD *)a2 != 0;
  v42 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v22 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, a2[1], &v22);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v31 = v22;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v34, (__int64)&v31);
    v22 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v21 = 0LL;
      v11 = CProcessNode::CreateDummyProcessNode(v5, a2[2], &v21);
      if ( v11 < 0 )
      {
        v26 = v11;
        throw (long *)&v26;
      }
      v33 = v21;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v34, (__int64)&v33);
      v21 = 0LL;
    }
    else
    {
      v29 = 0LL;
      v7 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v29, 0.0, 0);
      if ( v7 < 0 )
      {
        v24 = v7;
        throw (long *)&v24;
      }
      v44 = 0LL;
      v40 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v8 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             0LL,
             v5,
             1,
             0,
             &v40,
             (HKEY *)&v44);
      if ( v8 < 0 )
      {
        v25 = v8;
        throw (long *)&v25;
      }
      v9 = v44;
      v10 = v29;
      (*(void (__fastcall **)(unsigned __int16 *, struct IAudioMediaType *))(*(_QWORD *)v44 + 24LL))(v44, v29);
      (*(void (__fastcall **)(unsigned __int16 *, struct IAudioMediaType *))(*(_QWORD *)v9 + 32LL))(v9, v10);
      v32 = v9;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v34, (__int64)&v32);
      v44 = 0LL;
      if ( v10 )
        ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
    }
    v12 = (unsigned __int16 *)operator new(0x140uLL);
    v44 = v12;
    if ( v12 )
      v13 = CPipeInstance::CPipeInstance((CPipeInstance *)v12, (enum PIPE_TYPE)4);
    else
      v13 = 0LL;
    v30 = (LPVOID *)v13;
    if ( !v13 )
    {
      v27 = -2147024882;
      throw (long *)&v27;
    }
    v14 = (unsigned __int16 *)a2[4];
    v44 = v14;
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( v14[v16] );
    *((_QWORD *)v13 + 24) = 0LL;
    if ( v16 + 1 >= v16 )
      v15 = v16 + 1;
    v17 = v16 + 1 < v16 ? 0x80070216 : 0;
    if ( v16 + 1 >= v16 )
    {
      if ( is_mul_ok(v15, 2uLL) )
      {
        v18 = (char *)CoTaskMemAlloc(2 * v15);
        *((_QWORD *)v13 + 24) = v18;
        if ( !v18 )
        {
          v17 = -2147024882;
LABEL_32:
          v28 = v17;
          throw (long *)&v28;
        }
        v17 = 0;
        StringCchCopyNExW(v18, v15, v44, v16);
      }
      else
      {
        v17 = -2147024362;
      }
    }
    if ( v17 < 0 )
      goto LABEL_32;
    *((_DWORD *)v13 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v13 + 3) = v42;
    *((_DWORD *)v13 + 33) = 0;
    if ( *((_QWORD *)v13 + 19) )
      ATL::AtlComPtrAssign((struct IUnknown **)v13 + 19, 0LL);
    if ( *((struct IUnknown **)v13 + 30) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v13 + 30, a1);
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64 *)v13 + 2, (__int64)&v34);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v34);
    *((_DWORD *)v13 + 36) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                * (double)(int)a2[3]
                                / 10000000.0
                                + 0.5);
    *((_DWORD *)v13 + 34) = 14;
    *((_DWORD *)v13 + 53) = 0;
    *(GUID *)((char *)v13 + 216) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v30 = 0LL;
    *a3 = v13;
    ATL::CAutoPtr<CPipeInstance>::Free(&v30);
    v22 = 0LL;
  }
  catch ( long *v38 )
  {
    v17 = *(_DWORD *)v38;
  }
  catch ( ATL::CAtlException *v39 )
  {
    v17 = *(_DWORD *)v39;
  }
  v19 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, v17);
    v19 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v17 < 0 )
  {
    if ( v19 != &WPP_GLOBAL_Control && (*((_DWORD *)v19 + 7) & 0x20000) != 0 && *((_BYTE *)v19 + 25) >= 2u )
      WPP_SF_D((__int64)v19[2], 0x12u, (__int64)&WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, v17);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x24Au, v17);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v34);
  return (unsigned int)v17;
}
