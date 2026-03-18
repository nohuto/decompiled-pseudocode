/*
 * XREFs of _DestroyClass@8 @ 0x472A4
 * Callers:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     __UnregisterClass@12 @ 0x47C72 (__UnregisterClass@12.c)
 *     _DereferenceClass@8 @ 0x48042 (_DereferenceClass@8.c)
 *     _DestroyProcessesClasses@4 @ 0x48122 (_DestroyProcessesClasses@4.c)
 *     ?ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z @ 0xA1C78 (-ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     __WOWCleanup@8 @ 0x188D1F (__WOWCleanup@8.c)
 *     __WOWModuleUnload@4 @ 0x188E7A (__WOWModuleUnload@4.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z @ 0x47148 (-IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     ?IsClassAtomPinned@@YG_NG@Z @ 0x473FE (-IsClassAtomPinned@@YG_NG@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z @ 0x479A8 (-ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAD@Z @ 0x479F2 (-ClassFree@@YGXPAUtagDESKTOP@@PAD@Z.c)
 *     _DestroyClassSmIcon@4 @ 0x47A0C (_DestroyClassSmIcon@4.c)
 *     ?DestroyClassBrush@@YGXABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x47A58 (-DestroyClassBrush@@YGXABV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YGXPAPAU_CALLPROCDATA@@@Z @ 0xC541C (-UnlockAndFreeCPDs@@YGXPAPAU_CALLPROCDATA@@@Z.c)
 */

int __fastcall DestroyClass(int a1, _DWORD **a2)
{
  _DWORD *v2; // edi
  __int16 v4; // cx
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  int v7; // eax
  struct _CALLPROCDATA **v9; // [esp+0h] [ebp-18h]
  unsigned __int16 v10; // [esp+0h] [ebp-18h]
  struct tagDESKTOP *v11; // [esp+0h] [ebp-18h]
  char *v12; // [esp+4h] [ebp-14h]
  struct tagCLS *v13; // [esp+4h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v15[2]; // [esp+10h] [ebp-8h] BYREF

  v2 = *a2;
  *a2 = (_DWORD *)**a2;
  if ( v2 == (_DWORD *)v2[8] )
  {
    while ( v2[9] )
      DestroyClass(a1, v2 + 9);
    if ( !IsClassAtomPinned((unsigned __int16)v9) && (unsigned __int16)v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    if ( (!IsClassAtomPinned(v10) || v6 >= v5) && !IsClassAtomRegistered(a1, v6) )
      UserDeleteAtom(*(unsigned __int16 *)(v2[1] + 2));
    if ( (v2[14] & 0xFFFF0000) != 0 )
      Win32FreePool(v2[14]);
    v7 = v2[6];
    if ( v7 )
      DestroyCacheDC(0, *(_DWORD *)(v7 + 4));
    SmartObjStackRefBase<tagCLS>::Init(v2);
    DestroyClassBrush(v15);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v15);
  }
  SmartObjStackRefBase<tagCLS>::Init(v2);
  DestroyClassSmIcon(v15);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v15);
  HMAssignmentUnlock(v2 + 12);
  *(_DWORD *)(v2[1] + 36) = 0;
  HMAssignmentUnlock(v2 + 16);
  HMAssignmentUnlock(v2 + 13);
  if ( v2[7] )
    UnlockAndFreeCPDs(v9);
  v14 = v2[5];
  v2[5] = 0;
  ClassFree((struct tagDESKTOP *)v9, v12);
  ClassFree(v11, v13);
  return UnlockObjectAssignment(&v14);
}
