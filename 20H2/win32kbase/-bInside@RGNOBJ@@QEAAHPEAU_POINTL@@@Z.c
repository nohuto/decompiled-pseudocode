/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0097930
 * Callers:
 *     GrePtInRegion @ 0x1C00978B0 (GrePtInRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rax
  LONG x; // r11d
  LONG y; // r9d
  _DWORD *v5; // r8
  unsigned int v6; // edx
  int v7; // r10d
  int v9; // ebx
  __int64 v10; // rax

  v2 = *(_QWORD *)this;
  x = a2->x;
  if ( a2->x < *(_DWORD *)(*(_QWORD *)this + 96LL) )
    return 1LL;
  y = a2->y;
  if ( y >= *(_DWORD *)(v2 + 108) || x >= *(_DWORD *)(v2 + 104) || y < *(_DWORD *)(v2 + 100) )
    return 1LL;
  v5 = *(_DWORD **)(v2 + 88);
  v6 = 1;
  v7 = *(_DWORD *)(v2 + 84);
  while ( v7 )
  {
    --v7;
    if ( v5[1] > y )
      break;
    if ( v5[2] > y )
    {
      v9 = 0;
      if ( *v5 )
      {
        do
        {
          v10 = v9++;
          if ( v5[v10 + 3] > x )
            return v6;
          v6 ^= 3u;
        }
        while ( v9 != *v5 );
      }
    }
    v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
  }
  return v6;
}
