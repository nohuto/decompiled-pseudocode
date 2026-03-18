/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C0133980
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0190ED0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  ULONG64 v7; // rdx
  ULONG64 v8; // rcx
  int PointerCursorId; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct tagTHREADINFO *v14; // [rsp+60h] [rbp+18h]

  v13 = 0;
  v4 = EnterSharedCrit(0LL, 1);
  v14 = v4;
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v6, v4, a1, &v13);
    if ( PointerCursorId )
    {
      v8 = MmUserProbeAddress;
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v13;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return PointerCursorId;
}
