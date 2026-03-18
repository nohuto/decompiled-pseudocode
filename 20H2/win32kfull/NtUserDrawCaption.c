/*
 * XREFs of NtUserDrawCaption @ 0x1C01F7DC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, _OWORD *a3, unsigned int a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17[2]; // [rsp+70h] [rbp-48h] BYREF

  *(_OWORD *)v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v9;
    HMLockObject(v9);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v17 = *a3;
    v10 = xxxDrawCaptionTemp(v9, a2, (struct tagRECT *)v17, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
