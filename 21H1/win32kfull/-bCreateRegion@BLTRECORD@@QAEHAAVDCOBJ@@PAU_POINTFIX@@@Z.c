/*
 * XREFs of ?bCreateRegion@BLTRECORD@@QAEHAAVDCOBJ@@PAU_POINTFIX@@@Z @ 0x1EBFB9
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z @ 0x1ECB43 (-vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z.c)
 */

int __thiscall BLTRECORD::bCreateRegion(BLTRECORD *this, struct DCOBJ *a2, struct _POINTFIX *a3)
{
  int v4; // edi
  int v5; // ecx
  struct DCOBJ *v6; // eax
  _BYTE v8[8]; // [esp+Ch] [ebp-6Ch] BYREF
  int v9; // [esp+14h] [ebp-64h]
  struct DCOBJ *v10; // [esp+50h] [ebp-28h]
  struct _POINTFIX v11; // [esp+54h] [ebp-24h] BYREF
  struct _POINTL v12[3]; // [esp+5Ch] [ebp-1Ch] BYREF

  v10 = a2;
  BLTRECORD::vMirror(this, a3);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v8);
  if ( v9
    && (v11 = *a3,
        v12[0] = (struct _POINTL)a3[1],
        v12[1] = (struct _POINTL)a3[3],
        v12[2] = (struct _POINTL)a3[2],
        EPATHOBJ::bMoveTo((EPATHOBJ *)v8, 0, (struct _POINTL *)&v11))
    && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v8, 0, v12, 3u)
    && (v4 = 1,
        RGNMEMOBJ::vCreate((BLTRECORD *)((char *)this + 60), (struct EPATHOBJ *)v8, 1u, 0),
        (v5 = *((_DWORD *)this + 15)) != 0) )
  {
    v6 = v10;
    *((_DWORD *)this + 42) |= 4u;
    *(_DWORD *)(*(_DWORD *)v6 + 1144) = v5;
  }
  else
  {
    v4 = 0;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v8);
  return v4;
}
