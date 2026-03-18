/*
 * XREFs of NtUserDrawCaption @ 0x1C01F8C30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, struct tagRECT *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+60h] [rbp-58h]
  struct tagRECT v19; // [rsp+70h] [rbp-48h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  if ( v10 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v17;
    *((_QWORD *)&v17 + 1) = v10;
    HMLockObject(v10);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (struct tagRECT *)MmUserProbeAddress;
    v19 = *a3;
    v12 = xxxDrawCaptionTemp(v10, a2, &v19, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11);
  return v12;
}
