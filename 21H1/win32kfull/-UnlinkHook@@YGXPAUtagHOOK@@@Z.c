/*
 * XREFs of ?UnlinkHook@@YGXPAUtagHOOK@@@Z @ 0x12F22
 * Callers:
 *     _FreeThreadsWindowHooks@0 @ 0x12E20 (_FreeThreadsWindowHooks@0.c)
 *     _FreeHook@4 @ 0x12EC8 (_FreeHook@4.c)
 * Callees:
 *     <none>
 */

void __thiscall UnlinkHook(int this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int *i; // edx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax

  if ( (*(_BYTE *)(this + 32) & 1) != 0 )
  {
    v2 = *(_DWORD *)(this + 24);
    v3 = v2 + 6;
    v1 = *(_DWORD *)(*(_DWORD *)(this + 8) + 252);
  }
  else
  {
    v1 = *(_DWORD *)(this + 40);
    if ( !v1 )
      return;
    v2 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 40) = 0;
    v3 = v2 + 129;
  }
  for ( i = (int *)(v1 + 4 * v3); ; i = (int *)(v5 + 20) )
  {
    v5 = *i;
    if ( *i == this )
      break;
    if ( !v5 )
      goto LABEL_13;
  }
  if ( v5 )
    goto LABEL_7;
LABEL_13:
  for ( i = (int *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 4) + 24 + 4 * v2); ; i = (int *)(v7 + 20) )
  {
    v7 = *i;
    if ( *i == this || !v7 )
      break;
  }
LABEL_7:
  *i = *(_DWORD *)(this + 20);
  *(_DWORD *)(this + 20) = 0;
  v6 = (_DWORD *)(this + 44);
  if ( *v6 )
    UnlockObjectAssignment(v6);
}
