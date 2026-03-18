/*
 * XREFs of _WOWModuleUnload @ 0x1C0228830
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C008DD2C (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0228670 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1)
{
  __int16 v1; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rsi
  __int64 v3; // r14
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v7; // rcx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v3 = 2LL;
  v4 = (__int64 *)((char *)CurrentProcessWin32Process + 344);
  do
  {
    while ( *v4 )
    {
      SmartObjStackRefBase<tagCLS>::Init(v14, 0LL);
      v5 = *v4;
      if ( HIWORD(*(_DWORD *)(*(_QWORD *)(*v4 + 8) + 64LL)) != v1 )
      {
        if ( v5 != *(_QWORD *)v14[0] )
        {
          if ( v14[0] != gSmartObjNullRef && !--*(_DWORD *)(v14[0] + 8) )
          {
            if ( *(_BYTE *)(v14[0] + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v14[0]);
          }
          if ( v5 )
          {
            v14[0] = *(_QWORD *)(v5 + 128);
            ++*(_DWORD *)(v14[0] + 8);
          }
          else
          {
            v14[0] = gSmartObjNullRef;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 6LL) & 8) != 0
          && v1 == *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 12LL)
                            + *(_QWORD *)(*(_QWORD *)v14[0] + 8LL)
                            + 94LL) )
        {
          v8 = 0;
          v9 = 868LL;
          v10 = 0LL;
          while ( !*((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v10)
               || **(_WORD **)(*v4 + 8) != *(_WORD *)(v9 + gpsi)
               || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 6LL) & 1) != 0 )
          {
            ++v8;
            ++v10;
            v9 += 2LL;
            if ( v9 >= 918 )
              goto LABEL_25;
          }
          *(_QWORD *)(*(_QWORD *)(*v4 + 8) + 32LL) = *((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v10);
LABEL_25:
          if ( v8 == 25 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 6LL) & 1) == 0 )
            *(_QWORD *)(*(_QWORD *)(*v4 + 8) + 32LL) = *(_QWORD *)(gpsi + 616LL);
        }
        goto LABEL_28;
      }
      if ( *(_DWORD *)(v5 + 72) )
      {
        SmartObjStackRefBase<tagCLS>::Init(v15, *v4);
        PseudoDestroyClassWindows(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL), v15);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v15);
        v7 = *(_QWORD **)(ThreadWin32Thread + 1464);
        if ( v7 )
          *(_QWORD *)(ThreadWin32Thread + 1464) = *v7;
        *(_WORD *)(*(_QWORD *)(*v4 + 8) + 6LL) |= 4u;
LABEL_28:
        v4 = (__int64 *)*v4;
        goto LABEL_29;
      }
      DestroyClass(CurrentProcessWin32Process, (struct _CALLPROCDATA ***)v4);
LABEL_29:
      v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v14);
      v12 = *(_QWORD **)(v11 + 1464);
      if ( v12 )
        *(_QWORD *)(v11 + 1464) = *v12;
    }
    v4 = (__int64 *)((char *)CurrentProcessWin32Process + 352);
    --v3;
  }
  while ( v3 );
  return 1LL;
}
