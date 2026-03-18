/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     ?IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z @ 0xA9632 (-IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U1@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5555335555@Z @ 0x14B73D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444334444@Z @ 0x14BBBB (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U1@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4443344444@Z @ 0x14BCD0 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U1@U2@U2@U2@U2@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444433444@Z @ 0x14BE9C (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U2@U2@U2@@-$_tlgWri.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x14BFB1 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 */

void __userpurge InputTraceLogging::Delivery::ScanSysQueue(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagQMSG *a3,
        const struct tagMSG *a4,
        const struct tagTHREADINFO *a5,
        bool a6)
{
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // [esp+0h] [ebp-70h]
  unsigned int v14; // [esp+0h] [ebp-70h]
  int v15; // [esp+10h] [ebp-60h] BYREF
  int v16; // [esp+14h] [ebp-5Ch] BYREF
  int v17; // [esp+18h] [ebp-58h] BYREF
  int v18; // [esp+1Ch] [ebp-54h] BYREF
  int v19; // [esp+20h] [ebp-50h] BYREF
  int v20; // [esp+24h] [ebp-4Ch] BYREF
  int v21; // [esp+28h] [ebp-48h] BYREF
  int v22; // [esp+2Ch] [ebp-44h] BYREF
  int v23; // [esp+30h] [ebp-40h] BYREF
  int v24; // [esp+34h] [ebp-3Ch] BYREF
  int v25; // [esp+38h] [ebp-38h] BYREF
  int v26; // [esp+3Ch] [ebp-34h] BYREF
  int v27[2]; // [esp+40h] [ebp-30h] BYREF
  __int64 v28; // [esp+48h] [ebp-28h] BYREF
  __int64 v29; // [esp+50h] [ebp-20h] BYREF
  int v30; // [esp+58h] [ebp-18h] BYREF
  int v31; // [esp+5Ch] [ebp-14h]
  __int64 v32; // [esp+60h] [ebp-10h] BYREF
  __int64 v33; // [esp+68h] [ebp-8h] BYREF

  v15 = a2;
  v7 = *(_DWORD *)(a1 + 4);
  if ( IsPointerInputMessage(v7) )
  {
    v26 = *(unsigned __int16 *)(a1 + 8);
    if ( (_WORD)v26 == 1 )
    {
      if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
      {
        v28 = *(int *)(a1 + 12);
        v27[0] = *(_DWORD *)(a1 + 8);
        v29 = *(_QWORD *)(v15 + 96);
        v27[1] = 0;
        v23 = v7;
        v24 = v7;
        v8 = *((_DWORD *)a3 + 172) >> 13;
        v15 = (*((_DWORD *)a3 + 172) >> 29) & 1;
        v16 = (unsigned __int8)a4;
        v18 = *(unsigned __int16 *)(a1 + 10);
        v19 = *(_DWORD *)(a1 + 16);
        v20 = (int)&v28;
        v21 = (int)v27;
        v22 = *(_DWORD *)a1;
        v25 = *((_DWORD *)a3 + 59);
        v26 = (int)&v29;
        v17 = v8 & 1;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_25429D,
          v17,
          v17,
          (int)&v26,
          (int)&v25,
          (int)&v24,
          (int)&v23,
          (int)&v22,
          (int)&v21,
          (int)&v20,
          (int)&v19,
          (int)&v18,
          (int)&v17,
          (int)&v16,
          (int)&v15);
      }
    }
    else if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
    {
      v29 = *(int *)(a1 + 12);
      v30 = *(_DWORD *)(a1 + 8);
      v32 = *(int *)(v15 + 20);
      v33 = *(_QWORD *)(v15 + 96);
      v31 = 0;
      v18 = v7;
      v17 = v7;
      v9 = *((_DWORD *)a3 + 172) >> 13;
      v25 = (*((_DWORD *)a3 + 172) >> 29) & 1;
      v24 = (unsigned __int8)a4;
      v22 = *(_DWORD *)(a1 + 16);
      v21 = (int)&v29;
      v20 = (int)&v30;
      v19 = *(_DWORD *)a1;
      v16 = *((_DWORD *)a3 + 59);
      v27[0] = *(unsigned __int16 *)(a1 + 10);
      LODWORD(v28) = &v32;
      LOWORD(v15) = v26;
      v26 = (int)&v33;
      v23 = v9 & 1;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)&unk_254369,
        v23,
        v23,
        (int)&v26,
        (int)&v15,
        (int)&v28,
        (int)v27,
        (int)&v16,
        (int)&v17,
        (int)&v18,
        (int)&v19,
        (int)&v20,
        (int)&v21,
        (int)&v22,
        (int)&v23,
        (int)&v24,
        (int)&v25);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v13) )
  {
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      if ( (unsigned __int8)_tlgKeywordOn(16, 0) )
      {
        v33 = *(int *)(a1 + 12);
        v32 = *(unsigned int *)(a1 + 8);
        v30 = *(_DWORD *)(v15 + 96);
        v31 = *(_DWORD *)(v15 + 100);
        v21 = v7;
        v20 = v7;
        v10 = *((_DWORD *)a3 + 172) >> 13;
        LODWORD(v28) = (*((_DWORD *)a3 + 172) >> 29) & 1;
        v27[0] = (unsigned __int8)a4;
        v25 = *(_DWORD *)(a1 + 16);
        v24 = (int)&v33;
        v23 = (int)&v32;
        v22 = *(_DWORD *)a1;
        v19 = *((_DWORD *)a3 + 59);
        v18 = (int)&v30;
        v26 = v10 & 1;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_254452,
          v26,
          v26,
          (int)&v18,
          (int)&v19,
          (int)&v20,
          (int)&v21,
          (int)&v22,
          (int)&v23,
          (int)&v24,
          (int)&v25,
          (int)&v26,
          (int)v27,
          (int)&v28);
      }
    }
  }
  else if ( InputTraceLogging::IsKeyboardInputMessage(v14) )
  {
    if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
    {
      v23 = v7;
      v22 = v7;
      LODWORD(v33) = *(_DWORD *)(v15 + 96);
      v11 = *((_DWORD *)a3 + 172);
      HIDWORD(v33) = *(_DWORD *)(v15 + 100);
      LODWORD(v28) = (v11 >> 29) & 1;
      v27[0] = (unsigned __int8)a4;
      v25 = *(_DWORD *)(a1 + 16);
      v24 = *(_DWORD *)a1;
      v21 = *((_DWORD *)a3 + 59);
      v20 = (int)&v33;
      v26 = (v11 >> 13) & 1;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_2689E8,
        (int)&unk_254512,
        v26,
        v26,
        (int)&v20,
        (int)&v21,
        (int)&v22,
        (int)&v23,
        (int)&v24,
        (int)&v25,
        (int)&v26,
        (int)v27,
        (int)&v28);
    }
  }
  else if ( v7 == 255 && (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
  {
    v33 = *(int *)(a1 + 12);
    v30 = *(_DWORD *)(v15 + 96);
    v31 = *(_DWORD *)(v15 + 100);
    v12 = *(_DWORD *)(a1 + 8);
    LODWORD(v28) = (*((_DWORD *)a3 + 172) >> 29) & 1;
    v27[0] = (unsigned __int8)a4;
    v26 = *(_DWORD *)(a1 + 16);
    v25 = (int)&v33;
    v24 = (int)&v32;
    v23 = *(_DWORD *)a1;
    v22 = 255;
    v21 = 255;
    v20 = *((_DWORD *)a3 + 59);
    v32 = v12;
    v19 = (_BYTE)v12 == 1;
    v18 = (int)&v30;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      (int)&unk_2545C5,
      (int)a3,
      (int)a3,
      (int)&v18,
      (int)&v19,
      (int)&v20,
      (int)&v21,
      (int)&v22,
      (int)&v23,
      (int)&v24,
      (int)&v25,
      (int)&v26,
      (int)v27,
      (int)&v28);
  }
}
