/*
 * XREFs of MiRemoveUnmappedIoNode @ 0x1402189D0
 * Callers:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiMakeIoRangePermanent @ 0x140536DF8 (MiMakeIoRangePermanent.c)
 * Callees:
 *     MiInitializeIoPageNodeArray @ 0x140218A94 (MiInitializeIoPageNodeArray.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 */

__int64 *__fastcall MiRemoveUnmappedIoNode(__int64 **a1, unsigned __int64 a2)
{
  __int64 *i; // rbx
  unsigned __int64 v3; // rax
  __int64 *result; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  int v8; // ecx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  for ( i = *a1; ; i = (__int64 *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
        return 0LL;
      v3 = i[5];
      if ( a2 >= v3 )
        break;
      i = (__int64 *)*i;
    }
    if ( a2 < v3 + 512 )
      break;
  }
  RtlAvlRemoveNode(a1, i);
  v5 = i + 3;
  if ( (__int64 *)qword_140C4ECA0 == i + 3 && (__int64 *)*v5 != &qword_140C4ECA0 )
    dword_140C4ECB0 = *(_DWORD *)(*v5 + 32);
  v6 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 || (v7 = (__int64 **)i[4], *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  _InterlockedOr(v9, 0);
  v8 = *((_DWORD *)i + 14);
  if ( (unsigned int)(KiCacheFlushTimeStamp - v8) > 2
    || (v8 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - v8) >= 2 )
  {
    MiInitializeIoPageNodeArray(i);
  }
  i[7] = 0LL;
  result = i;
  --qword_140C4ECB8;
  return result;
}
