/*
 * XREFs of ?DeleteCLIPOBJPath@UMPDOBJ@@QAEXPAU_PATHOBJ@@@Z @ 0x1F3A4D
 * Callers:
 *     _NtGdiEngDeletePath@4 @ 0x218152 (_NtGdiEngDeletePath@4.c)
 * Callees:
 *     <none>
 */

void __thiscall UMPDOBJ::DeleteCLIPOBJPath(UMPDOBJ *this, struct _PATHOBJ *a2)
{
  PATHOBJ *v3; // edi

  if ( a2 && a2 == *((struct _PATHOBJ **)this + 33) )
  {
    v3 = (PATHOBJ *)*((_DWORD *)this + 32);
    if ( v3 )
    {
      EPATHOBJ::vUnlock(*((EPATHOBJ **)this + 32));
      Win32FreePool(v3);
    }
    *((_DWORD *)this + 32) = 0;
    *((_DWORD *)this + 33) = 0;
  }
}
