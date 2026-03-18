/*
 * XREFs of NtUserGetPointerType @ 0x1C013A100
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2)
{
  int v4; // ebx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  struct tagTHREADINFO *v10; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v9 = 0;
  v5 = EnterSharedCrit(0LL, 1);
  v10 = v5;
  if ( !a1 || HIWORD(a1) || !a2 )
    goto LABEL_10;
  if ( a1 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           gpTouchProcessor,
           (struct tagTHREADINFO *)((char *)v5 + 1072),
           a1,
           &v9,
           0LL,
           0LL) )
    {
      goto LABEL_7;
    }
LABEL_10:
    UserSetLastError(87LL, v6);
    goto LABEL_11;
  }
  v9 = 4;
LABEL_7:
  v7 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v9;
  v4 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
