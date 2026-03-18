/*
 * XREFs of ?vMirror@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x7B4CE
 * Callers:
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EFAF2 (-bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall BLTRECORD::vMirror(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = *((_DWORD *)this + 42);
  if ( (v2 & 8) != 0 )
  {
    v3 = *(_DWORD *)a2;
    *(_DWORD *)a2 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
    v2 = *((_DWORD *)this + 42);
  }
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v4;
  }
}
