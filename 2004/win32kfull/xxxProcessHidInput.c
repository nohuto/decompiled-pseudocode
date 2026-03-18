/*
 * XREFs of xxxProcessHidInput @ 0x1C01D6610
 * Callers:
 *     ProcessHidRawInput @ 0x1C01D5C90 (ProcessHidRawInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D53D4 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D5448 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v1; // r15
  int v2; // r14d
  __int64 result; // rax
  unsigned int DLT; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rcx
  struct tagPROCESS_HID_REQUEST *v10; // rax
  struct tagQ *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int *v15; // rsi
  struct tagPROCESS_HID_REQUEST *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  __int16 v21; // dx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // [rsp+68h] [rbp+10h] BYREF

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
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v27);
  DLT = DLT_RAWINPUT::getDLT();
  GetDomainLockRef(DLT);
  v8 = 1LL;
  v9 = gpqForeground;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416);
    v10 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v1 + 832));
    if ( v10 )
    {
      v11 = (struct tagQ *)gpqForeground;
      v12 = *((_QWORD *)v10 + 4);
      if ( !v12
        || (v11 = *(struct tagQ **)(*(_QWORD *)(v12 + 16) + 424LL), *(char *)(*(_QWORD *)(v12 + 40) + 20LL) >= 0) )
      {
        if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
          || (v13 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 312LL), (v13 & 0x10) != 0)
          || (!(unsigned __int8)IsInputThread(v13, v6, v7)
            ? (v14 = *(_QWORD *)(gptiCurrent + 416LL) + 880LL)
            : (v14 = *((_QWORD *)a1 + 60) + 896LL),
              v8 = 1LL,
              (unsigned __int8)CheckAccess(v14, (char *)v11 + 428)) )
        {
          v8 = 1LL;
          if ( (unsigned int)PostHidInput(a1, v11, (struct tagWND *)v12, 0LL) )
          {
            v2 = 1;
            v8 = 0LL;
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
    v9 = *((unsigned int *)v16 + 5);
    if ( (v9 & 1) == 0 || (v9 & 2) != 0 && !v8 )
      goto LABEL_49;
    v6 = *((_QWORD *)v16 + 5);
    if ( v6 )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v16 + 5))(a1);
      goto LABEL_49;
    }
    v17 = *((_QWORD *)v16 + 4);
    v7 = *(_QWORD *)(v17 + 16);
    if ( *(_QWORD *)(v7 + 416) == v1 )
      goto LABEL_49;
    v9 = grpdeskRitInput;
    if ( *(_QWORD *)(v17 + 24) != grpdeskRitInput )
      goto LABEL_49;
    v18 = *(_QWORD *)(v17 + 40);
    if ( *(char *)(v18 + 20) < 0 || *(char *)(v18 + 19) < 0 )
      goto LABEL_49;
    v19 = *((_QWORD *)a1 + 59);
    v20 = *(_WORD *)(v19 + 16);
    v21 = *(_WORD *)(v19 + 18);
    if ( v20 == 12 )
    {
      v22 = v21 == 1;
      goto LABEL_32;
    }
    if ( v20 == 1 )
    {
      v22 = v21 == 9;
LABEL_32:
      if ( v22 )
        goto LABEL_47;
      goto LABEL_37;
    }
    if ( v20 >= 0xFF00u )
      goto LABEL_47;
LABEL_37:
    v23 = gpqForeground;
    if ( gpqForeground )
    {
      if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(v7 + 424) + 428LL, gpqForeground + 428LL) )
      {
        v24 = *(_QWORD *)(v17 + 16);
        if ( *(int *)(*(_QWORD *)(v24 + 416) + 12LL) >= 0 )
        {
          EtwTraceUIPIInputError(v24, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 5);
          goto LABEL_49;
        }
      }
    }
    if ( (*((_DWORD *)a1 + 46) & 0x2000) == 0
      || (v25 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 312LL), (v25 & 0x10) != 0)
      || (!(unsigned __int8)IsInputThread(v25, v23, v7)
        ? (v26 = *(_QWORD *)(gptiCurrent + 416LL) + 880LL)
        : (v26 = *((_QWORD *)a1 + 60) + 896LL),
          (unsigned __int8)CheckAccess(v26, *(_QWORD *)(*(_QWORD *)(v17 + 16) + 424LL) + 428LL)) )
    {
LABEL_47:
      result = PostHidInput(a1, *(struct tagQ **)(*(_QWORD *)(v17 + 16) + 424LL), (struct tagWND *)v17, 1uLL);
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
  if ( !v27 )
    return UserSessionSwitchLeaveCrit(v9, v6, v7);
  return result;
}
