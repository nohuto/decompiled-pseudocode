/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01F8DA0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        unsigned __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  unsigned int *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned int v15; // edi
  struct tagCURSOR *v16; // rdi
  __int64 v17; // rcx
  void *v18; // r14
  ULONG64 v19; // rdx
  _BYTE **v20; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v29[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+54h] [rbp-B4h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h]
  struct tagRECT v39; // [rsp+B0h] [rbp-58h] BYREF

  v32 = a4;
  v10 = (unsigned int *)a6;
  v35 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  *(_OWORD *)v29 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v30 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
LABEL_3:
      v15 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( a5 )
  {
    v16 = (struct tagCURSOR *)HMValidateHandle(a5, 3u);
    if ( !v16 )
      goto LABEL_3;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v39 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v10 = (unsigned int *)MmUserProbeAddress;
  v17 = *v10;
  v31 = v17;
  LODWORD(v29[0]) = v17;
  v18 = (void *)*((_QWORD *)v10 + 1);
  v29[1] = v18;
  if ( v18 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    v20 = (_BYTE **)MmUserProbeAddress;
    if ( v19 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v31) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_21;
      if ( v19 > (unsigned __int64)v18 )
      {
LABEL_23:
        v21 = (void *)Win32AllocPoolWithQuota(LOWORD(v29[0]) + 2LL, 2020897621LL);
        v29[1] = v21;
        if ( !v21 )
          ExRaiseStatus(-1073741801);
        v30 = 1;
        PushW32ThreadLock((__int64)v21, &v37, (__int64)Win32FreePool);
        memmove(v29[1], v18, LOWORD(v29[0]));
        *((_WORD *)v29[1] + ((unsigned __int64)LOWORD(v29[0]) >> 1)) = 0;
        WORD1(v29[0]) = LOWORD(v29[0]) + 2;
        goto LABEL_25;
      }
    }
    if ( (v17 & 1) == 0 )
    {
LABEL_22:
      **v20 = 0;
      goto LABEL_23;
    }
LABEL_21:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v19);
    v20 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_22;
  }
LABEL_25:
  *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v33;
  *((_QWORD *)&v33 + 1) = v13;
  if ( v13 )
    HMLockObject(v13);
  *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v35;
  *((_QWORD *)&v35 + 1) = v16;
  if ( v16 )
    HMLockObject(v16);
  v15 = xxxDrawCaptionTemp(
          v13,
          a2,
          &v39,
          v32,
          v16,
          (unsigned __int16 **)((unsigned __int64)v29 & -(__int64)(v29[1] != 0LL)),
          a7);
  ThreadUnlock1(v23, v22, v24);
  ThreadUnlock1(v26, v25, v27);
  if ( v30 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
LABEL_33:
  UserSessionSwitchLeaveCrit(v12, v11, v14);
  return v15;
}
