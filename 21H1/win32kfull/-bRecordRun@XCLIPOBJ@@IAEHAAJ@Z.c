/*
 * XREFs of ?bRecordRun@XCLIPOBJ@@IAEHAAJ@Z @ 0x237FC4
 * Callers:
 *     ?bRecordSegment@XCLIPOBJ@@IAEHXZ @ 0x23802E (-bRecordSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall XCLIPOBJ::bRecordRun(XCLIPOBJ *this, int *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = *a2;
  v3 = *((_DWORD *)this + 30);
  v4 = *(_DWORD *)(v3 + 20);
  if ( *a2 > v4 )
  {
    if ( v4 == *(_DWORD *)(v3 + 40) )
    {
      *(_DWORD *)(*(_DWORD *)(v3 + 36) - 4) = v2;
    }
    else
    {
      if ( **(_DWORD **)(v3 + 32) == *(_DWORD *)(v3 + 28) )
      {
        *(_DWORD *)(v3 + 24) = v2;
        return 0;
      }
      *(_DWORD *)(*(_DWORD *)(v3 + 36) + 4) = v2;
      **(_DWORD **)(*((_DWORD *)this + 30) + 36) = *(_DWORD *)(*((_DWORD *)this + 30) + 20) + 1;
      ++**(_DWORD **)(*((_DWORD *)this + 30) + 32);
      *(_DWORD *)(*((_DWORD *)this + 30) + 36) += 8;
    }
    *(_DWORD *)(*((_DWORD *)this + 30) + 40) = *a2;
  }
  return 1;
}
