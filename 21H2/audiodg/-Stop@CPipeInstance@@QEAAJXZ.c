/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x140003130
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140002D74 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140002E30 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  int v1; // edi
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  v7 = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    do
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
               **(_QWORD **)(v4 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7), v6 < 0) )
          v1 = v6;
        v2 = v7;
        if ( v7 )
        {
          v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
          v2 = v7;
        }
      }
    }
    while ( v3 );
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          54LL,
          &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
          (unsigned int)v1);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0x101Fu, v1);
      v2 = v7;
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v1;
}
