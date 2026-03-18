/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C0203730
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C00303A4 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C020B300 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowArrangement(__int64 a1, struct tagRECT *a2, struct tagRECT *a3, unsigned int a4)
{
  BOOL v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagRECT v21; // [rsp+28h] [rbp-50h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-40h] BYREF
  __int128 v23; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-20h]

  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v13 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      *((_QWORD *)&v23 + 1) = v9;
      HMLockObject(v9);
      if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL) || !IAMThreadAccessGranted(gptiCurrent) )
        goto LABEL_4;
      if ( *(_QWORD *)(v13 + 16) == gptiCurrent || (a4 & 0xFFFFFFF8) != 0 )
        goto LABEL_7;
      if ( (unsigned int)IsHungWindow(v13)
        || (v14 = **(unsigned __int16 **)(*(_QWORD *)(v13 + 136) + 8LL), (_WORD)v14 == *(_WORD *)(gpsi + 900LL)) )
      {
        v16 = 5023LL;
        goto LABEL_30;
      }
      if ( (a4 & 1) == 0 && !CheckCanonicalForegroundAccess(0) )
      {
LABEL_4:
        v16 = 5LL;
LABEL_30:
        UserSetLastError(v16, v14, v15);
LABEL_31:
        ThreadUnlock1(v18, v17, v19);
        goto LABEL_32;
      }
      if ( (a4 & 4) != 0 )
      {
        if ( a2 || a3 )
          goto LABEL_7;
      }
      else if ( !a2 )
      {
LABEL_7:
        v16 = 87LL;
        goto LABEL_30;
      }
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct tagRECT *)MmUserProbeAddress;
        v22 = *a2;
      }
      else
      {
        v22 = 0LL;
      }
      if ( a3 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (struct tagRECT *)MmUserProbeAddress;
        v21 = *a3;
      }
      else
      {
        v21 = 0LL;
      }
      v8 = BeginSetWindowArrangement((struct tagWND *)v13, &v22, &v21, a4);
      goto LABEL_31;
    }
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v8;
}
