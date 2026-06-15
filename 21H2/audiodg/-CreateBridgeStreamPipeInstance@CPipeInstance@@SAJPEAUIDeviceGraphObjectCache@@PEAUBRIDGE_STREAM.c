/*
 * XREFs of ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400469CC
 * Callers:
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D0C0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140009CC0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA30 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400164E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BF24 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140029E07 (_CxxThrowException_0.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14003E130 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x1400467CC (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140048040 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateBridgeStreamPipeInstance(
        struct IUnknown *a1,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct CPipeInstance *a4,
        struct tWAVEFORMATEX *a5,
        LPVOID *a6,
        struct CPipeInstance **a7)
{
  BOOL v8; // edi
  float v9; // xmm6_4
  int v10; // eax
  int v11; // eax
  int v12; // eax
  CPipeInstance *v13; // rax
  CPipeInstance *v14; // rsi
  const unsigned __int16 *v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  int v18; // edi
  char *v19; // rax
  int v20; // eax
  int v21; // eax
  LPVOID *v23; // [rsp+40h] [rbp-B8h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-B0h] BYREF
  int v25; // [rsp+4Ch] [rbp-ACh] BYREF
  int v26; // [rsp+50h] [rbp-A8h] BYREF
  int v27; // [rsp+54h] [rbp-A4h] BYREF
  int v28; // [rsp+58h] [rbp-A0h] BYREF
  struct SYSTEM_AUDIO_STREAM *v29; // [rsp+60h] [rbp-98h] BYREF
  __int128 v30; // [rsp+68h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-80h]
  __int128 v32; // [rsp+80h] [rbp-78h]
  int v33; // [rsp+90h] [rbp-68h]
  long *v34; // [rsp+98h] [rbp-60h] BYREF
  ATL::CAtlException *v35; // [rsp+A0h] [rbp-58h] BYREF
  BOOL v37; // [rsp+108h] [rbp+10h]

  v8 = *(_DWORD *)a2 != 0;
  v37 = v8;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  try
  {
    *a7 = 0LL;
    v29 = 0LL;
    v10 = CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(*(unsigned int *)a2, a3, a5, &v29);
    if ( v10 < 0 )
    {
      pExceptionObject = v10;
      throw (long *)&pExceptionObject;
    }
    a6 = (LPVOID *)v29;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v30, (__int64)&a6);
    v29 = 0LL;
    a6 = 0LL;
    v11 = CProcessNode::CreateDummyProcessNode(v8, a5, &a6);
    if ( v11 < 0 )
    {
      v25 = v11;
      throw (long *)&v25;
    }
    v23 = a6;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v30, (__int64)&v23);
    a6 = 0LL;
    v12 = CProcessNode::CreateDummyProcessNode(v8, a5, &a6);
    if ( v12 < 0 )
    {
      v26 = v12;
      throw (long *)&v26;
    }
    v23 = a6;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v30, (__int64)&v23);
    a6 = 0LL;
    v13 = (CPipeInstance *)operator new(0x140uLL);
    if ( v13 )
      v14 = CPipeInstance::CPipeInstance(v13, (enum PIPE_TYPE)5);
    else
      v14 = 0LL;
    v23 = (LPVOID *)v14;
    if ( !v14 )
    {
      v27 = -2147024882;
      throw (long *)&v27;
    }
    v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    *((_QWORD *)v14 + 24) = 0LL;
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      v18 = -2147024362;
    }
    else
    {
      if ( is_mul_ok(v17, 2uLL) )
      {
        v19 = (char *)CoTaskMemAlloc(2 * v17);
        *((_QWORD *)v14 + 24) = v19;
        if ( !v19 )
        {
          v18 = -2147024882;
          goto LABEL_35;
        }
        v18 = 0;
        StringCchCopyNExW(v19, v16 + 1, v15, v16);
      }
      else
      {
        v18 = -2147024362;
      }
      if ( v18 >= 0 )
      {
        *((_DWORD *)v14 + 30) = *(_DWORD *)a2 == 2;
        *((_DWORD *)v14 + 3) = v37;
        *((_DWORD *)v14 + 33) = 0;
        *((_DWORD *)v14 + 31) = 0;
        if ( *((_QWORD *)v14 + 19) )
          ATL::AtlComPtrAssign((struct IUnknown **)v14 + 19, 0LL);
        if ( *((struct IUnknown **)v14 + 30) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)v14 + 30, a1);
        *(_QWORD *)v14 = a4;
        *((_DWORD *)v14 + 2) = a4 == 0LL;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 *)v14 + 2,
          (__int64)&v30);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v30);
        if ( a4 )
          v20 = *((_DWORD *)a4 + 35);
        else
          v20 = (int)(float)((float)(int)((double)(int)(a5->nAvgBytesPerSec / a5->nBlockAlign)
                                        * (double)(int)*((_QWORD *)a2 + 4)
                                        / 10000000.0
                                        + 0.5)
                           * v9);
        *((_DWORD *)v14 + 36) = v20;
        v21 = 1;
        if ( *((_DWORD *)a2 + 1) )
          v21 = 7;
        *((_DWORD *)v14 + 34) = v21;
        *((_QWORD *)v14 + 26) = 1LL;
        v23 = 0LL;
        *a7 = v14;
        ATL::CAutoPtr<CPipeInstance>::Free(&v23);
        goto LABEL_43;
      }
    }
LABEL_35:
    v28 = v18;
    throw (long *)&v28;
  }
  catch ( long *v34 )
  {
    LODWORD(a7) = *(_DWORD *)v34;
    v18 = (int)a7;
  }
  catch ( ATL::CAtlException *v35 )
  {
    LODWORD(a7) = *(_DWORD *)v35;
    v18 = (int)a7;
  }
LABEL_43:
  if ( v18 < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateBridgeStreamPipeInstance", 0x3C2u, v18);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v30);
  return (unsigned int)v18;
}
