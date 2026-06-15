/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800CFC0C
 * Callers:
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800CD910 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800CDA98 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800CE138 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800CFD20 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800CE310 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 */

void __fastcall ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  const void *v7; // rdx
  void *v8; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors(
    (CAudioSessionNotificationProcess *)(*a1 + 8 * a2),
    1LL);
  v6 = v5 - v2;
  if ( v6 )
  {
    v7 = (const void *)(*a1 + 8 * v2);
    v8 = (void *)(*a1 + 8 * a2);
    if ( 8 * v6 )
    {
      if ( !v8 || !v7 )
      {
        *(_DWORD *)_o__errno(v8) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v8, v7, 8 * v6);
    }
  }
  --a1[1];
}
