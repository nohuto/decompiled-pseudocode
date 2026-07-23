/*
 * XREFs of FsRtlAddToTunnelCacheEx @ 0x1405E7FF0
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x14088B850 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlCompareNodeAndKey @ 0x14021D428 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x14021D494 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14021D4EC (FsRtlFreeTunnelNode.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     FsRtlPruneTunnelCache @ 0x1405E8314 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall FsRtlAddToTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        char a5,
        size_t Size,
        void *Src)
{
  __int64 v7; // r14
  int v9; // ebp
  const UNICODE_STRING *v10; // r15
  const UNICODE_STRING *v11; // r12
  PKGUARDED_MUTEX v12; // rsi
  char *result; // rax
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  char *v17; // rbx
  PKGUARDED_MUTEX v18; // r13
  __int64 v19; // rbp
  struct _FAST_MUTEX *v20; // rdi
  LONG v21; // eax
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // rdx
  PKGUARDED_MUTEX *v24; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  char *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // r8
  char v35; // [rsp+20h] [rbp-68h]
  char v36; // [rsp+24h] [rbp-64h]
  __int64 v37[12]; // [rsp+28h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp+28h]

  v7 = 0LL;
  v35 = 0;
  v9 = a5 & 2;
  v10 = a4;
  v11 = a3;
  v42 = v9;
  v12 = Mutex;
  result = (char *)(a5 & 1);
  v36 = (char)result;
  if ( !TunnelMaxEntries )
    return result;
  v14 = Size + a3->Length;
  v15 = a4->Length + 112;
  v37[1] = (__int64)v37;
  v16 = v15 + v14;
  v37[0] = (__int64)v37;
  if ( v16 > 0xB0 || (v17 = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
  {
    result = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x506E7554u);
    v17 = result;
    if ( !result )
      return result;
    v35 = 1;
  }
  if ( !v9 )
    v11 = v10;
  ExAcquireFastMutex(v12);
  v18 = v12 + 1;
  v19 = *(_QWORD *)&v12[1].Count;
  v20 = v12 + 1;
  if ( v19 )
  {
    do
    {
      v7 = v19;
      v21 = FsRtlCompareNodeAndKey(v19, a2, v11, v36);
      if ( v21 > 0 )
      {
        v22 = 8LL;
      }
      else
      {
        if ( v21 >= 0 )
          break;
        v22 = 16LL;
      }
      v20 = (struct _FAST_MUTEX *)(v22 + v19);
      v19 = *(_QWORD *)(v22 + v19);
    }
    while ( v19 );
    v12 = Mutex;
    v10 = a4;
    v18 = Mutex + 1;
  }
  *(_QWORD *)v17 = v17;
  *((_QWORD *)v17 + 1) = 0LL;
  *((_QWORD *)v17 + 2) = 0LL;
  if ( v7 )
  {
    if ( *(_QWORD *)&v20->Count )
    {
      *((_QWORD *)v17 + 2) = *(_QWORD *)(*(_QWORD *)&v20->Count + 16LL);
      *((_QWORD *)v17 + 1) = *(_QWORD *)(*(_QWORD *)&v20->Count + 8LL);
      v29 = *(_QWORD **)&v20->Count;
      v30 = *(_QWORD **)(*(_QWORD *)&v20->Count + 16LL);
      if ( v30 )
      {
        *v30 = v17;
        v29 = *(_QWORD **)&v20->Count;
      }
      v31 = (_QWORD *)v29[1];
      if ( v31 )
      {
        *v31 = v17;
        v29 = *(_QWORD **)&v20->Count;
      }
      if ( (_QWORD *)*v29 == v29 )
      {
        *(_QWORD *)&v18->Count = v17;
      }
      else
      {
        *(_QWORD *)v17 = *v29;
        v32 = **(_QWORD **)&v20->Count;
        if ( *(_QWORD *)(v32 + 8) == *(_QWORD *)&v20->Count )
          *(_QWORD *)(v32 + 8) = v17;
        else
          *(_QWORD *)(v32 + 16) = v17;
      }
      v33 = *(_QWORD *)(v7 + 24);
      if ( *(_QWORD *)(v33 + 8) != v7 + 24 || (v34 = *(_QWORD **)(v7 + 32), *v34 != v7 + 24) )
LABEL_39:
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      FsRtlFreeTunnelNode((char *)v7, v37);
      --LOWORD(v12[1].Event.Header.Lock);
    }
    else
    {
      *(_QWORD *)v17 = v7;
      *(_QWORD *)&v20->Count = v17;
    }
  }
  else
  {
    *(_QWORD *)&v18->Count = v17;
  }
  v23 = (struct _FAST_MUTEX *)(v17 + 24);
  *((_QWORD *)v17 + 5) = MEMORY[0xFFFFF78000000014];
  v24 = *(PKGUARDED_MUTEX **)&v12[1].Contention;
  if ( *v24 != (PKGUARDED_MUTEX)&v12[1].Owner )
    goto LABEL_39;
  *(_QWORD *)&v23->Count = (char *)v12 + 64;
  *((_QWORD *)v17 + 4) = v24;
  *v24 = v23;
  *(_QWORD *)&v12[1].Contention = v23;
  ++LOWORD(v12[1].Event.Header.Lock);
  *((_QWORD *)v17 + 6) = a2;
  *((_DWORD *)v17 + 14) = v42 != 0 ? 2 : 0;
  *((_QWORD *)v17 + 11) = v17 + 112;
  *((_QWORD *)v17 + 9) = &v17[a3->Length + 112];
  Length = a3->Length;
  *((_WORD *)v17 + 41) = a3->Length;
  *((_WORD *)v17 + 40) = Length;
  v26 = v10->Length;
  *((_WORD *)v17 + 33) = v10->Length;
  *((_WORD *)v17 + 32) = v26;
  if ( a3->Length )
    memmove(v17 + 112, a3->Buffer, a3->Length);
  v27 = v10->Length;
  if ( v10->Length )
  {
    memmove(*((void **)v17 + 9), v10->Buffer, v10->Length);
    v27 = v10->Length;
  }
  v28 = &v17[a3->Length + 112 + v27];
  *((_QWORD *)v17 + 12) = v28;
  *((_DWORD *)v17 + 26) = Size;
  memmove(v28, Src, (unsigned int)Size);
  if ( v35 )
    *((_DWORD *)v17 + 14) |= 1u;
  FsRtlPruneTunnelCache(v12, v37);
  KeReleaseGuardedMutex(v12);
  return (char *)FsRtlEmptyFreePoolList((_QWORD **)v37);
}
