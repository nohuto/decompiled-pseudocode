/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1802312D4
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180231120 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x180231700 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C9A54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  struct HINTERACTIONCONTEXT__ *v5; // r12
  bool v6; // r13
  bool v7; // r15
  bool v8; // di
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  bool v23; // [rsp+50h] [rbp-19h]
  bool v24; // [rsp+51h] [rbp-18h]
  int v25; // [rsp+54h] [rbp-15h] BYREF
  int v26; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+5Ch] [rbp-Dh] BYREF
  unsigned int v28; // [rsp+60h] [rbp-9h] BYREF
  CInteractionContextWrapper *v29; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v30[6]; // [rsp+70h] [rbp+7h] BYREF

  v5 = a2;
  v23 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x40) != 0
     || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x40) != 0
     || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x40) != 0
     || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x40) != 0;
  v24 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x80) != 0
     || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x80) != 0
     || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x80) != 0
     || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x80) != 0;
  v6 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 3) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 3) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 3) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 3) != 0;
  v7 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0xC) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0xC) != 0;
  v8 = *(_DWORD *)a3 == 2 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 3 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 4 && (*((_BYTE *)a3 + 4) & 0x30) != 0
    || *(_DWORD *)a3 == 6 && (*((_BYTE *)a3 + 4) & 0x30) != 0;
  if ( *(_DWORD *)a3 == 3 )
  {
    if ( v6 && (*((_BYTE *)a3 + 16) & 2) != 0 )
      LOBYTE(a2) = 1;
    else
      a2 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, struct HINTERACTIONCONTEXT__ *))(*(_QWORD *)this + 56LL))(
      this,
      a2);
    if ( v7 && (*((_BYTE *)a3 + 16) & 2) != 0 )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 64LL))(this, v9);
    if ( v8 && (*((_BYTE *)a3 + 16) & 4) != 0 )
      LOBYTE(v10) = 1;
    else
      v10 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 72LL))(this, v10);
  }
  v11 = ResetInteractionContext(v5);
  if ( v11 >= 0 )
  {
    v11 = SetPropertyInteractionContext(v5, 1LL);
    if ( v11 >= 0 )
    {
      v11 = SetPropertyInteractionContext(v5, 3LL);
      if ( v11 >= 0 )
      {
        v11 = SetPropertyInteractionContext(v5, 2LL);
        if ( v11 >= 0 )
        {
          v12 = ((~*((_BYTE *)a3 + 16) & 8) << 8) | 1;
          if ( *((float *)a3 + 2) != 0.0 )
            v12 = ((~*((_BYTE *)a3 + 16) & 8) << 8) | 0x101;
          if ( *((float *)a3 + 3) != 0.0 )
            v12 |= 0x200u;
          v13 = v12 | 2;
          if ( !v6 )
            v13 = v12;
          v14 = v13 | 4;
          if ( !v7 )
            v14 = v13;
          v15 = v14 | 0x10;
          if ( !v8 )
            v15 = v14;
          v16 = v15 | 0x10000000;
          if ( *(_DWORD *)a3 != 3 )
            v16 = v15;
          v17 = v16 | 0x40000000;
          if ( (*((_BYTE *)a3 + 16) & 1) == 0 )
            v17 = v16;
          if ( *((_DWORD *)a3 + 5) == 1 )
          {
            v17 = v17 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v17 = v17 & 0x7FFFFCFF | 0x80000200;
          }
          v30[0] = 1;
          v30[1] = v17;
          v30[2] = 2;
          v30[3] = v23 ? 5 : 0;
          v30[4] = 4;
          v30[5] = v24 ? 5 : 0;
          v11 = SetInteractionConfigurationInteractionContext(v5, 3LL, v30);
          if ( (unsigned int)dword_180346EF0 > 4
            && (qword_180346F00 & 2) != 0
            && (qword_180346F08 & 2) == qword_180346F08 )
          {
            v25 = v11;
            v26 = v24 ? 5 : 0;
            v27 = v23 ? 5 : 0;
            v28 = v17;
            v29 = this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v18,
              byte_1802ED3D2,
              v19,
              v20,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25);
          }
          if ( v11 >= 0 )
          {
            v11 = RegisterOutputCallbackInteractionContext(
                    v5,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v11 >= 0 )
            {
              if ( (v21 = (_DWORD *)((char *)this + 32), !v23) && *v21 == 2 || !v24 && *v21 == 4 )
              {
                *v21 = 0;
                *((_DWORD *)this + 9) = 0;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}
