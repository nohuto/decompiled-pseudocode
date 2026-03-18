/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C0203EF0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00943E4 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C0114254 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     UpdateSizeTrackingInfo @ 0x1C0210CC8 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  INT v21[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h]
  unsigned __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v7;
    HMLockObject(v7);
    if ( IsShellParticipatesInSizing(v9, v10, v11) )
    {
      if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 424LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v18 = *a2;
        *(_QWORD *)v21 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v19 = *a3;
        v24 = *a3;
        if ( (int)v18 > 0 )
        {
          v12 = HIDWORD(v18);
          if ( SHIDWORD(v18) > 0 && (int)v19 > 0 )
          {
            v12 = HIDWORD(v19);
            if ( SHIDWORD(v19) > 0 && (int)v18 >= (int)v19 && v21[1] >= SHIDWORD(v24) )
            {
              ShellWindowManagement::TransformWindowTrackInfo((__int64)v9, v21, (INT *)&v24, 1);
              updated = UpdateSizeTrackingInfo(v9);
              goto LABEL_21;
            }
          }
        }
        v14 = 87LL;
      }
      else
      {
        v14 = 5LL;
      }
    }
    else
    {
      v14 = 5023LL;
    }
    UserSetLastError(v14, v12, v13);
LABEL_21:
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v8);
  return updated;
}
