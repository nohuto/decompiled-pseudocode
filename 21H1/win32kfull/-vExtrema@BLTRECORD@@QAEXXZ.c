/*
 * XREFs of ?vExtrema@BLTRECORD@@QAEXXZ @ 0x1ECAD0
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     <none>
 */

void __thiscall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // ebx
  int v2; // eax
  int v3; // edi
  int v4; // edx
  int v5; // esi
  bool v6; // zf
  bool v7; // sf
  bool v8; // of
  int v9; // edx
  int v10; // [esp+Ch] [ebp-Ch]

  v1 = *((_DWORD *)this + 17);
  v2 = *((_DWORD *)this + 22) - *((_DWORD *)this + 18);
  v10 = *((_DWORD *)this + 18);
  v3 = *((_DWORD *)this + 19);
  v4 = v3 + *((_DWORD *)this + 21) - v1;
  *((_DWORD *)this + 23) = v4;
  v5 = v2 + *((_DWORD *)this + 20);
  v8 = __OFSUB__(v3, v4);
  v6 = v3 == v4;
  v7 = v3 - v4 < 0;
  v9 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 24) = v5;
  *((_DWORD *)this + 43) = (v3 > v1) ^ (v7 ^ v8 | v6);
  *((_DWORD *)this + 44) = (v9 > v10) ^ (v9 <= v5);
}
