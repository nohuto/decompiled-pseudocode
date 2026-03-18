/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C02548B0
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0255720 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024E9B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U1@U4@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@6666363333333333333@Z @ 0x1C02541BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapper.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0254680 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C0254CD8 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStart(InkDevice *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  unsigned int v3; // edx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v15; // [rsp+F0h] [rbp-80h] BYREF
  char v16; // [rsp+F4h] [rbp-7Ch] BYREF
  char v17; // [rsp+F5h] [rbp-7Bh] BYREF
  char v18; // [rsp+F6h] [rbp-7Ah] BYREF
  char v19; // [rsp+F7h] [rbp-79h] BYREF
  char v20; // [rsp+F8h] [rbp-78h] BYREF
  _BYTE v21[3]; // [rsp+F9h] [rbp-77h] BYREF
  int v22; // [rsp+FCh] [rbp-74h] BYREF
  int v23; // [rsp+100h] [rbp-70h] BYREF
  int v24; // [rsp+104h] [rbp-6Ch] BYREF
  int v25; // [rsp+108h] [rbp-68h] BYREF
  int v26; // [rsp+10Ch] [rbp-64h] BYREF
  int v27; // [rsp+110h] [rbp-60h] BYREF
  int v28; // [rsp+114h] [rbp-5Ch] BYREF
  int v29; // [rsp+118h] [rbp-58h] BYREF
  int v30; // [rsp+11Ch] [rbp-54h] BYREF
  int v31; // [rsp+120h] [rbp-50h] BYREF
  int v32; // [rsp+124h] [rbp-4Ch] BYREF
  int v33; // [rsp+128h] [rbp-48h] BYREF
  int v34; // [rsp+12Ch] [rbp-44h] BYREF
  unsigned int v35; // [rsp+130h] [rbp-40h] BYREF
  const char *v36; // [rsp+138h] [rbp-38h] BYREF
  unsigned __int64 v37; // [rsp+140h] [rbp-30h] BYREF
  void *v38; // [rsp+148h] [rbp-28h] BYREF
  const char *v39; // [rsp+150h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+158h] [rbp-18h] BYREF
  int *v41; // [rsp+178h] [rbp+8h]
  int v42; // [rsp+180h] [rbp+10h]
  int v43; // [rsp+184h] [rbp+14h]

  v3 = *(_DWORD *)a2;
  v15 = 0;
  v5 = InkDevice::GetDisplayScalingInfoAndCheckSupported(this, v3, (float *)&v15);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v10 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    v9 = v10;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)dword_1C032A288 > 4 )
      {
        v13 = *((_DWORD *)a2 + 15);
        v15 = -__CFSHR__(v13, 3);
        v22 = -__CFSHR__(v13, 2);
        v24 = *((_DWORD *)a2 + 14);
        v25 = *((_DWORD *)a2 + 13);
        v26 = *((_DWORD *)a2 + 12);
        v27 = *((_DWORD *)a2 + 11);
        v28 = *((_DWORD *)a2 + 10);
        v29 = *((_DWORD *)a2 + 9);
        v30 = *((_DWORD *)a2 + 8);
        v31 = *((_DWORD *)a2 + 7);
        v32 = *((_DWORD *)a2 + 6);
        v33 = *((_DWORD *)a2 + 5);
        v16 = *((_BYTE *)a2 + 16);
        v34 = *((_DWORD *)a2 + 3);
        v17 = *((_BYTE *)a2 + 11);
        v18 = *((_BYTE *)a2 + 10);
        v19 = *((_BYTE *)a2 + 9);
        v20 = *((_BYTE *)a2 + 8);
        v21[0] = *((_BYTE *)a2 + 4);
        v35 = *(_DWORD *)a2;
        v23 = -(v13 & 1);
        v38 = (void *)*((_QWORD *)this + 10);
        LODWORD(v36) = 0;
        v39 = "Started super-wet ink";
        v37 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v37,
          byte_1C02F22D6,
          v11,
          v12,
          (__int64)&v36,
          (void **)&v39,
          &v38,
          (__int64)&v37,
          (__int64)&v35,
          (__int64)v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v34,
          (__int64)&v16,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v15);
      }
    }
    else if ( (unsigned int)dword_1C032A288 > 2 )
    {
      v43 = 0;
      v15 = v10;
      v42 = 4;
      v41 = &v15;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032A288,
        (unsigned __int8 *)dword_1C02F0A0C,
        0LL,
        0LL,
        3u,
        &v40);
    }
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    v15 = v5;
    v36 = "GetDisplayScalingInfoAndCheckSupported failed";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v6,
      byte_1C02F1A33,
      v7,
      v8,
      (__int64)&v15,
      (void **)&v36);
  }
  return v9;
}
