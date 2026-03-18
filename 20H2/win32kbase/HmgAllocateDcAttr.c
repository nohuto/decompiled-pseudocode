/*
 * XREFs of HmgAllocateDcAttr @ 0x1C001D474
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C001D5D8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0140B80 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 *v11; // rcx
  __int64 **v12; // rdx
  char *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  void *v19; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 24) )
  {
    v5 = *(_QWORD *)(ThreadWin32Thread + 24);
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v5;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL, v1, v2, v3);
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_5;
  v19 = 0LL;
  v13 = (char *)HmgAllocateSecureUserMemory(&v19);
  if ( !v13 )
    goto LABEL_5;
  v14 = PALLOCMEM2(0x70uLL);
  if ( v14 )
  {
    v15 = (__int64 *)(CurrentProcessWin32Process + 192);
    v16 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v16 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_10;
    *(_QWORD *)v14 = v16;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)(v16 + 8) = v14;
    v17 = 11LL;
    *v15 = v14;
    v18 = (_QWORD *)(v14 + 24);
    *(_DWORD *)(v14 + 16) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v13 + 3520;
    do
    {
      *v18 = v13;
      v13 += 352;
      ++v18;
      --v17;
    }
    while ( v17 );
LABEL_5:
    if ( !*(_QWORD *)(CurrentProcessWin32Process + 40) )
    {
LABEL_8:
      GreReleaseHmgrSemaphore();
      return v5;
    }
    v8 = CurrentProcessWin32Process + 192;
    v5 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v9 = *(__int64 **)(CurrentProcessWin32Process + 192);
    if ( (*((_DWORD *)v9 + 4))-- != 1 )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v9[(unsigned int)(*((_DWORD *)v9 + 4) - 1) + 3];
      goto LABEL_8;
    }
    v11 = (__int64 *)*v9;
    if ( *(__int64 **)(*v9 + 8) == v9 )
    {
      v12 = (__int64 **)v9[1];
      if ( *v12 == v9 )
      {
        *v12 = v11;
        v11[1] = (__int64)v12;
        Win32FreePool(v9);
        if ( *(_QWORD *)v8 != v8 )
          v4 = *(_QWORD *)(*(_QWORD *)v8 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v8 + 16LL) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v4;
        goto LABEL_8;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v13, v19);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
