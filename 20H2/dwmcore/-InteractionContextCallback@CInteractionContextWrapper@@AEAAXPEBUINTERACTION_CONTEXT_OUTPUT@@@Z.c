/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18022DF6C
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18022EF60 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x18022857C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18022CC20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18022D1C4 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x18022EB78 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  bool v2; // zf
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+80h] [rbp-80h] BYREF
  int v14; // [rsp+84h] [rbp-7Ch] BYREF
  int v15; // [rsp+88h] [rbp-78h] BYREF
  int v16; // [rsp+8Ch] [rbp-74h] BYREF
  int v17; // [rsp+90h] [rbp-70h] BYREF
  int v18; // [rsp+94h] [rbp-6Ch] BYREF
  int v19; // [rsp+98h] [rbp-68h] BYREF
  int v20; // [rsp+9Ch] [rbp-64h] BYREF
  int v21; // [rsp+A0h] [rbp-60h] BYREF
  int v22; // [rsp+A4h] [rbp-5Ch] BYREF
  CInteractionContextWrapper *v23; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int128 v28; // [rsp+F0h] [rbp-10h]

  *((_BYTE *)this + 88) |= 1u;
  v2 = *((_DWORD *)this + 56) == 5;
  v4 = *((_OWORD *)a2 + 1);
  v24 = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v25 = v4;
  v6 = *((_OWORD *)a2 + 3);
  v26 = v5;
  v7 = *((_OWORD *)a2 + 4);
  v27 = v6;
  v28 = v7;
  if ( v2 && (_DWORD)v24 == 1 )
  {
    if ( !*((_BYTE *)this + 329) )
    {
      DWORD1(v25) = 0;
      DWORD2(v26) = 0;
      HIDWORD(v27) = 0;
    }
    if ( !*((_BYTE *)this + 330) )
    {
      DWORD2(v25) = 0;
      HIDWORD(v26) = 0;
      LODWORD(v28) = 0;
    }
    if ( !*((_BYTE *)this + 331) )
    {
      HIDWORD(v25) = 0;
      LODWORD(v26) = 0;
      *(_QWORD *)&v27 = 0LL;
      DWORD1(v28) = 0;
    }
  }
  CInteractionContextWrapper::_UpdateInteractionOutput(
    this,
    (const struct INTERACTION_CONTEXT_OUTPUT *)&v24,
    (CInteractionContextWrapper *)((char *)this + 32));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 112LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      (char **)this,
      *((_DWORD *)this + 55),
      *((_DWORD *)this + 57),
      *((_QWORD *)this + 29),
      (const struct INTERACTION_CONTEXT_OUTPUT *)&v24);
  v10 = v24;
  if ( (_DWORD)v24 != 1 )
    goto LABEL_16;
  *((_BYTE *)this + 92) = 1;
  *((_BYTE *)this + 156) = 1;
  if ( (unsigned int)dword_180341E80 <= 4 )
    return;
  v11 = qword_180341E98;
  if ( (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v16 = *((_DWORD *)this + 13);
    v17 = HIDWORD(v28);
    v18 = v27;
    v19 = HIDWORD(v26);
    v20 = DWORD2(v26);
    v21 = v28;
    v22 = HIDWORD(v27);
    v13 = HIDWORD(v25);
    v14 = DWORD2(v25);
    v15 = DWORD1(v25);
    v23 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      qword_180341E98,
      byte_1802E93F6,
      v8,
      v9,
      (__int64)&v23,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
LABEL_16:
    v11 = qword_180341E98;
  }
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (v11 & 2) == v11 )
  {
    v12 = *((_BYTE *)this + 88) & 1;
    v13 = v10;
    v15 = v12;
    v14 = DWORD1(v24);
    v23 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1802E9250,
      v8,
      v9,
      (__int64)&v23,
      (__int64)&v13,
      (__int64)&v14,
      (__int64)&v15);
  }
}
