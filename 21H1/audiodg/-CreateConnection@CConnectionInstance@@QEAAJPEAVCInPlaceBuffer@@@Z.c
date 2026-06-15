/*
 * XREFs of ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x140007908
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140007540 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CConnectionInstance::CreateConnection(CConnectionInstance *this, struct CInPlaceBuffer *a2)
{
  int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  if ( !*(_DWORD *)this )
    return 0;
  v12 = 0LL;
  v11 = *((_DWORD *)this + 10);
  v13 = 1094927443;
  if ( a2 )
    v10 = *(_QWORD *)a2;
  else
    v10 = 0LL;
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v12);
  }
  else
  {
    v7 = *((_QWORD *)this + 4);
    if ( !v7 )
    {
LABEL_10:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, char *))(**((_QWORD **)this + 6) + 56LL))(
             *((_QWORD *)this + 6),
             v9,
             (char *)this + 8);
      if ( v4 >= 0 && a2 )
      {
        *((_QWORD *)this + 7) = a2;
        ++*((_DWORD *)a2 + 4);
      }
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8LL))(v7, &v12);
  }
  v4 = v8;
  if ( v8 >= 0 )
    goto LABEL_10;
LABEL_13:
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = 0LL;
  }
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_88dce1fc6c0c3cb9db34f37f49324232_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v4);
  }
  return (unsigned int)v4;
}
