/*
 * XREFs of NtUserGetPointerType @ 0x1C0134460
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0194420 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(unsigned int a1, _DWORD *a2)
{
  int v4; // ebx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  ULONG64 v9; // rcx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  struct tagTHREADINFO *v12; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v11 = 0;
  v5 = EnterSharedCrit(0LL, 1);
  v12 = v5;
  if ( !a1 )
    goto LABEL_10;
  v8 = HIWORD(a1);
  if ( HIWORD(a1) || !a2 )
    goto LABEL_10;
  if ( a1 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           gpTouchProcessor,
           (struct tagTHREADINFO *)((char *)v5 + 1080),
           a1,
           &v11,
           0LL,
           0LL) )
    {
      goto LABEL_7;
    }
LABEL_10:
    UserSetLastError(87LL, v6);
    goto LABEL_11;
  }
  v11 = 4;
LABEL_7:
  v9 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v11;
  v4 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v6, v8, v7);
  return v4;
}
