/*
 * XREFs of _xxxSetClassIcon@16 @ 0x19C737
 * Callers:
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 * Callees:
 *     _xxxCreateClassSmIcon@4 @ 0x137DE (_xxxCreateClassSmIcon@4.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PAX@Z @ 0x474F0 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCL.c)
 *     _DestroyClassSmIcon@4 @ 0x47A0C (_DestroyClassSmIcon@4.c)
 *     _xxxInternalEnumWindow@16 @ 0x141598 (_xxxInternalEnumWindow@16.c)
 *     ?xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z @ 0x19C6E6 (-xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z.c)
 */

int *__fastcall xxxSetClassIcon(struct tagWND *a1, int **a2, int *a3, int a4)
{
  int v5; // eax
  int *result; // eax
  BOOL v7; // ebx
  int v8; // edi
  int v9; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  struct tagWND *v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v16 = _gptiCurrent;
  v15 = a1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v5 = **a2;
  if ( a4 == -14 )
    result = *(int **)(v5 + 48);
  else
    result = *(int **)(v5 + 64);
  if ( result != a3 )
  {
    v7 = 1;
    if ( result )
      v8 = *result;
    else
      v8 = 0;
    if ( a4 == -14 )
    {
      if ( *(_DWORD *)(**a2 + 64) )
        v7 = DestroyClassSmIcon(a2) != 0;
    }
    else
    {
      v8 = DestroyClassSmIcon(a2) == 0 ? v8 : 0;
      LockPointer(**a2 + 64, a3);
    }
    HMAssignmentLock(a1, a2);
    if ( *(_DWORD *)(**a2 + 48) && !*(_DWORD *)(**a2 + 64) )
      xxxCreateClassSmIcon(a2);
    if ( v7 )
    {
      if ( *(int *)(**a2 + 40) <= 1 )
      {
        xxxSetClassIconEnum(v15, **a2);
      }
      else
      {
        v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 248) + 4) + 12) + 60);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v12 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v12;
        v13 = v9;
        if ( v9 )
          HMLockObject(v9);
        xxxInternalEnumWindow(
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 248) + 4) + 12) + 60),
          (int (__stdcall *)(int, int))xxxSetClassIconEnum,
          **a2,
          2);
        ThreadUnlock1();
      }
    }
    if ( v8 )
      return (int *)HMValidateHandleNoRip(v8, 3);
    else
      return 0;
  }
  return result;
}
