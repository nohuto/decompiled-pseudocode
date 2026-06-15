/*
 * XREFs of ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800CAB80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800BE2B0 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x62u,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      this,
      0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 61)
                                                                                                  + 40LL))(
         *((_QWORD *)this + 61),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::PropertyStoreGetValue", 5179, v6);
  return v7;
}
