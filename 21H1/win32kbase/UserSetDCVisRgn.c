/*
 * XREFs of UserSetDCVisRgn @ 0x1C00A7F90
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     CreateEmptyRgnPublic @ 0x1C00A8220 (CreateEmptyRgnPublic.c)
 *     IsGetStyleWindowSupported @ 0x1C00A84B8 (IsGetStyleWindowSupported.c)
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  int v2; // eax
  _DWORD *v3; // rbx
  int v4; // eax
  struct HOBJ__ *EmptyRgnPublic; // rsi
  int v6; // ebp
  HRGN v7; // rcx
  int v8; // r9d
  __int64 v9; // rbp
  HRGN v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( qword_1C0258558 )
    v2 = qword_1C0258558();
  else
    v2 = -1073741637;
  v3 = (_DWORD *)((char *)a1 + 64);
  if ( v2 < 0 )
    goto LABEL_14;
  v4 = (int)qword_1C0258560;
  if ( qword_1C0258560 )
    v4 = qword_1C0258560(&v10, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), (unsigned int)*v3);
  if ( v4 )
    *v3 &= ~0x10000000u;
  else
LABEL_14:
    *v3 |= 0x10000000u;
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && (!qword_1C0258570 ? (v9 = 0LL) : (v9 = qword_1C0258570(*((_QWORD *)a1 + 2), 2848LL)), v9) )
  {
    EmptyRgnPublic = (struct HOBJ__ *)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(
      (HRGN)EmptyRgnPublic,
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL),
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 92LL));
    v6 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v6 = 0;
  }
  if ( (*v3 & 0x80u) != 0 )
  {
    v7 = v10;
    if ( EmptyRgnPublic )
    {
      v8 = 1;
LABEL_17:
      GreCombineRgn(v7, v7, (HRGN)EmptyRgnPublic, v8);
      goto LABEL_12;
    }
  }
  else
  {
    if ( (*v3 & 0x40) == 0 )
      goto LABEL_12;
    v7 = v10;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v8 = 4;
      goto LABEL_17;
    }
  }
  GreSetRectRgn(v7, 0);
LABEL_12:
  ResetOrg(v10, a1, 1);
  if ( v6 )
    GreDeleteObject(EmptyRgnPublic);
}
