/*
 * XREFs of ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18020BDE0
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1802035F0 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18020C8D4 (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180201350 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18020B538 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 */

void __fastcall CMotion::StartInertia(CMotion *this, float a2, float a3, char a4, int a5)
{
  int v6; // edi
  char v8; // al
  float v9; // xmm0_4
  char v10; // cl
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float (__fastcall *v15)(CMotion *); // rax
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+68h] [rbp+Fh] BYREF
  wchar_t *v24; // [rsp+70h] [rbp+17h] BYREF
  CMotion *v25; // [rsp+78h] [rbp+1Fh] BYREF
  int v26; // [rsp+B8h] [rbp+5Fh] BYREF
  int v27; // [rsp+C0h] [rbp+67h] BYREF
  int v28; // [rsp+C8h] [rbp+6Fh] BYREF

  *((float *)this + 8) = a3;
  v6 = 0;
  *((_DWORD *)this + 6) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  v8 = *((_BYTE *)this + 8);
  if ( !(_BYTE)a5 )
    v8 = a4 | v8 & 0xFE;
  v9 = *((float *)this + 10);
  v10 = 0;
  if ( v9 != 0.0 )
    v10 = 4;
  *((_DWORD *)this + 10) = 0;
  v11 = v9 + a2;
  *((_BYTE *)this + 8) = v10 | v8 & 0xFB;
  v12 = 0;
  v13 = fminf(COERCE_FLOAT(LODWORD(v11) & _xmm), *((float *)this + 13));
  LOBYTE(v12) = v11 > 0.0;
  LOBYTE(v6) = v11 < 0.0;
  v14 = (float)(v12 - v6);
  v15 = *(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 40LL);
  v16 = v14 * v13;
  *((float *)this + 12) = v16;
  *((float *)this + 7) = v16;
  v17 = v15(this);
  v18 = *(_QWORD *)this;
  *((float *)this + 17) = v17;
  *((float *)this + 15) = (*(float (__fastcall **)(CMotion *))(v18 + 24))(this);
  *((_DWORD *)this + 4) = 2;
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v19 = *((_DWORD *)this + 3);
    a5 = (unsigned __int8)a5;
    v27 = *((_DWORD *)this + 15);
    v28 = *((_DWORD *)this + 17);
    v26 = *((_DWORD *)this + 12);
    v23 = *((_DWORD *)this + 11);
    v24 = (wchar_t *)ScrollAxisToString(v19);
    v25 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      byte_1802E6E2F,
      v21,
      v22,
      (__int64)&v25,
      &v24,
      (__int64)&v23,
      (__int64)&v26,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&a5);
  }
}
