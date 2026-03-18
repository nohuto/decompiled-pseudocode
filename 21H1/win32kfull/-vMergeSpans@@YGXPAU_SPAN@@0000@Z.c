/*
 * XREFs of ?vMergeSpans@@YGXPAU_SPAN@@0000@Z @ 0x220021
 * Callers:
 *     ?bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z @ 0x21F8DB (-bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QAEHXZ @ 0x21FBAB (-bPushMergeScrScan@STACKOBJ@@QAEHXZ.c)
 * Callees:
 *     <none>
 */

void __userpurge vMergeSpans(
        unsigned int a1@<edx>,
        char *a2@<ecx>,
        struct _SPAN *a3,
        struct _SPAN *a4,
        struct _SPAN *a5,
        struct _SPAN *a6,
        struct _SPAN *a7)
{
  int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // ecx
  int v16; // edi

  while ( (unsigned int)a2 < a1 && a3 < a4 )
  {
    v10 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)a3 )
    {
      v10 = *(_DWORD *)a3;
      v11 = *((_DWORD *)a3 + 1);
      a3 = (struct _SPAN *)((char *)a3 + 8);
    }
    else
    {
      v11 = *((_DWORD *)a2 + 1);
      a2 += 8;
    }
    *(_DWORD *)a5 = v10;
    *((_DWORD *)a5 + 1) = v11;
    a5 = (struct _SPAN *)((char *)a5 + 8);
  }
  v12 = 0;
  v13 = a1 >= (unsigned int)a2 ? (a1 - (unsigned int)a2 + 7) >> 3 : 0;
  if ( v13 )
  {
    v14 = a2 - (char *)a5;
    do
    {
      *(_DWORD *)a5 = *(_DWORD *)((char *)a5 + v14);
      *((_DWORD *)a5 + 1) = *(_DWORD *)((char *)a5 + v14 + 4);
      a5 = (struct _SPAN *)((char *)a5 + 8);
      ++v12;
    }
    while ( v12 < v13 );
    v12 = 0;
  }
  v15 = a4 >= a3 ? (unsigned int)(a4 - a3 + 7) >> 3 : 0;
  if ( v15 )
  {
    v16 = a3 - a5;
    do
    {
      ++v12;
      *(_DWORD *)a5 = *(_DWORD *)((char *)a5 + v16);
      a5 = (struct _SPAN *)((char *)a5 + 8);
      *((_DWORD *)a5 - 1) = *(_DWORD *)((char *)a5 + v16 - 4);
    }
    while ( v12 < v15 );
  }
}
