/*
 * XREFs of _SetClassWord @ 0x1C01E8BA4
 * Callers:
 *     NtUserSetClassWord @ 0x1C0201680 (NtUserSetClassWord.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int16 v15; // di
  __int64 i; // rbx
  __int64 ThreadWin32Thread; // rbx
  _QWORD *v18; // rcx
  __int64 v20[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v20, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v7, v6, v8) )
  {
    v11 = 5LL;
LABEL_26:
    UserSetLastError(v11, v9, v10);
    v15 = 0;
    goto LABEL_27;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v12 != *(_QWORD *)v20[0] )
  {
    if ( v20[0] != gSmartObjNullRef && !--*(_DWORD *)(v20[0] + 8) )
    {
      if ( *(_BYTE *)(v20[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v20[0]);
    }
    if ( v12 )
    {
      v20[0] = *(_QWORD *)(v12 + 128);
      ++*(_DWORD *)(v20[0] + 8);
    }
    else
    {
      v20[0] = gSmartObjNullRef;
    }
  }
  if ( (int)v3 < 0
    || (v9 = (unsigned int)(v3 + 2), (unsigned int)v9 < (unsigned int)v3)
    || (unsigned int)v9 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) + 12LL) )
  {
    v11 = 1413LL;
    goto LABEL_26;
  }
  v13 = v3;
  v14 = *(_QWORD *)(*(_QWORD *)v20[0] + 8LL);
  v15 = *(_WORD *)(v14 + v3 + 88);
  *(_WORD *)(v14 + v3 + 88) = a3;
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
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) + v13 + 88) = a3;
  }
LABEL_27:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v20);
  v18 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v18 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v18;
  return v15;
}
