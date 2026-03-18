/*
 * XREFs of ?vReComputeBounds@EPATHOBJ@@QAEXXZ @ 0x237449
 * Callers:
 *     _NtGdiWidenPath@4 @ 0x211EC9 (_NtGdiWidenPath@4.c)
 * Callees:
 *     <none>
 */

void __thiscall EPATHOBJ::vReComputeBounds(EPATHOBJ *this)
{
  int v2; // ecx
  int v3; // eax
  _DWORD *i; // ecx
  int *v5; // esi
  int *v6; // ebx
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // edi

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    if ( v3 )
    {
      *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 16);
      *(_DWORD *)(*((_DWORD *)this + 2) + 32) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 20) + 20);
      *(_DWORD *)(*((_DWORD *)this + 2) + 36) = *(_DWORD *)(*((_DWORD *)this + 2) + 28);
      *(_DWORD *)(*((_DWORD *)this + 2) + 40) = *(_DWORD *)(*((_DWORD *)this + 2) + 32);
      for ( i = *(_DWORD **)(*((_DWORD *)this + 2) + 20); i; i = (_DWORD *)*i )
      {
        v5 = i + 4;
        v6 = &i[2 * i[3] + 4];
        while ( v5 < v6 )
        {
          v7 = (_DWORD *)*((_DWORD *)this + 2);
          v8 = *v5;
          if ( v7[7] <= *v5 )
          {
            if ( v7[9] < v8 )
              v7[9] = v8;
          }
          else
          {
            v7[7] = v8;
          }
          v9 = v5[1];
          if ( v7[10] >= v9 )
          {
            if ( v7[8] > v9 )
              v7[8] = v9;
          }
          else
          {
            v7[10] = v9;
          }
          v5 += 2;
        }
      }
    }
    else
    {
      *(_DWORD *)(v2 + 28) = 0;
      *(_DWORD *)(*((_DWORD *)this + 2) + 32) = 0;
      *(_DWORD *)(*((_DWORD *)this + 2) + 36) = 0;
      *(_DWORD *)(*((_DWORD *)this + 2) + 40) = 0;
    }
  }
}
