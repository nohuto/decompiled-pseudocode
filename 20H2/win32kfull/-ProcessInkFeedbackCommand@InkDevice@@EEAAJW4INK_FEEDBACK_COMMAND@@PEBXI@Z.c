/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0255720
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024E9B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C0252DAC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0253178 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0253270 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C0253464 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C0253774 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C025379C (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C0253FB8 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U1@U4@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@6666363333333333333@Z @ 0x1C02541BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapper.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C02548B0 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C0254BA4 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  struct _EVENT_DATA_DESCRIPTOR *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  char v27; // [rsp+F0h] [rbp-80h] BYREF
  char v28; // [rsp+F1h] [rbp-7Fh] BYREF
  char v29; // [rsp+F2h] [rbp-7Eh] BYREF
  char v30; // [rsp+F3h] [rbp-7Dh] BYREF
  char v31; // [rsp+F4h] [rbp-7Ch] BYREF
  char v32; // [rsp+F5h] [rbp-7Bh] BYREF
  _BYTE v33[2]; // [rsp+F6h] [rbp-7Ah] BYREF
  int v34; // [rsp+F8h] [rbp-78h] BYREF
  int v35; // [rsp+FCh] [rbp-74h] BYREF
  int v36; // [rsp+100h] [rbp-70h] BYREF
  int v37; // [rsp+104h] [rbp-6Ch] BYREF
  int v38; // [rsp+108h] [rbp-68h] BYREF
  int v39; // [rsp+10Ch] [rbp-64h] BYREF
  int v40; // [rsp+110h] [rbp-60h] BYREF
  int v41; // [rsp+114h] [rbp-5Ch] BYREF
  int v42; // [rsp+118h] [rbp-58h] BYREF
  int v43; // [rsp+11Ch] [rbp-54h] BYREF
  int v44; // [rsp+120h] [rbp-50h] BYREF
  int v45; // [rsp+124h] [rbp-4Ch] BYREF
  int v46; // [rsp+128h] [rbp-48h] BYREF
  int v47; // [rsp+12Ch] [rbp-44h] BYREF
  int v48; // [rsp+130h] [rbp-40h] BYREF
  int v49; // [rsp+134h] [rbp-3Ch] BYREF
  int v50; // [rsp+138h] [rbp-38h] BYREF
  int v51; // [rsp+13Ch] [rbp-34h] BYREF
  int v52; // [rsp+140h] [rbp-30h] BYREF
  int v53; // [rsp+144h] [rbp-2Ch] BYREF
  int v54; // [rsp+148h] [rbp-28h] BYREF
  int v55; // [rsp+14Ch] [rbp-24h] BYREF
  int v56; // [rsp+150h] [rbp-20h] BYREF
  int v57; // [rsp+154h] [rbp-1Ch] BYREF
  int v58; // [rsp+158h] [rbp-18h] BYREF
  int v59; // [rsp+15Ch] [rbp-14h] BYREF
  int v60; // [rsp+160h] [rbp-10h] BYREF
  int v61; // [rsp+164h] [rbp-Ch] BYREF
  int v62; // [rsp+168h] [rbp-8h] BYREF
  int v63; // [rsp+16Ch] [rbp-4h] BYREF
  __int64 v64; // [rsp+170h] [rbp+0h] BYREF
  void *v65; // [rsp+178h] [rbp+8h] BYREF
  const char *v66; // [rsp+180h] [rbp+10h] BYREF
  __int64 v67; // [rsp+188h] [rbp+18h] BYREF
  void *v68; // [rsp+190h] [rbp+20h] BYREF
  const char *v69; // [rsp+198h] [rbp+28h] BYREF
  const char *v70; // [rsp+1A0h] [rbp+30h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+1A8h] [rbp+38h] BYREF
  __int64 v72; // [rsp+1B0h] [rbp+40h] BYREF
  void *v73; // [rsp+1B8h] [rbp+48h] BYREF
  const char *v74; // [rsp+1C0h] [rbp+50h] BYREF
  const char *v75; // [rsp+1C8h] [rbp+58h] BYREF
  const char *v76; // [rsp+1D0h] [rbp+60h] BYREF
  const char *v77; // [rsp+1D8h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1E0h] [rbp+70h] BYREF
  int *v79; // [rsp+200h] [rbp+90h]
  __int64 v80; // [rsp+208h] [rbp+98h]
  char v81; // [rsp+210h] [rbp+A0h] BYREF
  int *v82; // [rsp+230h] [rbp+C0h]
  __int64 v83; // [rsp+238h] [rbp+C8h]
  char v84; // [rsp+240h] [rbp+D0h] BYREF
  int *v85; // [rsp+260h] [rbp+F0h]
  __int64 v86; // [rsp+268h] [rbp+F8h]
  char v87; // [rsp+270h] [rbp+100h] BYREF
  int *v88; // [rsp+290h] [rbp+120h]
  __int64 v89; // [rsp+298h] [rbp+128h]

  if ( *(_BYTE *)(a1 - 20) )
  {
    v8 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( (_DWORD)a4 != 64 )
      {
        v6 = -1073741811;
        if ( (unsigned int)dword_1C032A288 <= 2 )
          return v6;
        v41 = -1073741811;
        v86 = 4LL;
        v85 = &v41;
        v7 = (struct _EVENT_DATA_DESCRIPTOR *)&v84;
        goto LABEL_4;
      }
      v14 = (unsigned int)dword_1C032A288;
      if ( (unsigned int)dword_1C032A288 > 4 )
      {
        v15 = *(_DWORD *)(a3 + 60);
        v57 = 0;
        v42 = -__CFSHR__(v15, 3);
        v43 = -__CFSHR__(v15, 2);
        v45 = *(_DWORD *)(a3 + 56);
        v46 = *(_DWORD *)(a3 + 52);
        v47 = *(_DWORD *)(a3 + 48);
        v48 = *(_DWORD *)(a3 + 44);
        v49 = *(_DWORD *)(a3 + 40);
        v50 = *(_DWORD *)(a3 + 36);
        v51 = *(_DWORD *)(a3 + 32);
        v52 = *(_DWORD *)(a3 + 28);
        v53 = *(_DWORD *)(a3 + 24);
        v54 = *(_DWORD *)(a3 + 20);
        v28 = *(_BYTE *)(a3 + 16);
        v55 = *(_DWORD *)(a3 + 12);
        v29 = *(_BYTE *)(a3 + 11);
        v30 = *(_BYTE *)(a3 + 10);
        v31 = *(_BYTE *)(a3 + 9);
        v32 = *(_BYTE *)(a3 + 8);
        v33[0] = *(_BYTE *)(a3 + 4);
        v56 = *(_DWORD *)a3;
        v44 = -(v15 & 1);
        v73 = *(void **)(a1 + 48);
        v74 = "Processing ink feedback command: IFC_SUPERWET_INK_START...";
        v72 = a1 & -(__int64)(a1 != 32);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v72,
          byte_1C02F22D6,
          a3,
          (unsigned int)dword_1C032A288,
          (__int64)&v57,
          (void **)&v74,
          &v73,
          (__int64)&v72,
          (__int64)&v56,
          (__int64)v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v55,
          (__int64)&v28,
          (__int64)&v54,
          (__int64)&v53,
          (__int64)&v52,
          (__int64)&v51,
          (__int64)&v50,
          (__int64)&v49,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v42);
        v14 = (unsigned int)dword_1C032A288;
      }
      if ( *(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 108) )
      {
        if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *(_DWORD *)a3) )
        {
          v6 = -1073741823;
          if ( (unsigned int)v18 > 2 )
          {
            v60 = v17;
            v76 = "The specified pointer id already has an active IFC_SUPERWET_INK_START command";
            v61 = -1073741823;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              v16,
              byte_1C02F20F4,
              v17,
              v18,
              (__int64)&v61,
              (void **)&v76,
              (__int64)&v60);
          }
        }
        else if ( IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), a3) )
        {
          v22 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
          v23 = v22;
          if ( v22 )
          {
            v22[2] = 0LL;
            v22[3] = 0LL;
            v22[1] = 0LL;
            *v22 = 0LL;
          }
          else
          {
            v23 = 0LL;
          }
          if ( !v23 )
          {
            v6 = -1073741801;
            if ( (unsigned int)dword_1C032A288 <= 2 )
              return v6;
            v63 = -1073741801;
            v88 = &v63;
            v7 = (struct _EVENT_DATA_DESCRIPTOR *)&v87;
            v89 = 4LL;
            goto LABEL_4;
          }
          *((_DWORD *)v23 + 4) = 1;
          *((_DWORD *)v23 + 5) = *(_DWORD *)a3;
          v23[3] = KeGetCurrentThread();
          v6 = InkDevice::DoSuperWetInkStart((InkDevice *)(a1 - 32), (const struct IFC_SUPERWET_INK_START_DATA *)a3);
          if ( (v6 & 0x80000000) != 0 )
            Win32FreePool(v23);
          else
            InkFeedbackProviderBase::AddActiveCommand(
              (InkFeedbackProviderBase *)a1,
              (struct InkFeedbackProviderBase::ActiveCommand *)v23,
              v24,
              v25);
        }
        else
        {
          v6 = -1073741637;
          if ( (unsigned int)v21 > 2 )
          {
            v62 = -1073741637;
            v77 = "Super-wet ink not supported for the specified drawing attributes";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
              v19,
              byte_1C02F1A33,
              v20,
              v21,
              (__int64)&v62,
              (void **)&v77);
          }
        }
      }
      else
      {
        v6 = -1073741823;
        if ( (unsigned int)v14 > 2 )
        {
          v58 = *(_DWORD *)(a1 + 40);
          v59 = -1073741823;
          v75 = "Too many active commands";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v8,
            byte_1C02F246F,
            a3,
            v14,
            (__int64)&v59,
            (void **)&v75,
            (__int64)&v58);
        }
      }
    }
    else if ( a2 == 2 )
    {
      if ( (_DWORD)a4 != 4 )
      {
        v6 = -1073741811;
        if ( (unsigned int)dword_1C032A288 <= 2 )
          return v6;
        v36 = -1073741811;
        v83 = 4LL;
        v82 = &v36;
        v7 = (struct _EVENT_DATA_DESCRIPTOR *)&v81;
        goto LABEL_4;
      }
      if ( (unsigned int)dword_1C032A288 > 4 )
      {
        v37 = *(_DWORD *)a3;
        v38 = 0;
        v68 = *(void **)(a1 + 48);
        v69 = "Processing ink feedback command: IFC_SUPERWET_INK_STOP...";
        v67 = a1 & -(__int64)(a1 != 32);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v67,
          byte_1C02F2131,
          a3,
          (unsigned int)dword_1C032A288,
          (__int64)&v38,
          (void **)&v69,
          &v68,
          (__int64)&v67,
          (__int64)&v37);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          a1,
                                                                                          1,
                                                                                          *(_DWORD *)a3);
      if ( ActiveCommandByTargetPointerId )
      {
        v6 = InkDevice::DoSuperWetInkStop((InkDevice *)(a1 - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
        InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
          (InkFeedbackProviderBase *)a1,
          &ActiveCommandByTargetPointerId,
          v12,
          v13);
      }
      else
      {
        v6 = -1073741823;
        if ( (unsigned int)v11 > 2 )
        {
          v39 = v10;
          v70 = "Active IFC_SUPERWET_INK_START command not found for the specified pointer id";
          v40 = -1073741823;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v9,
            byte_1C02F20F4,
            v10,
            v11,
            (__int64)&v40,
            (void **)&v70,
            (__int64)&v39);
        }
      }
    }
    else
    {
      v6 = -1073741637;
      if ( (unsigned int)dword_1C032A288 > 2 )
      {
        v27 = a2;
        v35 = -1073741637;
        v65 = *(void **)(a1 + 48);
        v66 = "Unsupported command";
        v64 = a1 & -(__int64)(a1 != 32);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v64,
          byte_1C02F2096,
          a3,
          a4,
          (__int64)&v35,
          (void **)&v66,
          &v65,
          (__int64)&v64,
          (__int64)&v27);
      }
    }
  }
  else
  {
    v6 = -1073741823;
    if ( (unsigned int)dword_1C032A288 > 2 )
    {
      v34 = -1073741823;
      v79 = &v34;
      v7 = &v78;
      v80 = 4LL;
LABEL_4:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032A288, (unsigned __int8 *)dword_1C02F0A0C, 0LL, 0LL, 3u, v7);
    }
  }
  return v6;
}
