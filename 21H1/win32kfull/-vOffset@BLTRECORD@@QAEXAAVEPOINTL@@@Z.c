/*
 * XREFs of ?vOffset@BLTRECORD@@QAEXAAVEPOINTL@@@Z @ 0x1ECBC3
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall BLTRECORD::vOffset(BLTRECORD *this, struct EPOINTL *a2)
{
  *((_DWORD *)this + 17) += 16 * *(_DWORD *)a2;
  *((_DWORD *)this + 18) += 16 * *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 19) += 16 * *(_DWORD *)a2;
  *((_DWORD *)this + 20) += 16 * *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 21) += 16 * *(_DWORD *)a2;
  *((_DWORD *)this + 22) += 16 * *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 23) += 16 * *(_DWORD *)a2;
  *((_DWORD *)this + 24) += 16 * *((_DWORD *)a2 + 1);
}
