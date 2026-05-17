/*
 * XREFs of _TppPHInsert@8 @ 0x4B2B7A2F
 * Callers:
 *     _TppEnqueueTimer@8 @ 0x4B2B7991 (_TppEnqueueTimer@8.c)
 * Callees:
 *     <none>
 */

void __fastcall TppPHInsert(int *a1, int a2)
{
  int v2; // esi
  int *v3; // esi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edi

  v2 = *a1;
  if ( !*a1 )
    goto LABEL_2;
  if ( *(_QWORD *)(v2 + 16) >= *(_QWORD *)(a2 + 16) )
  {
    v5 = (_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 8);
    if ( *(_DWORD *)(v6 + 4) == a2 + 8 )
    {
      *(_DWORD *)v2 = v6;
      *(_DWORD *)(v2 + 4) = v5;
      *(_DWORD *)(v6 + 4) = v2;
      *v5 = v2;
LABEL_2:
      *a1 = a2;
      return;
    }
LABEL_8:
    __fastfail(3u);
  }
  v3 = (int *)(v2 + 8);
  v4 = *v3;
  if ( *(int **)(*v3 + 4) != v3 )
    goto LABEL_8;
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(v4 + 4) = a2;
  *v3 = a2;
}
