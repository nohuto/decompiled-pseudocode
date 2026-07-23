/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x1403455C8
 * Callers:
 *     MiInvalidatePageFileBitmapsCache @ 0x14033A628 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140345170 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 *a2, int a3)
{
  BOOLEAN v3; // bl
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r9
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 j; // r9
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    v6 = a2[1];
    if ( v6 )
    {
      v8 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v6 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = a2[2]; ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)v6 == a2 )
          break;
        a2 = (unsigned __int64 *)v6;
      }
    }
  }
  else
  {
    v6 = *a2;
    v11 = (unsigned __int64)a2;
    if ( *a2 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( j = a2[2]; ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == v11 )
          break;
        v11 = v6;
      }
    }
    if ( !v6 )
      return;
  }
  v9 = *(_DWORD *)(v6 + 52);
  v10 = *((_DWORD *)v4 + 13);
  if ( a3 )
  {
    if ( v9 > v10 )
      return;
  }
  else if ( v9 < v10 )
  {
    return;
  }
  v13 = a1 + 144;
  RtlRbRemoveNode((PRTL_RB_TREE)v13, (PRTL_BALANCED_NODE)v4);
  v14 = *(_QWORD *)v13;
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
  {
    if ( v14 )
      v14 ^= v13;
    else
      v14 = 0LL;
  }
  if ( v14 )
  {
    while ( 1 )
    {
      if ( v4[6] < *(_QWORD *)(v14 + 48) )
      {
        v15 = *(_QWORD *)v14;
        if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
        {
          if ( !v15 )
            break;
          v15 ^= v14;
        }
        if ( !v15 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_37;
          v15 ^= v14;
        }
        if ( !v15 )
        {
LABEL_37:
          v3 = 1;
          break;
        }
      }
      v14 = v15;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v13, (PRTL_BALANCED_NODE)v14, v3, (PRTL_BALANCED_NODE)v4);
}
