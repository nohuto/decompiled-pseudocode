/*
 * XREFs of ?CleanupActivationFiltersForDesktop@@YGXPAUtagDESKTOP@@@Z @ 0xD35E4
 * Callers:
 *     ?CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z @ 0xAC5A0 (-CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall CleanupActivationFiltersForDesktop(_DWORD *this)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  _DWORD *v5; // ecx

  v1 = this + 48;
  v2 = (_DWORD *)this[48];
  if ( v2 && v2 != v1 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      v4 = v2;
      v2 = v3;
      if ( (_DWORD *)v3[1] != v4 || (v5 = (_DWORD *)v4[1], (_DWORD *)*v5 != v4) )
        __fastfail(3u);
      *v5 = v3;
      v3[1] = v5;
      HMAssignmentUnlock(v4 + 2);
      Win32FreePool(v4);
    }
    while ( v2 != v1 );
  }
}
