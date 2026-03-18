/*
 * XREFs of sub_1C0004060 @ 0x1C0004060
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C00021C0 @ 0x1C00021C0 (sub_1C00021C0.c)
 *     sub_1C00028E8 @ 0x1C00028E8 (sub_1C00028E8.c)
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C00126A8 @ 0x1C00126A8 (sub_1C00126A8.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C00312A0 @ 0x1C00312A0 (sub_1C00312A0.c)
 *     sub_1C0038550 @ 0x1C0038550 (sub_1C0038550.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003E9F8 @ 0x1C003E9F8 (sub_1C003E9F8.c)
 *     sub_1C003F208 @ 0x1C003F208 (sub_1C003F208.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C004028C @ 0x1C004028C (sub_1C004028C.c)
 *     sub_1C0040864 @ 0x1C0040864 (sub_1C0040864.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 *     sub_1C004E878 @ 0x1C004E878 (sub_1C004E878.c)
 *     sub_1C0056360 @ 0x1C0056360 (sub_1C0056360.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 * Callees:
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0004060(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rdi
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r9
  UCHAR v12; // cl
  __int64 v13; // r8
  __int64 v14; // rdx
  char *PoolWithTag; // rax
  __int64 v16; // rbx
  LIST_ENTRY *p_WaitListHead; // rdi
  char *v18; // rax
  char **Blink; // rcx

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    sub_1C002DC78(a1, 0LL);
  if ( v9->Header.LockNV != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  v12 = v9[142].Header.Signalling;
  if ( (dword_1C006B268 & 0x10000) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 1668172104;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a5;
      *(_QWORD *)(v14 + 24) = Signalling;
      v12 = v9[142].Header.Signalling;
    }
  }
  if ( v12 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x28uLL, 0x42554855u);
    v16 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_DWORD *)PoolWithTag + 9) = 0;
      v18 = PoolWithTag + 8;
      *(_DWORD *)v16 = 1215918946;
      *(_QWORD *)(v16 + 24) = a3;
      *(_DWORD *)(v16 + 32) = a4;
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v18 = p_WaitListHead;
      *(_QWORD *)(v16 + 16) = Blink;
      *Blink = v18;
      p_WaitListHead->Blink = (struct _LIST_ENTRY *)v18;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v16 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
      sub_1C0012810(a1, 6LL, a2);
    return v16;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
