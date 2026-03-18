/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C00A98BC
 * Callers:
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00A9370 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00A9630 (NtGdiCreateRectRgn.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C00A9A1C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C01493B0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  char *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  void *v24; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore(v5, v4, v6);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) )
    goto LABEL_3;
  v24 = 0LL;
  v14 = (char *)HmgAllocateSecureUserMemory(&v24);
  if ( !v14 )
    goto LABEL_3;
  v15 = PALLOCMEM2(0x568uLL, 0x66616247u, 0);
  if ( v15 )
  {
    v16 = (_QWORD *)(CurrentProcessWin32Process + 208);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v17 + 8) != CurrentProcessWin32Process + 208 )
      goto LABEL_20;
    *v15 = v17;
    v15[1] = v16;
    *(_QWORD *)(v17 + 8) = v15;
    v7 = 170LL;
    *v16 = v15;
    v18 = v15 + 3;
    *((_DWORD *)v15 + 4) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v14 + 4056;
    do
    {
      *v18 = v14;
      v14 += 24;
      ++v18;
      --v7;
    }
    while ( v7 );
LABEL_3:
    v9 = *(_QWORD **)(CurrentProcessWin32Process + 48);
    if ( !v9 )
    {
LABEL_6:
      GreReleaseHmgrSemaphore((int)v9, v7, v8);
      return v2;
    }
    v10 = (_QWORD *)(CurrentProcessWin32Process + 208);
    v2 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( (*(_DWORD *)(v11 + 16))-- != 1 )
    {
      v9 = *(_QWORD **)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 16) - 1) + 24);
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v9;
      goto LABEL_6;
    }
    v19 = *(_QWORD *)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
    {
      v20 = *(_QWORD **)(v11 + 8);
      if ( *v20 == v11 )
      {
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        Win32FreePool(v11, (__int64)v20, v8);
        v9 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 != v10 )
          v1 = v9[(unsigned int)(*((_DWORD *)v9 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 48) = v1;
        goto LABEL_6;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v14, v24);
  GreReleaseHmgrSemaphore(v22, v21, v23);
  return 0LL;
}
