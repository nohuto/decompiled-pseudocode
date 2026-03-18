/*
 * XREFs of ?SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z @ 0x9AE96
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4ABU?$_tlgWrapSz@G@@44445ABU?$_tlgWrapSz@D@@4444@Z @ 0x14C08B (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U-.c)
 *     ?GetWindowDetails@InputTraceLogging@@CG?AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z @ 0x14D176 (-GetWindowDetails@InputTraceLogging@@CG-AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z.c)
 */

void __userpurge InputTraceLogging::Mouse::SecondaryHitTest(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagQMSG *a3,
        const struct tagPOINT *a4,
        struct tagWND *a5)
{
  int v5; // esi
  int *v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // [esp+10h] [ebp-80h] BYREF
  int v10; // [esp+14h] [ebp-7Ch] BYREF
  int v11; // [esp+18h] [ebp-78h] BYREF
  int v12; // [esp+1Ch] [ebp-74h] BYREF
  int v13; // [esp+20h] [ebp-70h] BYREF
  int v14; // [esp+24h] [ebp-6Ch] BYREF
  int v15; // [esp+28h] [ebp-68h] BYREF
  int v16; // [esp+2Ch] [ebp-64h] BYREF
  int v17; // [esp+30h] [ebp-60h] BYREF
  int v18; // [esp+34h] [ebp-5Ch] BYREF
  int v19; // [esp+38h] [ebp-58h] BYREF
  int v20; // [esp+3Ch] [ebp-54h] BYREF
  int v21; // [esp+40h] [ebp-50h] BYREF
  int v22; // [esp+44h] [ebp-4Ch] BYREF
  _DWORD v23[3]; // [esp+48h] [ebp-48h] BYREF
  _DWORD v24[7]; // [esp+54h] [ebp-3Ch] BYREF
  _BYTE v25[32]; // [esp+70h] [ebp-20h] BYREF

  v10 = a2;
  v9 = a1;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0) )
  {
    qmemcpy(v24, (const void *)InputTraceLogging::GetWindowDetails(a3, v25), sizeof(v24));
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      v5 = 0;
      if ( (unsigned __int8)_tlgKeywordOn(64, 0) )
      {
        v6 = (int *)v10;
        v7 = *(_DWORD *)(v9 + 4);
        v8 = *(_DWORD *)v9;
        v10 = *(_DWORD *)(v10 + 48);
        v9 = v6[11];
        if ( a3 )
          v5 = *(_DWORD *)a3;
        v23[0] = v6[24];
        v23[1] = v6[25];
        v13 = v24[0];
        v14 = v24[1];
        v15 = v24[6];
        v16 = v24[5];
        v17 = v24[4];
        v18 = v24[3];
        v19 = v24[2];
        v21 = v6[3];
        v22 = (int)v23;
        v11 = v7;
        v12 = v8;
        v20 = v5;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_254749,
          (int)v6,
          (int)v6,
          (int)&v22,
          (int)&v21,
          (int)&v20,
          (int)&v19,
          (int)&v18,
          (int)&v17,
          (int)&v16,
          (int)&v15,
          (int)&v14,
          (int)&v13,
          (int)&v9,
          (int)&v10,
          (int)&v12,
          (int)&v11);
      }
    }
  }
}
