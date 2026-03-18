/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C01F9C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, ACCESS_MASK a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rcx
  int v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+84h] [rbp+1Ch]
  void *Handle; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0x2000;
  v13 = -1;
  v4 = 0;
  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 880LL, &v12)
    && (v10 = *(void **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 160LL)) != 0LL )
  {
    LOBYTE(v4) = ObOpenObjectByPointer(v10, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  else
  {
    UserSetLastError(5LL, v5, v6);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v4;
}
