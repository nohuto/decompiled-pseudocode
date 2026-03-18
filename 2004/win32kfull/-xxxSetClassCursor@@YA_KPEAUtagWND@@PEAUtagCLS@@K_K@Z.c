/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E925C
 * Callers:
 *     xxxSetClassData @ 0x1C010CC4C (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00FC6D0 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106AF0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C023EB38 (xxxSetClassIcon.c)
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
  struct _CALLPROCDATA **v26; // rax
  struct _CALLPROCDATA **v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _CALLPROCDATA **v31; // rbx
  __int64 v32; // rax
  struct _CALLPROCDATA **v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  _QWORD *v36; // rcx
  __int64 v37; // rbx
  _QWORD *v38; // rcx
  __int64 v40[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v41[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v42; // [rsp+48h] [rbp-29h] BYREF
  __int64 v43; // [rsp+58h] [rbp-19h]
  __int128 v44; // [rsp+60h] [rbp-11h] BYREF
  __int64 v45; // [rsp+70h] [rbp-1h]
  _QWORD v46[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v47[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v48; // [rsp+98h] [rbp+27h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+37h]

  v8 = 0LL;
  v9 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v41, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v40, 0LL);
  v45 = 0LL;
  v49 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
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
  if ( v13 != *(_QWORD *)v41[0] )
  {
    if ( v41[0] != gSmartObjNullRef && !--*(_DWORD *)(v41[0] + 8) )
    {
      if ( *(_BYTE *)(v41[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v41[0]);
    }
    if ( v13 )
    {
      v41[0] = *(_QWORD *)(v13 + 128);
      ++*(_DWORD *)(v41[0] + 8);
    }
    else
    {
      v41[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v41[0], &v44) )
  {
    UserSetLastError(5LL, v14, v15);
LABEL_52:
    v8 = 0LL;
    goto LABEL_54;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v42 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v42;
  *((_QWORD *)&v42 + 1) = v9;
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
    v46[1] = v9;
    v46[0] = *(_QWORD *)v41[0] + 88LL;
    v19 = (_QWORD *)HMAssignmentLock(v46);
    goto LABEL_24;
  }
LABEL_26:
  v20 = *(_QWORD *)v41[0];
  v21 = *(_QWORD *)(*(_QWORD *)v41[0] + 64LL);
LABEL_44:
  if ( v21 != *(_QWORD *)v40[0] )
  {
    if ( v40[0] != gSmartObjNullRef && !--*(_DWORD *)(v40[0] + 8) )
    {
      if ( *(_BYTE *)(v40[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v40[0]);
    }
    if ( v21 )
    {
      v40[0] = *(_QWORD *)(v21 + 128);
      ++*(_DWORD *)(v40[0] + 8);
    }
    else
    {
      v40[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v40[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v40[0], &v48) )
      {
        UserSetLastError(5LL, v22, v23);
        ThreadUnlock1(v29, v28, v30);
        v31 = *(struct _CALLPROCDATA ***)v41[0];
        v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(v32 + 16) = v44;
        ClassUnlockWorker(v31);
        goto LABEL_52;
      }
      xxxSetClassIcon(a1);
      v24 = *(struct _CALLPROCDATA ***)v40[0];
      v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v25 + 16) = v48;
      v26 = ClassUnlockWorker(v24);
      v20 = v40[0];
      v27 = v26;
      if ( v26 != *(struct _CALLPROCDATA ***)v40[0] )
      {
        v20 = v40[0];
        if ( v40[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v40[0] + 8);
          v20 = v40[0];
          if ( !*(_DWORD *)(v40[0] + 8) )
          {
            if ( *(_BYTE *)(v40[0] + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v40[0]);
          }
        }
        if ( v27 )
        {
          v40[0] = (__int64)v27[16];
          ++*(_DWORD *)(v40[0] + 8);
        }
        else
        {
          v40[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      v47[1] = v9;
      v47[0] = *(_QWORD *)v40[0] + 88LL;
      HMAssignmentLock(v47);
    }
    if ( *(_QWORD *)v40[0] )
    {
      v20 = *(_QWORD *)v40[0];
      v21 = **(_QWORD **)v40[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v20, v17, v18);
  v33 = *(struct _CALLPROCDATA ***)v41[0];
  v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v34 + 16) = v44;
  ClassUnlockWorker(v33);
LABEL_54:
  v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v40);
  v36 = *(_QWORD **)(v35 + 1464);
  if ( v36 )
    *(_QWORD *)(v35 + 1464) = *v36;
  v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v41);
  v38 = *(_QWORD **)(v37 + 1464);
  if ( v38 )
    *(_QWORD *)(v37 + 1464) = *v38;
  return v8;
}
