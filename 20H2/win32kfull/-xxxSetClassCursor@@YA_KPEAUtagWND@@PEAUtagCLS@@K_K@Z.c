/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E85CC
 * Callers:
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00F7870 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106D80 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C023D898 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, unsigned __int64 a4)
{
  _QWORD *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _CALLPROCDATA **v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _CALLPROCDATA **v28; // rax
  struct _CALLPROCDATA **v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _CALLPROCDATA **v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _CALLPROCDATA **v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rbx
  _QWORD *v42; // rcx
  __int64 v43; // rbx
  _QWORD *v44; // rcx
  __int64 v46[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v47[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v48; // [rsp+48h] [rbp-29h] BYREF
  __int64 v49; // [rsp+58h] [rbp-19h]
  __int128 v50; // [rsp+60h] [rbp-11h] BYREF
  __int64 v51; // [rsp+70h] [rbp-1h]
  _QWORD v52[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v53[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v54; // [rsp+98h] [rbp+27h] BYREF
  __int64 v55; // [rsp+A8h] [rbp+37h]

  v8 = 0LL;
  v9 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v47, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v46, 0LL);
  v51 = 0LL;
  v55 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v54 = 0LL;
  v48 = 0LL;
  if ( a4 )
  {
    v9 = HMValidateHandle(a4, 3u);
    if ( !v9 )
    {
      if ( a3 == -14 || (v12 = 1402LL, a3 == -34) )
        v12 = 1414LL;
      UserSetLastError(v12, v10, v11);
    }
  }
  v13 = *((_QWORD *)a2 + 7);
  if ( v13 != *(_QWORD *)v47[0] )
  {
    if ( v47[0] != gSmartObjNullRef && !--*(_DWORD *)(v47[0] + 8) )
    {
      if ( *(_BYTE *)(v47[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v47[0]);
    }
    if ( v13 )
    {
      v47[0] = *(_QWORD *)(v13 + 128);
      ++*(_DWORD *)(v47[0] + 8);
    }
    else
    {
      v47[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v47[0], &v50) )
  {
    UserSetLastError(5LL, v14, v15);
LABEL_52:
    v8 = 0LL;
    goto LABEL_54;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v48 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v48;
  *((_QWORD *)&v48 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  if ( a3 == -34 || a3 == -14 )
  {
    v19 = (_QWORD *)xxxSetClassIcon(a1);
LABEL_24:
    v8 = v19;
    if ( v19 )
      v8 = (_QWORD *)*v19;
    goto LABEL_26;
  }
  if ( a3 == -12 )
  {
    v52[1] = v9;
    v52[0] = *(_QWORD *)v47[0] + 88LL;
    v19 = (_QWORD *)HMAssignmentLock(v52);
    goto LABEL_24;
  }
LABEL_26:
  v20 = *(_QWORD *)v47[0];
  v21 = *(_QWORD *)(*(_QWORD *)v47[0] + 64LL);
LABEL_44:
  if ( v21 != *(_QWORD *)v46[0] )
  {
    if ( v46[0] != gSmartObjNullRef && !--*(_DWORD *)(v46[0] + 8) )
    {
      if ( *(_BYTE *)(v46[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v46[0]);
    }
    if ( v21 )
    {
      v46[0] = *(_QWORD *)(v21 + 128);
      ++*(_DWORD *)(v46[0] + 8);
    }
    else
    {
      v46[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v46[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v46[0], &v54) )
      {
        UserSetLastError(5LL, v22, v23);
        ThreadUnlock1(v31, v30, v32);
        v33 = *(struct _CALLPROCDATA ***)v47[0];
        v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v35 = v50;
        *(_QWORD *)(v34 + 16) = v50;
        ClassUnlockWorker(v33, v35, v36);
        goto LABEL_52;
      }
      xxxSetClassIcon(a1);
      v24 = *(struct _CALLPROCDATA ***)v46[0];
      v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v26 = v54;
      *(_QWORD *)(v25 + 16) = v54;
      v28 = ClassUnlockWorker(v24, v26, v27);
      v20 = v46[0];
      v29 = v28;
      if ( v28 != *(struct _CALLPROCDATA ***)v46[0] )
      {
        v20 = v46[0];
        if ( v46[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v46[0] + 8);
          v20 = v46[0];
          if ( !*(_DWORD *)(v46[0] + 8) )
          {
            if ( *(_BYTE *)(v46[0] + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v46[0]);
          }
        }
        if ( v29 )
        {
          v46[0] = (__int64)v29[16];
          ++*(_DWORD *)(v46[0] + 8);
        }
        else
        {
          v46[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      v53[1] = v9;
      v53[0] = *(_QWORD *)v46[0] + 88LL;
      HMAssignmentLock(v53);
    }
    if ( *(_QWORD *)v46[0] )
    {
      v20 = *(_QWORD *)v46[0];
      v21 = **(_QWORD **)v46[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v20, v17, v18);
  v37 = *(struct _CALLPROCDATA ***)v47[0];
  v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v39 = v50;
  *(_QWORD *)(v38 + 16) = v50;
  ClassUnlockWorker(v37, v39, v40);
LABEL_54:
  v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v46);
  v42 = *(_QWORD **)(v41 + 1472);
  if ( v42 )
    *(_QWORD *)(v41 + 1472) = *v42;
  v43 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v47);
  v44 = *(_QWORD **)(v43 + 1472);
  if ( v44 )
    *(_QWORD *)(v43 + 1472) = *v44;
  return v8;
}
