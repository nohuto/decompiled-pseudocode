/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C001D314
 * Callers:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001CC30 (NtGdiCreateRectRgn.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C001D5D8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0140B80 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v7; // rsi
  __int64 *v8; // rax
  char *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 *v17; // rcx
  __int64 **v18; // rdx
  void *v19; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v5 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v5;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL, v1, v2, v3);
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) )
    goto LABEL_3;
  v19 = 0LL;
  v11 = (char *)HmgAllocateSecureUserMemory(&v19);
  if ( !v11 )
    goto LABEL_3;
  v12 = PALLOCMEM2(0x568uLL);
  if ( v12 )
  {
    v13 = (__int64 *)(CurrentProcessWin32Process + 208);
    v14 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v14 + 8) != CurrentProcessWin32Process + 208 )
      goto LABEL_20;
    *(_QWORD *)v12 = v14;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v14 + 8) = v12;
    v15 = 170LL;
    *v13 = v12;
    v16 = (_QWORD *)(v12 + 24);
    *(_DWORD *)(v12 + 16) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v11 + 4056;
    do
    {
      *v16 = v11;
      v11 += 24;
      ++v16;
      --v15;
    }
    while ( v15 );
LABEL_3:
    if ( !*(_QWORD *)(CurrentProcessWin32Process + 48) )
    {
LABEL_6:
      GreReleaseHmgrSemaphore();
      return v5;
    }
    v7 = CurrentProcessWin32Process + 208;
    v5 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    v8 = *(__int64 **)(CurrentProcessWin32Process + 208);
    if ( (*((_DWORD *)v8 + 4))-- != 1 )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v8[(unsigned int)(*((_DWORD *)v8 + 4) - 1) + 3];
      goto LABEL_6;
    }
    v17 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) == v8 )
    {
      v18 = (__int64 **)v8[1];
      if ( *v18 == v8 )
      {
        *v18 = v17;
        v17[1] = (__int64)v18;
        Win32FreePool(v8);
        if ( *(_QWORD *)v7 != v7 )
          v4 = *(_QWORD *)(*(_QWORD *)v7 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v7 + 16LL) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 48) = v4;
        goto LABEL_6;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v11, v19);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
