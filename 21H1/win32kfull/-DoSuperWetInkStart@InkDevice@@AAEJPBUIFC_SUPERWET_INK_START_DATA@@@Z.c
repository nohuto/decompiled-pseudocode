/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1B04AA
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U1@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@433ABU?$_tlgWrapperByVal@$00@@5555353333333333333@Z @ 0x1AFEFB (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U1@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z @ 0x1B0714 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z.c)
 */

CHAR *__thiscall InkDevice::DoSuperWetInkStart(InkDevice *this, CHAR *a2)
{
  const struct IFC_SUPERWET_INK_START_DATA *v2; // edi
  int v4; // ecx
  CHAR *v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v9; // [esp+14h] [ebp-54h] BYREF
  const char *v10; // [esp+18h] [ebp-50h] BYREF
  const char *v11; // [esp+1Ch] [ebp-4Ch] BYREF
  int v12; // [esp+20h] [ebp-48h] BYREF
  int v13; // [esp+24h] [ebp-44h] BYREF
  int v14; // [esp+28h] [ebp-40h] BYREF
  int v15; // [esp+2Ch] [ebp-3Ch] BYREF
  int v16; // [esp+30h] [ebp-38h] BYREF
  int v17; // [esp+34h] [ebp-34h] BYREF
  int v18; // [esp+38h] [ebp-30h] BYREF
  int v19; // [esp+3Ch] [ebp-2Ch] BYREF
  int v20; // [esp+40h] [ebp-28h] BYREF
  int v21; // [esp+44h] [ebp-24h] BYREF
  int v22; // [esp+48h] [ebp-20h] BYREF
  int v23; // [esp+4Ch] [ebp-1Ch] BYREF
  int v24; // [esp+50h] [ebp-18h] BYREF
  int v25; // [esp+54h] [ebp-14h] BYREF
  int v26; // [esp+58h] [ebp-10h] BYREF
  int v27; // [esp+5Ch] [ebp-Ch] BYREF
  char v28; // [esp+63h] [ebp-5h] BYREF
  char v29; // [esp+64h] [ebp-4h] BYREF
  char v30; // [esp+65h] [ebp-3h] BYREF
  char v31; // [esp+66h] [ebp-2h] BYREF
  char v32; // [esp+67h] [ebp-1h] BYREF

  v2 = (const struct IFC_SUPERWET_INK_START_DATA *)a2;
  v27 = 0.0;
  v5 = (CHAR *)InkDevice::GetDisplayScalingInfoAndCheckSupported(this, *(_DWORD *)a2, &v27);
  if ( (int)v5 >= 0 )
  {
    v5 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((int)this, 1, (int)v2, 64, SLODWORD(v27));
    if ( (int)v5 >= 0 )
    {
      if ( (unsigned int)CallbackContext > 4 )
      {
        v7 = *((_DWORD *)v2 + 15);
        LODWORD(v27) = v7 << 29 >> 31;
        v26 = v7 << 30 >> 31;
        v24 = *((_DWORD *)v2 + 14);
        v23 = *((_DWORD *)v2 + 13);
        v22 = *((_DWORD *)v2 + 12);
        v21 = *((_DWORD *)v2 + 11);
        v20 = *((_DWORD *)v2 + 10);
        v19 = *((_DWORD *)v2 + 9);
        v18 = *((_DWORD *)v2 + 8);
        v17 = *((_DWORD *)v2 + 7);
        v16 = *((_DWORD *)v2 + 6);
        v15 = *((_DWORD *)v2 + 5);
        HIBYTE(a2) = *((_BYTE *)v2 + 16);
        v14 = *((_DWORD *)v2 + 3);
        v32 = *((_BYTE *)v2 + 11);
        v31 = *((_BYTE *)v2 + 10);
        v30 = *((_BYTE *)v2 + 9);
        v29 = *((_BYTE *)v2 + 8);
        v28 = *((_BYTE *)v2 + 4);
        v13 = *(_DWORD *)v2;
        v25 = v7 << 31 >> 31;
        v10 = "Started super-wet ink";
        v11 = (const char *)*((_DWORD *)this + 11);
        v9 = 0;
        v12 = this != 0 ? (unsigned int)this + 20 : 0;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v12,
          byte_2571AE,
          v12,
          v12,
          (int)&v9,
          &v10,
          &v11,
          (int)&v12,
          (int)&v13,
          (int)&v28,
          (int)&v29,
          (int)&v30,
          (int)&v31,
          (int)&v32,
          (int)&v14,
          (int)&a2 + 3,
          (int)&v15,
          (int)&v16,
          (int)&v17,
          (int)&v18,
          (int)&v19,
          (int)&v20,
          (int)&v21,
          (int)&v22,
          (int)&v23,
          (int)&v24,
          (int)&v25,
          (int)&v26,
          (int)&v27);
      }
    }
    else if ( (unsigned int)CallbackContext > 2 )
    {
      a2 = v5;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        v6,
        v6,
        (int)&a2);
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = "GetDisplayScalingInfoAndCheckSupported failed";
    v27 = *(float *)&v5;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      byte_25690B,
      v4,
      v4,
      (int)&v27,
      (const char **)&a2);
  }
  return v5;
}
