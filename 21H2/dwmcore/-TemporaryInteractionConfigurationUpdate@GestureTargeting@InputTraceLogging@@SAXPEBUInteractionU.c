/*
 * XREFs of ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180227D14
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18004DCC0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18004EA64 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@455553AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x180223758 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180223758.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x180224E4C (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180224E78 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180224EE4 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180224F58 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1802250A8 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  int v2; // ebx
  __int64 v3; // r9
  const char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  int v10; // ecx
  int v11; // ecx
  const char *v12; // rax
  int v13; // ecx
  const char *updated; // rax
  __int64 v15; // rdx
  const struct CInteraction *v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r10
  unsigned __int8 v21; // al
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  const struct CInteraction *v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+C0h] [rbp-80h] BYREF
  int v30; // [rsp+C4h] [rbp-7Ch] BYREF
  __int64 v31; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v38; // [rsp+100h] [rbp-40h] BYREF
  __int64 v39; // [rsp+108h] [rbp-38h] BYREF
  __int64 v40; // [rsp+110h] [rbp-30h] BYREF
  __int64 v41; // [rsp+118h] [rbp-28h] BYREF
  __int64 v42; // [rsp+120h] [rbp-20h] BYREF
  __int64 v43; // [rsp+128h] [rbp-18h] BYREF
  __int64 v44; // [rsp+130h] [rbp-10h] BYREF
  __int64 v45; // [rsp+160h] [rbp+20h] BYREF
  __int64 v46; // [rsp+168h] [rbp+28h] BYREF
  __int64 v47; // [rsp+170h] [rbp+30h] BYREF
  __int64 v48; // [rsp+178h] [rbp+38h] BYREF

  v2 = **((_DWORD **)a1 + 7);
  v3 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x800LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x800LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = "Zoom-";
    if ( (v2 & 0x20) == 0 )
      v4 = (const char *)&word_1802CE406;
    v31 = (__int64)v4;
    v5 = "Zoom+";
    if ( (v2 & 0x10) == 0 )
      v5 = (const char *)&word_1802CE406;
    v32 = (__int64)v5;
    v6 = "PanY-";
    if ( (v2 & 8) == 0 )
      v6 = (const char *)&word_1802CE406;
    v33 = (__int64)v6;
    v7 = "PanY+";
    if ( (v2 & 4) == 0 )
      v7 = (const char *)&word_1802CE406;
    v34 = (__int64)v7;
    v8 = "PanX-";
    if ( (v2 & 2) == 0 )
      v8 = (const char *)&word_1802CE406;
    v35 = (__int64)v8;
    v9 = "PanX+";
    if ( (v2 & 1) == 0 )
      v9 = (const char *)&word_1802CE406;
    v10 = *((_DWORD *)a1 + 11);
    v36 = (__int64)v9;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v12 = "Scale";
        else
          v12 = "UNKNOWN";
      }
      else
      {
        v12 = "Y";
      }
    }
    else
    {
      v12 = "X";
    }
    v13 = *((_DWORD *)a1 + 10);
    v37 = (__int64)v12;
    LOBYTE(v45) = *((_BYTE *)a1 + 64) & 1;
    updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v13);
    v16 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v38 = (__int64)updated;
    v17 = v15;
    if ( v16 )
      LOBYTE(v17) = *((_QWORD *)v16 + 34) != v15;
    LODWORD(v46) = v17;
    LODWORD(v47) = InputTraceLogging::InteractionInputTransparency(v16);
    if ( v19 )
      v21 = v20 & *(_BYTE *)(v19 + 184);
    else
      v21 = v18;
    LODWORD(v48) = v21;
    if ( v19 )
      v22 = *(_DWORD *)(v19 + 180);
    else
      v22 = v18;
    v29 = v22;
    v23 = v18;
    if ( v19 )
    {
      v24 = *(_QWORD *)(v19 + 96);
      if ( v24 )
        v23 = *(_QWORD *)(v24 + 64);
    }
    v39 = v23;
    if ( v19 )
      LODWORD(v18) = *(_DWORD *)(v19 + 1696);
    v30 = v18;
    v40 = (__int64)InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v19);
    v41 = (__int64)InputTraceLogging::InteractionSourceTypeToString(v25);
    v43 = v26;
    v42 = (v26 + 8) & -(__int64)(v26 != 0);
    v44 = (__int64)InputTraceLogging::MidManipulationUpdateTypeToString(*(_DWORD *)a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v28,
      (unsigned __int8 *)dword_1802EAACB,
      v27,
      v28,
      (const unsigned __int16 **)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (const unsigned __int16 **)&v41,
      (const unsigned __int16 **)&v40,
      (__int64)&v30,
      (__int64)&v39,
      (__int64)&v29,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (const unsigned __int16 **)&v38,
      (__int64)&v45,
      (const unsigned __int16 **)&v37,
      (const unsigned __int16 **)&v36,
      (const unsigned __int16 **)&v35,
      (const unsigned __int16 **)&v34,
      (const unsigned __int16 **)&v33,
      (const unsigned __int16 **)&v32,
      (const unsigned __int16 **)&v31);
  }
}
