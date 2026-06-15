/*
 * XREFs of ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140018000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsLeftFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  __int64 v6; // rcx
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+34h] [rbp-64h]
  int v15; // [rsp+38h] [rbp-60h]
  float v16; // [rsp+3Ch] [rbp-5Ch]
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF
  int v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+5Ch] [rbp-3Ch]
  int v20; // [rsp+60h] [rbp-38h]
  float v21; // [rsp+64h] [rbp-34h]

  v6 = *((_QWORD *)this + 1);
  if ( !v6 )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v6 + 48LL))(
         v6,
         v17,
         a3,
         a4);
  if ( v8 < 0
    || (v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD *))a2->lpVtbl->GetUncompressedAudioFormat)(
               a2,
               v12),
        v8 < 0) )
  {
LABEL_19:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_322a074b0bd933fdfde6fb1895abf2b7_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsLeftFormatSupported", 0xC9u, v8);
    return (unsigned int)v8;
  }
  v9 = v12[0] - v17[0];
  if ( v12[0] == v17[0] )
    v9 = v12[1] - v17[1];
  if ( !v9 && v13 == v18 && v14 == v19 && v15 == v20 && v16 == v21 )
    return (unsigned int)v8;
  if ( !a3 )
  {
    v8 = -2147467261;
    goto LABEL_19;
  }
  *a3 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  v10 = *((_QWORD *)this + 1);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return 1LL;
}
