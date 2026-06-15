/*
 * XREFs of sub_180092A63 @ 0x180092A63
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002CB20 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800CEB7C (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?GetValueAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@PEAU__POSITION@@@Z @ 0x1800D0004 (-GetValueAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800D089C (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

void __fastcall sub_180092A63(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        _QWORD *a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int64 a26,
        unsigned int a27,
        char a28,
        __int64 a29)
{
  __int64 v29; // r14
  unsigned int v30; // r15d
  __int64 StartPosition; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r12
  __int64 v34; // r8

  v29 = a26;
  v30 = a27;
  while ( 1 )
  {
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v29 + 56);
    a29 = StartPosition;
    if ( !StartPosition )
      break;
    v33 = *(_QWORD **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetValueAt(
                        v32,
                        StartPosition);
    a11 = v33;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      v29 + 56,
      a29);
    LOBYTE(v34) = a28;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v33[2] + 32LL))(v33 + 2, v30, v34);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*v33 + 232LL))(v33, v29);
    (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v33 + 232LL))(v33, g_PolicyEventsHandler);
    ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&a13, &a11);
  }
  JUMPOUT(0x18002CA88LL);
}
