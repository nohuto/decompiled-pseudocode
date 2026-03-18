/*
 * XREFs of ?vSortBltOrderWorker@@YGXPAPAU_SODISPSURF@@JJ@Z @ 0x206805
 * Callers:
 *     ??0MULTISORTBLTORDER@@QAE@PAU_VDEV@@JJ@Z @ 0x20161B (--0MULTISORTBLTORDER@@QAE@PAU_VDEV@@JJ@Z.c)
 * Callees:
 *     ?isSorted@@YG_NPAU_SODISPSURF@@0JJ@Z @ 0x2064FE (-isSorted@@YG_NPAU_SODISPSURF@@0JJ@Z.c)
 */

void __userpurge vSortBltOrderWorker(
        struct _SODISPSURF *a1@<edx>,
        _DWORD ***a2@<ecx>,
        int a3@<ebx>,
        struct _SODISPSURF **a4,
        int a5,
        int a6)
{
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  struct _SODISPSURF *v8; // edx
  int v9; // ebx
  _DWORD *v10; // eax
  int v11; // [esp-4h] [ebp-20h]
  int v12; // [esp+0h] [ebp-1Ch]
  _DWORD *v15; // [esp+10h] [ebp-Ch]
  _DWORD *v16; // [esp+14h] [ebp-8h]
  _DWORD *v17; // [esp+18h] [ebp-4h]

  v6 = *a2;
  v15 = 0;
  v7 = **a2;
  if ( v7 )
  {
    v8 = (struct _SODISPSURF *)a4;
    v11 = a3;
    do
    {
      v9 = 0;
      v17 = v6;
      if ( v7 )
      {
        while ( !v9 )
        {
          v16 = (_DWORD *)*v7;
          if ( isSorted((int)v7, (int)v6, a1, v8, v11, v12) )
          {
            v17 = v7;
            v7 = v16;
          }
          else
          {
            if ( v6 == v17 )
            {
              *v7 = v6;
            }
            else
            {
              *v7 = *v6;
              *v17 = v6;
            }
            *v6 = v16;
            v10 = v15;
            if ( !v15 )
              v10 = a2;
            *v10 = v7;
            v6 = v7;
            v9 = 1;
          }
          v8 = (struct _SODISPSURF *)a4;
          if ( !v7 )
          {
            if ( v9 )
              break;
            goto LABEL_15;
          }
        }
      }
      else
      {
LABEL_15:
        v15 = v6;
        v6 = (_DWORD *)*v6;
      }
      v7 = (_DWORD *)*v6;
      v8 = (struct _SODISPSURF *)a4;
    }
    while ( *v6 );
  }
}
