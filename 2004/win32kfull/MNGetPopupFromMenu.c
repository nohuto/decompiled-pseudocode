/*
 * XREFs of MNGetPopupFromMenu @ 0x1C00A287C
 * Callers:
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C005F8B4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C00A2D8C (xxxInsertMenuItem.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0237114 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024F7A4 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 */

_DWORD *__fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  __int64 *v15; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 i; // rdx
  __int64 v21; // rax
  __int64 *v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v22 = (__int64 *)gSmartObjNullRef;
  v23 = *(_QWORD *)(v5 + 1464);
  *(_QWORD *)(v5 + 1464) = &v23;
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
  {
    v15 = *(__int64 **)(*(_QWORD *)(v10 + 16) + 600LL);
    if ( v15 )
    {
      if ( (v15[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v15;
        for ( i = *v15; ; i = *(_QWORD *)(v21 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v22, i);
          if ( !*v22 )
            break;
          if ( *(_QWORD *)(*v22 + 40) == a1 )
          {
            if ( (*(_DWORD *)*v22 & 1) != 0 )
              break;
            MNAnimate(v15, 0LL);
            v11 = (_DWORD *)*v22;
            goto LABEL_6;
          }
          if ( !*(_QWORD *)(*v22 + 24) )
            break;
          v21 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*v22 + 24));
          if ( !v21 )
            break;
        }
      }
    }
  }
  v11 = 0LL;
LABEL_6:
  v12 = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v22 + 2) )
  {
    if ( *((_BYTE *)v22 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v22);
  }
  v13 = *(_QWORD **)(v12 + 1464);
  if ( v13 )
    *(_QWORD *)(v12 + 1464) = *v13;
  return v11;
}
