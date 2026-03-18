/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C0121920
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(unsigned __int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 j; // rbx
  char v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
  {
    for ( j = *(_QWORD *)(i + 320); j; j = *(_QWORD *)(j + 656) )
    {
      if ( *(_DWORD *)(j + 888) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(struct tagQ **)(j + 424), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}
