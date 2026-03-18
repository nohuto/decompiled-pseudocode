/*
 * XREFs of xxxSetClassLongPtr @ 0x1C010E984
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C010E740 (NtUserSetClassLongPtr.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rsi
  _QWORD *v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 i; // rsi
  __int64 v20[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v20, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v7, v6, v8) )
  {
    v15 = 5LL;
LABEL_30:
    UserSetLastError(v15, v9, v10);
    v11 = 0LL;
    goto LABEL_4;
  }
  if ( (int)v3 < 0 )
  {
    v11 = xxxSetClassData((struct tagWND *)a1);
    goto LABEL_4;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v16 != *(_QWORD *)v20[0] )
  {
    if ( v20[0] != gSmartObjNullRef && !--*(_DWORD *)(v20[0] + 8) )
    {
      if ( *(_BYTE *)(v20[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v20[0]);
    }
    if ( v16 )
    {
      v20[0] = *(_QWORD *)(v16 + 128);
      ++*(_DWORD *)(v20[0] + 8);
    }
    else
    {
      v20[0] = gSmartObjNullRef;
    }
  }
  v9 = (unsigned int)(v3 + 8);
  if ( (unsigned int)v9 < (unsigned int)v3
    || (unsigned int)v9 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) + 12LL) )
  {
    v15 = 1413LL;
    goto LABEL_30;
  }
  v17 = v3;
  v18 = *(_QWORD *)(*(_QWORD *)v20[0] + 8LL);
  v11 = *(_QWORD *)(v18 + v3 + 88);
  *(_QWORD *)(v18 + v17 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v20[0] + 64LL); ; i = **(_QWORD **)v20[0] )
  {
    if ( i != *(_QWORD *)v20[0] )
    {
      if ( v20[0] != gSmartObjNullRef && !--*(_DWORD *)(v20[0] + 8) )
      {
        if ( *(_BYTE *)(v20[0] + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v20[0]);
      }
      if ( i )
      {
        v20[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v20[0] + 8);
      }
      else
      {
        v20[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v20[0] )
      break;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) + v17 + 88) = a3;
  }
LABEL_4:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v20);
  v13 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v13 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v13;
  return v11;
}
