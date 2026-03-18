/*
 * XREFs of ?vOrder@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1EFC08
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall BLTRECORD::vOrder(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // edx
  int v5; // esi

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 > v3 )
  {
    *(_DWORD *)a2 = v3;
    *((_DWORD *)a2 + 2) = v2;
    *((_DWORD *)this + 42) ^= 8u;
  }
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( v4 > v5 )
  {
    *((_DWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 3) = v4;
    *((_DWORD *)this + 42) ^= 0x10u;
  }
}
