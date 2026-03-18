/*
 * XREFs of ?WriteAbsolute4@@YGHPBEPAEH0@Z @ 0x2334B3
 * Callers:
 *     _EncodeRLE4@20 @ 0x23486D (_EncodeRLE4@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

int __userpurge WriteAbsolute4@<eax>(
        _BYTE *a1@<edx>,
        _BYTE *a2@<ecx>,
        const unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        const unsigned __int8 *a6)
{
  int v7; // edi
  int v8; // edi
  _BYTE *v10; // eax
  int v11; // ebx
  const unsigned __int8 *v12; // [esp+30h] [ebp+8h]

  if ( (int)a3 >= 3 )
  {
    v8 = (int)(a3 + 1) >> 1;
    if ( (((_BYTE)a3 + 1) & 2) != 0 )
      v7 = v8 + 3;
    else
      v7 = v8 + 2;
  }
  else
  {
    v7 = 2;
  }
  if ( !a1 )
    return v7;
  if ( &a1[v7] > a4 )
    return 0;
  v10 = a1 + 1;
  if ( (int)a3 >= 3 )
  {
    *a1 = 0;
    *v10 = (_BYTE)a3;
    v12 = a1 + 2;
    v11 = (int)(a3 + 1);
    memmove(a1 + 2, a2, v11 >> 1);
    if ( (v11 & 2) != 0 )
      v12[v11 >> 1] = 0;
    return v7;
  }
  *a1 = (_BYTE)a3;
  *v10 = *a2;
  return 2;
}
