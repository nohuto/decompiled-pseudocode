/*
 * XREFs of xxxSetClassLongPtr @ 0x1C010CB8C
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C010C940 (NtUserSetClassLongPtr.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxSetClassData @ 0x1C010CC4C (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rsi
  _QWORD *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 i; // rsi
  __int64 v18[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v18, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    v13 = 5LL;
LABEL_30:
    UserSetLastError(v13, v7, v8);
    v9 = 0LL;
    goto LABEL_4;
  }
  if ( (int)v3 < 0 )
  {
    v9 = xxxSetClassData((struct tagWND *)a1);
    goto LABEL_4;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v14 != *(_QWORD *)v18[0] )
  {
    if ( v18[0] != gSmartObjNullRef && !--*(_DWORD *)(v18[0] + 8) )
    {
      if ( *(_BYTE *)(v18[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v18[0]);
    }
    if ( v14 )
    {
      v18[0] = *(_QWORD *)(v14 + 128);
      ++*(_DWORD *)(v18[0] + 8);
    }
    else
    {
      v18[0] = gSmartObjNullRef;
    }
  }
  v7 = (unsigned int)(v3 + 8);
  if ( (unsigned int)v7 < (unsigned int)v3
    || (unsigned int)v7 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 8LL) + 12LL) )
  {
    v13 = 1413LL;
    goto LABEL_30;
  }
  v15 = v3;
  v16 = *(_QWORD *)(*(_QWORD *)v18[0] + 8LL);
  v9 = *(_QWORD *)(v16 + v3 + 88);
  *(_QWORD *)(v16 + v15 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v18[0] + 64LL); ; i = **(_QWORD **)v18[0] )
  {
    if ( i != *(_QWORD *)v18[0] )
    {
      if ( v18[0] != gSmartObjNullRef && !--*(_DWORD *)(v18[0] + 8) )
      {
        if ( *(_BYTE *)(v18[0] + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v18[0]);
      }
      if ( i )
      {
        v18[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v18[0] + 8);
      }
      else
      {
        v18[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v18[0] )
      break;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 8LL) + v15 + 88) = a3;
  }
LABEL_4:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v18);
  v11 = *(_QWORD **)(ThreadWin32Thread + 1464);
  if ( v11 )
    *(_QWORD *)(ThreadWin32Thread + 1464) = *v11;
  return v9;
}
