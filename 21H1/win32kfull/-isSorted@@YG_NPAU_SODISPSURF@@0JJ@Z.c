/*
 * XREFs of ?isSorted@@YG_NPAU_SODISPSURF@@0JJ@Z @ 0x2064FE
 * Callers:
 *     ?vSortBltOrderWorker@@YGXPAPAU_SODISPSURF@@JJ@Z @ 0x206805 (-vSortBltOrderWorker@@YGXPAPAU_SODISPSURF@@JJ@Z.c)
 * Callees:
 *     <none>
 */

bool __userpurge isSorted@<al>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SODISPSURF *a3,
        struct _SODISPSURF *a4,
        int a5,
        int a6)
{
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  int v10; // ebx
  int v11; // [esp+4h] [ebp-4h]

  v6 = *(_DWORD **)(a2 + 4);
  v7 = *(_DWORD **)(a1 + 4);
  v8 = v6[3];
  if ( !v8 && !v7[3] )
    return v6[2] < v7[2];
  if ( v7[3] != v8 )
    return v8 == 0;
  v10 = v7[5];
  v11 = v6[7];
  return (int)a3 + v10 < v11 && (int)a3 + v7[7] > v6[5] && (int)a4 + v7[6] < v6[8] && (int)a4 + v7[8] > v6[6]
      || (int)a3 + v6[5] >= v7[7]
      || (int)a3 + v11 <= v10
      || (int)a4 + v6[6] >= v7[8]
      || (int)a4 + v6[8] <= v7[6];
}
