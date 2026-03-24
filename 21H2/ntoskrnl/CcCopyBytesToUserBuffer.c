/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x1403234C0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1406EF550 (CcMapAndCopyFromCache.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C2240 (FsRtlIsNtstatusExpected.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1404E9FD4 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA4A8 (CcLockSystemCacheBuffer.c)
 *     HviCopyMemory @ 0x1405945DC (HviCopyMemory.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *Src, size_t Size, char a4)
{
  unsigned int v5; // ebx
  char *v6; // r14
  unsigned int v8; // edi
  struct _MDL *v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v13; // [rsp+38h] [rbp-40h]
  struct _MDL *v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+20h] BYREF

  v5 = Size;
  v6 = Src;
  v8 = 0;
  v9 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v13 = 0LL;
  v15 = 0;
  if ( !a4 || (v10 = CcLockSystemCacheBuffer(Src, &v14, Size, 0LL, &v15), v13 = v10, v9 = v14, v10) )
  {
    while ( v5 )
    {
      if ( v5 >= 0x40000 )
        v11 = 0x40000;
      else
        v11 = v5;
      if ( a4 )
        HviCopyMemory(a1, v10, v11);
      else
        memmove(a1, v6, v11);
      v5 -= v11;
      a1 += v11;
      v10 = v13;
      if ( a4 )
      {
        v10 = v11 + v13;
        v13 = v10;
      }
      else
      {
        v6 += v11;
      }
    }
  }
  else
  {
    v8 = v15;
  }
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v8;
}
