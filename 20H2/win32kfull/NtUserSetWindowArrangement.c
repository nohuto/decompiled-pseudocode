/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C02028C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C002D0F0 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     IsHungWindow @ 0x1C00CAEE0 (IsHungWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C020A480 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowArrangement(__int64 a1, struct tagRECT *a2, struct tagRECT *a3, unsigned int a4)
{
  BOOL v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagRECT v19; // [rsp+28h] [rbp-50h] BYREF
  struct tagRECT v20; // [rsp+38h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h]

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v11 = v9;
  if ( v9 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v21;
      *((_QWORD *)&v21 + 1) = v9;
      HMLockObject(v9);
      if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL) || !IAMThreadAccessGranted(gptiCurrent) )
        goto LABEL_4;
      if ( *(_QWORD *)(v11 + 16) == gptiCurrent || (a4 & 0xFFFFFFF8) != 0 )
        goto LABEL_7;
      if ( (unsigned int)IsHungWindow(v11)
        || (v12 = **(unsigned __int16 **)(*(_QWORD *)(v11 + 136) + 8LL), (_WORD)v12 == *(_WORD *)(gpsi + 900LL)) )
      {
        v14 = 5023LL;
        goto LABEL_30;
      }
      if ( (a4 & 1) == 0 && !CheckCanonicalForegroundAccess(0) )
      {
LABEL_4:
        v14 = 5LL;
LABEL_30:
        UserSetLastError(v14, v12, v13);
LABEL_31:
        ThreadUnlock1(v16, v15, v17);
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
        v14 = 87LL;
        goto LABEL_30;
      }
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct tagRECT *)MmUserProbeAddress;
        v20 = *a2;
      }
      else
      {
        v20 = 0LL;
      }
      if ( a3 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (struct tagRECT *)MmUserProbeAddress;
        v19 = *a3;
      }
      else
      {
        v19 = 0LL;
      }
      v8 = BeginSetWindowArrangement((struct tagWND *)v11, &v20, &v19, a4);
      goto LABEL_31;
    }
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
