/*
 * XREFs of WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect @ 0x1803D0F20
 * Callers:
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1803D0EC4 (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  int v3; // r11d
  int v5; // r10d
  int v6; // ebx
  int v7; // esi
  int v8; // ecx
  int v9; // r8d
  int v10; // edi

  v3 = a3[2];
  v5 = a3[3];
  v6 = *a3;
  v7 = v3 - *a3;
  v8 = a2[3] - a2[1];
  v9 = a3[1];
  v10 = v5 - v9;
  if ( v7 >= a2[2] - *a2 )
    v7 = a2[2] - *a2;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( v10 >= v8 )
    v10 = v8;
  if ( *(_DWORD *)(a1 + 8) < v3 )
  {
    if ( *(_DWORD *)a1 <= v6 )
    {
      *(_DWORD *)a1 = v6;
      *(_DWORD *)(a1 + 8) = v7 + v6;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v3;
    *(_DWORD *)a1 = v3 - v7;
  }
  if ( *(_DWORD *)(a1 + 12) < v5 )
  {
    if ( *(_DWORD *)(a1 + 4) <= v9 )
    {
      *(_DWORD *)(a1 + 4) = v9;
      *(_DWORD *)(a1 + 12) = v10 + v9;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = v5;
    *(_DWORD *)(a1 + 4) = v5 - v10;
  }
  return a1;
}
