/*
 * XREFs of DestroyClass @ 0x1C00D30CC
 * Callers:
 *     FinalUserInit @ 0x1C00230A4 (FinalUserInit.c)
 *     DereferenceClass @ 0x1C00D2C70 (DereferenceClass.c)
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     _UnregisterClass @ 0x1C00D5C6C (_UnregisterClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106D80 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C010D260 (DestroyProcessesClasses.c)
 *     _WOWCleanup @ 0x1C0227870 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C02279A0 (_WOWModuleUnload.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00D2DF0 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C00D35CC (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00D40A8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C00D4128 (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00D4198 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0128354 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  __int16 v4; // cx
  __int16 v5; // cx
  struct _CALLPROCDATA *v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  struct tagDESKTOP *v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) && (unsigned __int16)v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || (unsigned __int16)v5 >= 0xC000u)
      && !IsClassAtomRegistered(a1, v5) )
    {
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    }
    v6 = v2[12];
    if ( ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v6);
    v7 = v2[5];
    if ( v7 )
      DestroyCacheDC(0LL, *((_QWORD *)v7 + 1));
    SmartObjStackRefBase<tagCLS>::Init(v13, v2);
    DestroyClassBrush(v13);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v13);
    v9 = *(_QWORD **)(ThreadWin32Thread + 1472);
    if ( v9 )
      *(_QWORD *)(ThreadWin32Thread + 1472) = *v9;
  }
  SmartObjStackRefBase<tagCLS>::Init(v14, v2);
  DestroyClassSmIcon(v14);
  v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v14);
  v11 = *(_QWORD **)(v10 + 1472);
  if ( v11 )
    *(_QWORD *)(v10 + 1472) = *v11;
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v15 = v2[4];
  v2[4] = 0LL;
  if ( v15 )
    RtlFreeHeap(*((PVOID *)v15 + 16), 0, v2[13]);
  else
    Win32FreePool(v2[13]);
  ClassFree(v15, (struct tagCLS *)v2);
  return UnlockObjectAssignment(&v15);
}
