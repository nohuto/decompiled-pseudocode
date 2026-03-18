/*
 * XREFs of ?bSaveAttributes@XEBRUSHOBJ@@IAEHXZ @ 0xA939C
 * Callers:
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall XEBRUSHOBJ::bSaveAttributes(XEBRUSHOBJ *this)
{
  _DWORD *v1; // edi
  _DWORD *v3; // esi

  v1 = *(_DWORD **)(*(_DWORD *)this + 32);
  if ( v1 != (_DWORD *)(*(_DWORD *)this + 48) )
  {
    v3 = (_DWORD *)(*(_DWORD *)this + 40);
    if ( v1 != v3 )
    {
      *v3 = *v1;
      v3[1] = v1[1];
      *(_DWORD *)(*(_DWORD *)this + 36) = *(_DWORD *)(*(_DWORD *)this + 32);
      *(_DWORD *)(*(_DWORD *)this + 32) = *(_DWORD *)this + 40;
      *((_DWORD *)this + 1) = 1;
    }
  }
  return 1;
}
