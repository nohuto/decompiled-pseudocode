/*
 * XREFs of ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800CEAF4
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800CEDC8 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::dtor$0 @ 0x1800CEEE4 (_CLockedList_CAudioSessionNotificationProcess_1_0_--AddInterface_--_1_--dtor$0.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800CEFA0 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D00F0 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     _CAudioSessionManagerNotification::Invoke_::_1_::dtor$0 @ 0x1800D0282 (_CAudioSessionManagerNotification--Invoke_--_1_--dtor$0.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D09B0 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x1800D0A91 (_CLockedList_CAudioSessionNotificationProcess_1_0_--RemoveInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(
        CAudioSessionNotificationProcess *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
