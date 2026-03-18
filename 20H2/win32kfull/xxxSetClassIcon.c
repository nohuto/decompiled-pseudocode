/*
 * XREFs of xxxSetClassIcon @ 0x1C023D898
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E85CC (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     DestroyClassSmIcon @ 0x1C00D4128 (DestroyClassSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C010449C (xxxCreateClassSmIcon.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C010458C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     xxxInternalEnumWindow @ 0x1C01D1CD4 (xxxInternalEnumWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D830 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, __int64 *a3, int a4)
{
  __int64 *v7; // rax
  __int64 *result; // rax
  BOOL v9; // esi
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int128 *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]

  v22 = 0LL;
  v23 = 0LL;
  v7 = *a2;
  if ( a4 == -14 )
    result = *(__int64 **)(*v7 + 80);
  else
    result = *(__int64 **)(*v7 + 112);
  if ( result != a3 )
  {
    v9 = 1;
    v10 = 0LL;
    if ( result )
      v10 = *result;
    if ( a4 == -14 )
    {
      if ( *(_QWORD *)(**a2 + 112) )
        v9 = DestroyClassSmIcon(a2) != 0;
      v11 = *a2;
      v19[1] = a3;
      v19[0] = *v11 + 80;
      v12 = (__int128 *)v19;
    }
    else
    {
      if ( (unsigned int)DestroyClassSmIcon(a2) )
        v10 = 0LL;
      v13 = LockPointer(&v21, **a2 + 112, a3);
      v12 = &v20;
      v20 = *(_OWORD *)v13;
    }
    HMAssignmentLock(v12);
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon(a2);
    if ( v9 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2);
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v22 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v22;
        *((_QWORD *)&v22 + 1) = v14;
        if ( v14 )
          HMLockObject(v14);
        xxxInternalEnumWindow(
          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          **a2,
          2);
        ThreadUnlock1(v17, v16, v18);
      }
    }
    if ( v10 )
      return (__int64 *)HMValidateHandleNoRip(v10, 3);
    else
      return 0LL;
  }
  return result;
}
