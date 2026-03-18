/*
 * XREFs of ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752 (-IsMouseInputMessage@InputTraceLogging@@CG_NI@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByRef@$07@@U3@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$01@@ABU?$_tlgWrapperByVal@$03@@44ABU?$_tlgWrapperByRef@$07@@544444ABU?$_tlgWrapSz@G@@44446ABU?$_tlgWrapSz@D@@@Z @ 0x14C37B (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByRef@$07@@U3@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@333333ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x14C58A (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapS.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@433333ABU?$_tlgWrapSz@G@@33335ABU?$_tlgWrapSz@D@@@Z @ 0x14C722 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByRef@$07@@U2@U1@U1@U1@U1@U1@U-$_tlgWrapSz.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@43333ABU?$_tlgWrapSz@G@@33335ABU?$_tlgWrapSz@D@@@Z @ 0x14C912 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByRef@$07@@U2@U1@U1@U1@U1@U-$_tlgWrapSz@G@.c)
 *     ?GetWindowDetails@InputTraceLogging@@CG?AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z @ 0x14D176 (-GetWindowDetails@InputTraceLogging@@CG-AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z.c)
 */

void __userpurge InputTraceLogging::Delivery::GetMessageW(
        int a1@<edx>,
        int *a2@<ecx>,
        const struct tagMSG *a3,
        const struct tagTHREADINFO *a4,
        struct tagWND *a5,
        struct tagBWND *a6,
        bool a7)
{
  unsigned int v8; // esi
  char *v9; // ecx
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  void *v15; // edx
  int v16; // [esp-50h] [ebp-100h]
  int v17; // [esp-4Ch] [ebp-FCh]
  int v18; // [esp-48h] [ebp-F8h]
  int v19; // [esp-44h] [ebp-F4h]
  int v20; // [esp-40h] [ebp-F0h]
  int v21; // [esp-3Ch] [ebp-ECh]
  int v22; // [esp+10h] [ebp-A0h] BYREF
  int v23; // [esp+14h] [ebp-9Ch] BYREF
  int v24; // [esp+18h] [ebp-98h] BYREF
  int v25; // [esp+1Ch] [ebp-94h] BYREF
  int v26; // [esp+20h] [ebp-90h] BYREF
  int v27; // [esp+24h] [ebp-8Ch] BYREF
  int v28; // [esp+28h] [ebp-88h] BYREF
  int v29; // [esp+2Ch] [ebp-84h] BYREF
  int v30; // [esp+30h] [ebp-80h] BYREF
  int v31; // [esp+34h] [ebp-7Ch] BYREF
  int v32; // [esp+38h] [ebp-78h] BYREF
  int v33; // [esp+3Ch] [ebp-74h] BYREF
  int v34; // [esp+40h] [ebp-70h] BYREF
  int v35; // [esp+44h] [ebp-6Ch] BYREF
  int v36; // [esp+48h] [ebp-68h] BYREF
  int v37; // [esp+4Ch] [ebp-64h] BYREF
  __int64 v38; // [esp+50h] [ebp-60h] BYREF
  __int64 v39; // [esp+58h] [ebp-58h] BYREF
  _DWORD v40[7]; // [esp+64h] [ebp-4Ch] BYREF
  int v41; // [esp+80h] [ebp-30h] BYREF
  int v42; // [esp+84h] [ebp-2Ch]
  int v43; // [esp+8Ch] [ebp-24h] BYREF
  _BYTE v44[32]; // [esp+90h] [ebp-20h] BYREF

  v35 = a1;
  if ( !dword_2689E8 || !(unsigned __int8)_tlgKeywordOn(0, 0) )
    return;
  qmemcpy(v40, (const void *)InputTraceLogging::GetWindowDetails(a3, v44), sizeof(v40));
  v8 = a2[1];
  if ( IsPointerInputMessage(v8) )
  {
    if ( *((_WORD *)a2 + 4) == 1 )
    {
      if ( (unsigned int)dword_2689E8 > 4 )
      {
        if ( (unsigned __int8)_tlgKeywordOn(16, 0) )
        {
          v39 = a2[3];
          v43 = v40[0];
          v36 = v40[1];
          v37 = v40[6];
          v22 = v40[5];
          v23 = v40[4];
          v24 = v40[3];
          v25 = v40[2];
          v27 = (unsigned __int8)a5;
          v10 = *a2;
          v11 = a2[2];
          v35 = *(_DWORD *)(v35 + 236);
          v29 = a2[4];
          v30 = (int)&v39;
          v31 = (int)&v38;
          v38 = v11;
          v26 = v10;
          v28 = HIWORD(v11);
          v32 = v10;
          v33 = v8;
          v34 = v8;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_2689E8,
            (int)&unk_254AAE,
            v17,
            v18,
            (int)&v34,
            (int)&v33,
            (int)&v32,
            (int)&v31,
            (int)&v30,
            (int)&v29,
            (int)&v35,
            (int)&v28,
            (int)&v27,
            (int)&v26,
            (int)&v25,
            (int)&v24,
            (int)&v23,
            (int)&v22,
            (int)&v37,
            (int)&v36,
            (int)&v43);
        }
      }
    }
    else if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
    {
      v38 = a2[3];
      v34 = v40[0];
      v33 = v40[1];
      v32 = v40[6];
      v31 = v40[5];
      v30 = v40[4];
      v29 = v40[3];
      v28 = v40[2];
      v26 = (unsigned __int8)a5;
      v12 = a2[2];
      v25 = HIWORD(v12);
      v13 = *a2;
      v41 = v12;
      v27 = v13;
      v24 = *(_DWORD *)(v35 + 236);
      v23 = a2[4];
      v22 = (int)&v38;
      v37 = (int)&v41;
      v36 = v13;
      LOWORD(v35) = v12;
      v42 = 0;
      v43 = v8;
      LODWORD(v39) = v8;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_2689E8,
        (int)&unk_254BAE,
        v16,
        v17,
        (int)&v35,
        (int)&v39,
        (int)&v43,
        (int)&v36,
        (int)&v37,
        (int)&v22,
        (int)&v23,
        (int)&v24,
        (int)&v25,
        (int)&v26,
        (int)&v27,
        (int)&v28,
        (int)&v29,
        (int)&v30,
        (int)&v31,
        (int)&v32,
        (int)&v33,
        (int)&v34);
    }
    return;
  }
  if ( InputTraceLogging::IsMouseInputMessage(v9) )
  {
    if ( (unsigned int)dword_2689E8 <= 4 || !(unsigned __int8)_tlgKeywordOn(16, 0) )
      return;
    v14 = a2[3];
    v42 = v14 >> 31;
    v15 = &unk_254CBD;
    goto LABEL_28;
  }
  if ( v8 - 256 > 9 )
  {
    if ( v8 == 255 )
    {
      if ( (unsigned int)dword_2689E8 <= 4 || !(unsigned __int8)_tlgKeywordOn(16, 0) )
        return;
      v14 = a2[3];
      v42 = v14 >> 31;
      v15 = &unk_254E98;
      v37 = 255;
      v36 = 255;
LABEL_29:
      v41 = v14;
      v38 = (unsigned int)a2[2];
      LODWORD(v39) = v40[0];
      v34 = v40[1];
      v33 = v40[6];
      v32 = v40[5];
      v31 = v40[4];
      v30 = v40[3];
      v29 = v40[2];
      v27 = (unsigned __int8)a5;
      v28 = *a2;
      v22 = v28;
      v26 = *(_DWORD *)(v35 + 236);
      v25 = a2[4];
      v24 = (int)&v41;
      v23 = (int)&v38;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_2689E8,
        (int)v15,
        v18,
        v19,
        (int)&v36,
        (int)&v37,
        (int)&v22,
        (int)&v23,
        (int)&v24,
        (int)&v25,
        (int)&v26,
        (int)&v27,
        (int)&v28,
        (int)&v29,
        (int)&v30,
        (int)&v31,
        (int)&v32,
        (int)&v33,
        (int)&v34,
        (int)&v39);
      return;
    }
    if ( v8 - 571 > 1 || (unsigned int)dword_2689E8 <= 4 || !(unsigned __int8)_tlgKeywordOn(16, 0) )
      return;
    v14 = a2[3];
    v42 = v14 >> 31;
    v15 = &unk_254F8F;
LABEL_28:
    v36 = v8;
    v37 = v8;
    goto LABEL_29;
  }
  if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(16, 0) )
  {
    LODWORD(v39) = v40[0];
    v34 = v40[1];
    v33 = v40[6];
    v32 = v40[5];
    v31 = v40[4];
    v30 = v40[3];
    v29 = v40[2];
    v27 = (unsigned __int8)a5;
    v28 = *a2;
    v24 = v28;
    v26 = *(_DWORD *)(v35 + 236);
    v25 = a2[4];
    v23 = v8;
    v22 = v8;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      (int)&unk_254DB1,
      v20,
      v21,
      (int)&v22,
      (int)&v23,
      (int)&v24,
      (int)&v25,
      (int)&v26,
      (int)&v27,
      (int)&v28,
      (int)&v29,
      (int)&v30,
      (int)&v31,
      (int)&v32,
      (int)&v33,
      (int)&v34,
      (int)&v39);
  }
}
