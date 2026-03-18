/*
 * XREFs of _UnlinkWindow@8 @ 0x72E1E
 * Callers:
 *     _ImeSetTopmost@12 @ 0x1C212 (_ImeSetTopmost@12.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PAX@Z @ 0x72F28 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PA.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _DwmAsyncChildUnlink@12 @ 0x72FB6 (_DwmAsyncChildUnlink@12.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PAX@Z @ 0x73060 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PA.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PAX@Z @ 0xA3C6E (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@P.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     ?_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z @ 0x185013 (-_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z.c)
 */

int __fastcall UnlinkWindow(_DWORD *a1, int *a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int result; // eax
  int v14; // [esp-14h] [ebp-24h]
  __int64 v15; // [esp-10h] [ebp-20h]

  v4 = (int)(*(_DWORD *)(a1[5] + 144) << 27) >> 31;
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0, a1, 0, a2);
  if ( !v4 )
    goto LABEL_11;
  if ( !IsWindowDesktopComposed(a1) )
    goto LABEL_11;
  v5 = IsDesktopWindow(a1);
  if ( v5 )
    goto LABEL_11;
  v6 = a1[3];
  if ( v6 )
    v5 = *(_DWORD *)(v6 + 52);
  if ( a1 == (_DWORD *)v5 || a2 == (int *)_gTermIO[1] )
  {
LABEL_11:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    DirtyVisRgnTrackers(a1);
  }
  if ( (_DWORD *)a2[15] == a1 )
  {
    v8 = LockPointer(a2 + 15, a1[12]);
  }
  else
  {
    v10 = a1[13];
    if ( !v10 )
      goto LABEL_17;
    v8 = LockPointer(v10 + 48, a1[12]);
  }
  HMAssignmentLock(v9, HIDWORD(v8));
LABEL_17:
  v11 = a1[12];
  if ( v11 )
  {
    v15 = LockPointer(v11 + 52, a1[13]);
    HMAssignmentLock(v12, HIDWORD(v15));
    *(_DWORD *)(a1[5] + 44) = 0;
    HMAssignmentUnlock(a1 + 12);
  }
  *(_DWORD *)(a1[5] + 48) = 0;
  HMAssignmentUnlock(a1 + 13);
  *(_DWORD *)(a1[5] + 144) &= ~8u;
  result = a1[5];
  *(_DWORD *)(result + 144) &= ~0x10u;
  if ( v7 )
  {
    v14 = *a2;
    ReferenceDwmApiPort();
    return DwmAsyncChildUnlink(v14);
  }
  return result;
}
