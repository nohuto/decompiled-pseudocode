/*
 * XREFs of ?STROBJ_bGetAdvanceWidthsLinked@@YGHPAVESTROBJ@@KKPAU_POINTQF@@@Z @ 0x223CCC
 * Callers:
 *     _STROBJ_bGetAdvanceWidths@16 @ 0x225693 (_STROBJ_bGetAdvanceWidths@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __userpurge STROBJ_bGetAdvanceWidthsLinked@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct ESTROBJ *a3,
        _DWORD *a4,
        unsigned int a5,
        struct _POINTQF *a6)
{
  struct ESTROBJ *v6; // eax
  struct ESTROBJ *v7; // edi
  _DWORD *v8; // edx
  int i; // esi
  int v11; // esi
  _DWORD *v12; // esi
  struct ESTROBJ *v14; // [esp+10h] [ebp-20h]
  struct ESTROBJ *v16; // [esp+38h] [ebp+8h]

  v6 = (struct ESTROBJ *)((char *)a3 + a1);
  v14 = (struct ESTROBJ *)((char *)a3 + a1);
  v7 = 0;
  v16 = 0;
  v8 = *(_DWORD **)(a2 + 180);
  for ( i = *(_DWORD *)(a2 + 48); ; i += 16 )
  {
    *(_DWORD *)(a2 + 188) = i;
    *(_DWORD *)(a2 + 184) = v8;
    if ( v7 >= v6 )
      break;
    if ( *v8 == *(_DWORD *)(a2 + 196) )
    {
      if ( (unsigned int)v7 >= a1 )
      {
        v11 = *(_DWORD *)(i + 4);
        if ( *(_DWORD *)(**(_DWORD **)(a2 + 44) + 640) )
        {
          a4[1] = *(_DWORD *)(v11 + 8);
          *a4 = 0;
          a4[3] = 0;
          a4[2] = 0;
        }
        else
        {
          v12 = (_DWORD *)(v11 + 48);
          *a4 = *v12++;
          a4[1] = *v12++;
          a4[2] = *v12;
          a4[3] = v12[1];
          v7 = v16;
        }
        a4 += 4;
        i = *(_DWORD *)(a2 + 188);
        v8 = *(_DWORD **)(a2 + 184);
      }
      v7 = (struct ESTROBJ *)((char *)v7 + 1);
      v16 = v7;
    }
    ++v8;
    v6 = v14;
  }
  return 1;
}
