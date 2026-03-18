/*
 * XREFs of xxxProcessHidInput @ 0x1C01D5950
 * Callers:
 *     ProcessHidRawInput @ 0x1C01D4FD0 (ProcessHidRawInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003E8B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D4714 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D4788 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v1; // r15
  int v2; // r14d
  __int64 result; // rax
  unsigned int DLT; // eax
  __int64 v6; // rbp
  __int64 v7; // rcx
  struct tagPROCESS_HID_REQUEST *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagQ *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int *v15; // rsi
  struct tagPROCESS_HID_REQUEST *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  __int16 v22; // dx
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0;
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) != 0 )
    return result;
  if ( (result & 0x4000) != 0 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x80u) == 0LL )
      return result;
    result = *((_QWORD *)a1 + 58);
    if ( *(_DWORD *)(result + 40) != 851973 )
      return result;
  }
  if ( *((int *)a1 + 64) < 0 )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v28);
  DLT = DLT_RAWINPUT::getDLT();
  GetDomainLockRef(DLT);
  v6 = 1LL;
  v7 = gpqForeground;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
    v8 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v1 + 832));
    if ( v8 )
    {
      v11 = (struct tagQ *)gpqForeground;
      v12 = *((_QWORD *)v8 + 4);
      if ( !v12
        || (v11 = *(struct tagQ **)(*(_QWORD *)(v12 + 16) + 432LL), *(char *)(*(_QWORD *)(v12 + 40) + 20LL) >= 0) )
      {
        if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
          || (v13 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 312LL), (v13 & 0x10) != 0)
          || (!(unsigned __int8)IsInputThread(v13, v9, v10)
            ? (v14 = *(_QWORD *)(gptiCurrent + 424LL) + 880LL)
            : (v14 = *((_QWORD *)a1 + 60) + 896LL),
              v6 = 1LL,
              (unsigned __int8)CheckAccess(v14, (char *)v11 + 428)) )
        {
          v6 = 1LL;
          if ( (unsigned int)PostHidInput(a1, v11, (struct tagWND *)v12, 0LL) )
          {
            v2 = 1;
            v6 = 0LL;
          }
        }
      }
    }
  }
  result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  v15 = (int *)RawInputManagerObject::gHidRequestTable[4];
  while ( v15 != (int *)result )
  {
    if ( v15[20] <= 0 )
      goto LABEL_49;
    v16 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v15);
    if ( !v16 )
      goto LABEL_49;
    v7 = *((unsigned int *)v16 + 5);
    if ( (v7 & 1) == 0 || (v7 & 2) != 0 && !v6 )
      goto LABEL_49;
    if ( *((_QWORD *)v16 + 5) )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v16 + 5))(a1);
      goto LABEL_49;
    }
    v17 = *((_QWORD *)v16 + 4);
    v18 = *(_QWORD *)(v17 + 16);
    if ( *(_QWORD *)(v18 + 424) == v1 )
      goto LABEL_49;
    v7 = grpdeskRitInput;
    if ( *(_QWORD *)(v17 + 24) != grpdeskRitInput )
      goto LABEL_49;
    v19 = *(_QWORD *)(v17 + 40);
    if ( *(char *)(v19 + 20) < 0 || *(char *)(v19 + 19) < 0 )
      goto LABEL_49;
    v20 = *((_QWORD *)a1 + 59);
    v21 = *(_WORD *)(v20 + 16);
    v22 = *(_WORD *)(v20 + 18);
    if ( v21 == 12 )
    {
      v23 = v22 == 1;
      goto LABEL_32;
    }
    if ( v21 == 1 )
    {
      v23 = v22 == 9;
LABEL_32:
      if ( v23 )
        goto LABEL_47;
      goto LABEL_37;
    }
    if ( v21 >= 0xFF00u )
      goto LABEL_47;
LABEL_37:
    v24 = gpqForeground;
    if ( gpqForeground )
    {
      if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(v18 + 432) + 428LL, gpqForeground + 428LL) )
      {
        v25 = *(_QWORD *)(v17 + 16);
        if ( *(int *)(*(_QWORD *)(v25 + 424) + 12LL) >= 0 )
        {
          EtwTraceUIPIInputError(v25, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 5);
          goto LABEL_49;
        }
      }
    }
    if ( (*((_DWORD *)a1 + 46) & 0x2000) == 0
      || (v26 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 312LL), (v26 & 0x10) != 0)
      || (!(unsigned __int8)IsInputThread(v26, v24, v18)
        ? (v27 = *(_QWORD *)(gptiCurrent + 424LL) + 880LL)
        : (v27 = *((_QWORD *)a1 + 60) + 896LL),
          (unsigned __int8)CheckAccess(v27, *(_QWORD *)(*(_QWORD *)(v17 + 16) + 432LL) + 428LL)) )
    {
LABEL_47:
      result = PostHidInput(a1, *(struct tagQ **)(*(_QWORD *)(v17 + 16) + 432LL), (struct tagWND *)v17, 1uLL);
      if ( !(_DWORD)result )
        break;
      v2 = 1;
    }
LABEL_49:
    v15 = *(int **)v15;
    result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  }
  if ( v2 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x40) == 0 )
      result = CInputGlobals::UpdateInputGlobals(
                 gpInputGlobals,
                 (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                 4LL);
  }
  if ( !v28 )
    return UserSessionSwitchLeaveCrit(v7);
  return result;
}
