/*
 * XREFs of ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C02B9DB8
 * Callers:
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B9564 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02B987C (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall vMergeSpans(struct _SPAN *a1, struct _SPAN *a2, struct _SPAN *a3, struct _SPAN *a4, struct _SPAN *a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8

  for ( ; a1 < a2; a5 = (struct _SPAN *)((char *)a5 + 8) )
  {
    if ( a3 >= a4 )
      break;
    if ( *(_DWORD *)a1 >= *(_DWORD *)a3 )
    {
      v8 = *(_QWORD *)a3;
      a3 = (struct _SPAN *)((char *)a3 + 8);
    }
    else
    {
      v8 = *(_QWORD *)a1;
      a1 = (struct _SPAN *)((char *)a1 + 8);
    }
    *(_QWORD *)a5 = v8;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = (unsigned __int64)(a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v11 = 0LL;
  if ( v11 )
  {
    v12 = a1 - a5;
    do
    {
      ++v10;
      *(_QWORD *)a5 = *(_QWORD *)((char *)a5 + v12);
      a5 = (struct _SPAN *)((char *)a5 + 8);
    }
    while ( v10 < v11 );
  }
  v13 = (unsigned __int64)(a4 - a3 + 7) >> 3;
  if ( a3 > a4 )
    v13 = 0LL;
  if ( v13 )
  {
    v14 = a3 - a5;
    do
    {
      ++v9;
      *(_QWORD *)a5 = *(_QWORD *)((char *)a5 + v14);
      a5 = (struct _SPAN *)((char *)a5 + 8);
    }
    while ( v9 < v13 );
  }
}
