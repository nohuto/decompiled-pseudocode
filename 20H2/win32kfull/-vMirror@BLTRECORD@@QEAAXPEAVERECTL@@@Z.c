/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0069CA4
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028F1E0 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // ecx

  v2 = *((_DWORD *)this + 55);
  if ( (v2 & 8) != 0 )
  {
    v3 = *(_DWORD *)a2;
    *(_DWORD *)a2 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
    v2 = *((_DWORD *)this + 55);
  }
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v4;
  }
}
