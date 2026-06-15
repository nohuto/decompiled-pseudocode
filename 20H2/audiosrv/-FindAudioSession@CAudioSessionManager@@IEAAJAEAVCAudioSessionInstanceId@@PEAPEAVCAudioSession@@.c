/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800CE8B4
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x1800D0510 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SS @ 0x1800CD10C (WPP_SF_SS.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800CE5CC (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800CF394 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        struct CAudioSessionInstanceId *a2,
        struct CAudioSession **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  struct CAudioSession *v7; // rdi
  char *v8; // rbx
  __int64 Node; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = (char *)this + 56;
  if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
         v8,
         a2,
         &v12,
         &v11) )
  {
    Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
             v8,
             a2,
             &v12,
             &v11);
    if ( !Node )
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
               (__int64)v8,
               (__int64)a2,
               v12,
               v11);
    v7 = *(struct CAudioSession **)(Node + 80);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
        0LL,
        *((_QWORD *)a2 + 9));
    }
    if ( v7 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *a3 = v7;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7 == 0LL ? 0x80070002 : 0;
}
