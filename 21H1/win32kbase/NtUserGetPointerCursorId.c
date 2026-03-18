/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C0139620
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0196BD0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  ULONG64 v7; // rcx
  int PointerCursorId; // ebx
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  struct tagTHREADINFO *v11; // [rsp+60h] [rbp+18h]

  v10 = 0;
  v4 = EnterSharedCrit(0LL, 1);
  v11 = v4;
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v6, v4, a1, &v10);
    if ( PointerCursorId )
    {
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v10;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return PointerCursorId;
}
