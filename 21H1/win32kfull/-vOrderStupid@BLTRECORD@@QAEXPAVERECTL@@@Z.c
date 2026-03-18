/*
 * XREFs of ?vOrderStupid@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x7AF10
 * Callers:
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall BLTRECORD::vOrderStupid(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 > v3 )
  {
    *(_DWORD *)a2 = v3 + 1;
    *((_DWORD *)a2 + 2) = v2 + 1;
    *((_DWORD *)this + 42) ^= 8u;
  }
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( v4 > v5 )
  {
    *((_DWORD *)a2 + 1) = v5 + 1;
    *((_DWORD *)a2 + 3) = v4 + 1;
    *((_DWORD *)this + 42) ^= 0x10u;
  }
}
