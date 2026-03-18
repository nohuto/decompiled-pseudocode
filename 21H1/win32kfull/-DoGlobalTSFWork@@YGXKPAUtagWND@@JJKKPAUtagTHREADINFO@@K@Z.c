/*
 * XREFs of ?DoGlobalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0xADA8C
 * Callers:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 * Callees:
 *     ?CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z @ 0x12096 (-CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z.c)
 */

void __userpurge DoGlobalTSFWork(
        struct tagEVENTHOOK *a1@<edx>,
        unsigned int a2,
        struct tagWND *a3,
        int a4,
        int a5,
        unsigned int a6,
        struct tagTHREADINFO *a7,
        struct tagTHREADINFO *a8,
        unsigned int a9)
{
  _DWORD *i; // esi
  int v11; // edi
  int v12; // ecx
  struct tagTHREADINFO *v13; // [esp+0h] [ebp-18h]
  unsigned int v14; // [esp+4h] [ebp-14h]

  for ( i = (_DWORD *)_gppiList; i; i = (_DWORD *)i[52] )
  {
    if ( (i[116] & 0x1000000) != 0 )
    {
      v11 = i[45];
      if ( v11 )
      {
        v12 = a5;
        do
        {
          if ( (v12 & *(_DWORD *)(*(_DWORD *)(v11 + 244) + 16)) != 0 )
          {
            CreateAndPostTSFNotify(a1, a2, a3, v11, a6, a7, v13, v14);
            v12 = a5;
          }
          v11 = *(_DWORD *)(v11 + 364);
        }
        while ( v11 );
      }
    }
  }
}
