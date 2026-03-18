/*
 * XREFs of ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C006AC00
 * Callers:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C006ABCC (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C004911C (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C006ACC8 (-Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z.c)
 */

__int64 __fastcall CoreMessagingK::BufferCache::AllocUninitialized(unsigned __int16 a1, void **a2)
{
  struct CoreMessagingK::BufferCache::BufferHeader *v3; // rbx
  struct CoreMessagingK::BufferCache::BufferHeader *v4; // rdx
  struct CoreMessagingK::BufferCache::BufferHeader *v5; // r8
  struct CoreMessagingK::BufferCache::BufferHeader *v6; // rax
  __int64 result; // rax
  unsigned __int16 v8; // di
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
  v4 = 0LL;
  v5 = 0LL;
  if ( CoreMessagingK::BufferCache::s_FreeList )
  {
    v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
    do
    {
      if ( *(_WORD *)v6 >= a1 && *(_WORD *)v6 < *(_WORD *)v3 )
      {
        v3 = v6;
        v4 = v5;
      }
      v5 = v6;
      v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)*((_QWORD *)v6 + 1);
    }
    while ( v6 );
    if ( v3 && *(_WORD *)v3 >= a1 )
    {
      CoreMessagingK::BufferCache::Remove(v3, v4);
LABEL_10:
      *a2 = (char *)v3 + 16;
      return 0LL;
    }
  }
  if ( (unsigned int)a1 + 512 >= 0xFFFF )
    v8 = -1;
  else
    v8 = a1 + 512;
  v9 = 0LL;
  result = CoreMessagingK::Runtime::AllocUninitialized(v8 + 16LL, 0x43424D43u, &v9);
  if ( (int)result >= 0 )
  {
    v3 = (struct CoreMessagingK::BufferCache::BufferHeader *)v9;
    *((_QWORD *)v9 + 1) = 0LL;
    *(_WORD *)v3 = v8;
    goto LABEL_10;
  }
  return result;
}
