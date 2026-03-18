/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C00A050C
 * Callers:
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C005C610 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1C00A00C0 (xxxMNCanClose.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxGetSysMenuOffset @ 0x1C02403E0 (xxxGetSysMenuOffset.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011EF04 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct _KTHREAD *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  _QWORD *v18; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h] BYREF
  __int64 v30; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v28 = (__int64 *)gSmartObjNullRef;
  v29 = *(_QWORD *)(v3 + 1464);
  *(_QWORD *)(v3 + 1464) = &v29;
  v9 = a1[5];
  v30 = 0LL;
  if ( (*(_BYTE *)(v9 + 30) & 8) == 0 )
    goto LABEL_25;
  v10 = a1[20];
  if ( v10 == *v28 )
    goto LABEL_38;
  if ( v28 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v28 + 2) )
  {
    if ( *((_BYTE *)v28 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28);
  }
  if ( v10 )
  {
    v28 = *(__int64 **)(v10 + 152);
    ++*((_DWORD *)v28 + 2);
  }
  else
  {
    v28 = (__int64 *)gSmartObjNullRef;
  }
  if ( !v30 )
  {
LABEL_38:
    if ( *v28 )
    {
LABEL_11:
      v11 = *v28;
      goto LABEL_12;
    }
    v30 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v28);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v28) )
    {
      v8 = gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
      {
        xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v30 = 0LL;
LABEL_25:
        SmartObjStackRefBase<tagMENU>::operator=(&v28);
      }
    }
  }
  v11 = v30;
  if ( !v30 )
    goto LABEL_11;
LABEL_12:
  v12 = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (v24 = PsGetCurrentProcess(v15, v14, v16),
        v25 = PsGetProcessSessionIdEx(v24),
        v27 = PsGetCurrentThreadProcess(v26),
        v25 == (unsigned int)PsGetProcessSessionIdEx(v27)) )
  {
    v17 = (__int64 *)PsGetThreadWin32Thread(v12);
    if ( v17 )
      v13 = *v17;
  }
  if ( v28 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v28 + 2) )
  {
    if ( *((_BYTE *)v28 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28);
  }
  v18 = *(_QWORD **)(v13 + 1464);
  if ( v18 )
    *(_QWORD *)(v13 + 1464) = *v18;
  return v11;
}
