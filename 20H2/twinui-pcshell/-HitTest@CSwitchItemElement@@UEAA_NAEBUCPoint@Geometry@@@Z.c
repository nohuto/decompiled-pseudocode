/*
 * XREFs of ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803A09A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1803A05A8 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1803A14E4 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 */

bool __fastcall CSwitchItemElement::HitTest(CSwitchItemElement *this, struct tagPOINT *a2)
{
  int v4; // r8d
  int v5; // edx
  int v6; // r11d
  int v7; // r9d
  int v8; // r10d
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v17; // [rsp+60h] [rbp+10h] BYREF
  char v18; // [rsp+68h] [rbp+18h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  CSwitchItemElement::_GetLayoutRects(
    this,
    (struct Geometry::CRect *)&v15,
    (struct Geometry::CRect *)&v14,
    (struct Geometry::CRect *)&v16);
  v4 = HIDWORD(v15);
  v5 = HIDWORD(v14);
  v6 = DWORD2(v14);
  v7 = DWORD1(v14);
  v8 = v14;
  if ( SHIDWORD(v16) > SHIDWORD(v14) )
    v5 = HIDWORD(v16);
  if ( SDWORD2(v16) > SDWORD2(v14) )
    v6 = DWORD2(v16);
  if ( SDWORD1(v16) < SDWORD1(v14) )
    v7 = DWORD1(v16);
  v9 = v15;
  if ( (int)v16 < (int)v14 )
    v8 = v16;
  v10 = DWORD1(v15);
  if ( v5 > SHIDWORD(v15) )
    v4 = v5;
  v11 = DWORD2(v15);
  HIDWORD(v15) = v4;
  if ( v6 > SDWORD2(v15) )
    v11 = v6;
  DWORD2(v15) = v11;
  if ( v7 < SDWORD1(v15) )
    v10 = v7;
  DWORD1(v15) = v10;
  if ( v8 < (int)v15 )
    v9 = v8;
  LODWORD(v15) = v9;
  v12 = (_DWORD *)(*(__int64 (__fastcall **)(CSwitchItemElement *, char *))(*(_QWORD *)this + 120LL))(this, &v18);
  v17 = *a2;
  v17.x += *v12;
  v17.y += v12[1];
  return Geometry::CRect::Contains((Geometry::CRect *)&v15, &v17);
}
