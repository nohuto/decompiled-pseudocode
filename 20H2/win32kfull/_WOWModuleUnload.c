/*
 * XREFs of _WOWModuleUnload @ 0x1C02279A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C02277E0 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rsi
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v9; // rcx
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  __int64 v16[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17[2]; // [rsp+30h] [rbp-10h] BYREF

  v3 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2, a3);
  v5 = 2LL;
  v6 = (__int64 *)((char *)CurrentProcessWin32Process + 344);
  do
  {
    while ( *v6 )
    {
      SmartObjStackRefBase<tagCLS>::Init(v16, 0LL);
      v7 = *v6;
      if ( HIWORD(*(_DWORD *)(*(_QWORD *)(*v6 + 8) + 64LL)) != v3 )
      {
        if ( v7 != *(_QWORD *)v16[0] )
        {
          if ( v16[0] != gSmartObjNullRef && !--*(_DWORD *)(v16[0] + 8) )
          {
            if ( *(_BYTE *)(v16[0] + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v16[0]);
          }
          if ( v7 )
          {
            v16[0] = *(_QWORD *)(v7 + 128);
            ++*(_DWORD *)(v16[0] + 8);
          }
          else
          {
            v16[0] = gSmartObjNullRef;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) + 6LL) & 8) != 0
          && v3 == *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) + 12LL)
                            + *(_QWORD *)(*(_QWORD *)v16[0] + 8LL)
                            + 94LL) )
        {
          v10 = 0;
          v11 = 868LL;
          v12 = 0LL;
          while ( !*((_QWORD *)&WPP_MAIN_CB.SectorSize + v12)
               || **(_WORD **)(*v6 + 8) != *(_WORD *)(v11 + gpsi)
               || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) + 6LL) & 1) != 0 )
          {
            ++v10;
            ++v12;
            v11 += 2LL;
            if ( v11 >= 918 )
              goto LABEL_25;
          }
          *(_QWORD *)(*(_QWORD *)(*v6 + 8) + 32LL) = *((_QWORD *)&WPP_MAIN_CB.SectorSize + v12);
LABEL_25:
          if ( v10 == 25 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) + 6LL) & 1) == 0 )
            *(_QWORD *)(*(_QWORD *)(*v6 + 8) + 32LL) = *(_QWORD *)(gpsi + 616LL);
        }
        goto LABEL_28;
      }
      if ( *(_DWORD *)(v7 + 72) )
      {
        SmartObjStackRefBase<tagCLS>::Init(v17, *v6);
        PseudoDestroyClassWindows(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL), v17);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v17);
        v9 = *(_QWORD **)(ThreadWin32Thread + 1472);
        if ( v9 )
          *(_QWORD *)(ThreadWin32Thread + 1472) = *v9;
        *(_WORD *)(*(_QWORD *)(*v6 + 8) + 6LL) |= 4u;
LABEL_28:
        v6 = (__int64 *)*v6;
        goto LABEL_29;
      }
      DestroyClass(CurrentProcessWin32Process, (struct _CALLPROCDATA ***)v6);
LABEL_29:
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v16);
      v14 = *(_QWORD **)(v13 + 1472);
      if ( v14 )
        *(_QWORD *)(v13 + 1472) = *v14;
    }
    v6 = (__int64 *)((char *)CurrentProcessWin32Process + 352);
    --v5;
  }
  while ( v5 );
  return 1LL;
}
