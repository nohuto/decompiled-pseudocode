/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x18022CE70
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18022C6E4 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1802296CC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18022C4D0 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        struct IManipulationResource *a2,
        unsigned __int8 a3,
        __int64 a4,
        struct IManipulationTelemetryData *a5,
        struct InteractionOutput *a6)
{
  int v7; // r15d
  char RailsEnabled; // r12
  char v10; // cl
  char v11; // dl
  int v12; // xmm0_4
  int v13; // eax
  int v14; // eax
  int v15; // xmm1_4
  int v16; // eax
  int v17; // xmm0_4
  __int64 v18; // rax
  int v19; // xmm1_4
  __int64 (__fastcall *v20)(struct IManipulationResource *, _DWORD *, struct IManipulationTelemetryData *); // rax
  int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+6Ch] [rbp-94h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  struct IManipulationResource *v37; // [rsp+78h] [rbp-88h] BYREF
  CInteractionProcessor *v38; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v39[4]; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+98h] [rbp-68h]
  _DWORD v41[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B4h] [rbp-4Ch]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  int v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C4h] [rbp-3Ch]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D4h] [rbp-2Ch]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  int v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  int v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F4h] [rbp-Ch]
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]

  v7 = a3;
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v10 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( (_BYTE)v7 )
  {
    v11 = *((_BYTE *)this + 808);
    v12 = 0;
    if ( (v11 & 1) != 0 )
    {
      v12 = *((_DWORD *)a6 + 2);
    }
    else
    {
      *((_DWORD *)a6 + 2) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 2) == 0 )
    {
      *((_DWORD *)a6 + 3) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 4) == 0 )
      *((_DWORD *)a6 + 4) = 1065353216;
    v42 = 0;
    v13 = 3;
    v41[0] = 3;
    if ( *((_DWORD *)this + 198) )
    {
      if ( *(_DWORD *)a6 )
        v13 = 2;
      v41[0] = v13;
    }
    v14 = *((_DWORD *)a6 + 5);
    v15 = *((_DWORD *)a6 + 4);
    v45 = 0;
    v52 = 0;
    v55 = 0;
    v59 = 0;
    v60 = v14;
    v61 = *((_DWORD *)this + 197);
    v41[1] = *((_DWORD *)this + 203);
    v16 = *((_DWORD *)this + 204);
    v43 = v12;
    v17 = *((_DWORD *)a6 + 3);
    v41[2] = v16;
    v41[3] = *((_DWORD *)this + 205);
    v44 = v17;
    v18 = *(_QWORD *)a2;
    v46 = v15;
    v47 = v15;
    v19 = *((_DWORD *)a6 + 6);
    v20 = *(__int64 (__fastcall **)(struct IManipulationResource *, _DWORD *, struct IManipulationTelemetryData *))(v18 + 24);
    v48 = (int)FLOAT_1_0;
    v21 = *((_DWORD *)a6 + 7);
    v50 = v19;
    v22 = *((_DWORD *)a6 + 9);
    v51 = v21;
    v23 = *((_DWORD *)a6 + 10);
    v53 = v22;
    v54 = v22;
    v24 = *((_DWORD *)a6 + 11);
    v57 = v23;
    v25 = *((_DWORD *)a6 + 13);
    v58 = v24;
    v26 = *((_DWORD *)a6 + 8);
    LOBYTE(v42) = RailsEnabled | v42 & 0xFC | (2 * (v10 | 2));
    v49 = v25;
    v56 = v26;
    v27 = v20(a2, v41, a5);
  }
  else
  {
    v40 = 0;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a6 + 4) & 2) == 0 && *(_DWORD *)a6 )
      v39[0] = 3;
    else
      v39[0] = 0;
    v39[1] = *((_DWORD *)this + 203);
    v39[2] = *((_DWORD *)this + 204);
    v39[3] = *((_DWORD *)this + 205);
    v31 = *(_QWORD *)a2;
    LOBYTE(v40) = RailsEnabled | v40 & 0xFC | (2 * (v10 | 2));
    v27 = (*(__int64 (__fastcall **)(struct IManipulationResource *, _DWORD *, _QWORD))(v31 + 32))(a2, v39, 0LL);
  }
  if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
  {
    v33 = *((_DWORD *)a6 + 1);
    v34 = *((_DWORD *)this + 198);
    v32 = v27;
    v35 = 1;
    v36 = v7;
    v37 = a2;
    v38 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_1802E996F,
      v29,
      v30,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32);
  }
}
