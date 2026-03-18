/*
 * XREFs of UserSetDCVisRgn @ 0x1C0013EE0
 * Callers:
 *     <none>
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C0014170 (CreateEmptyRgnPublic.c)
 *     IsGetStyleWindowSupported @ 0x1C0014408 (IsGetStyleWindowSupported.c)
 *     GreSetRectRgn @ 0x1C0014BB0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  int v2; // eax
  _DWORD *v3; // rbx
  int v4; // eax
  HPALETTE EmptyRgnPublic; // rsi
  int v6; // ebp
  HRGN v7; // rcx
  __int64 v8; // rbp
  HRGN v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( qword_1C0252598 )
    v2 = qword_1C0252598();
  else
    v2 = -1073741637;
  v3 = (_DWORD *)((char *)a1 + 64);
  if ( v2 < 0 )
    goto LABEL_14;
  v4 = qword_1C02525A0;
  if ( qword_1C02525A0 )
    v4 = ((__int64 (__fastcall *)(HRGN *, _QWORD, _QWORD, _QWORD))qword_1C02525A0)(
           &v9,
           *((_QWORD *)a1 + 2),
           *((_QWORD *)a1 + 3),
           (unsigned int)*v3);
  if ( v4 )
    *v3 &= ~0x10000000u;
  else
LABEL_14:
    *v3 |= 0x10000000u;
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && (!qword_1C02525B0 ? (v8 = 0LL) : (v8 = qword_1C02525B0(*((_QWORD *)a1 + 2), 2848LL)), v8) )
  {
    EmptyRgnPublic = (HPALETTE)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL);
    GreOffsetRgn((HRGN)EmptyRgnPublic);
    v6 = 1;
  }
  else
  {
    EmptyRgnPublic = (HPALETTE)*((_QWORD *)a1 + 6);
    v6 = 0;
  }
  if ( (*v3 & 0x80u) != 0 )
  {
    v7 = v9;
    if ( EmptyRgnPublic )
    {
LABEL_16:
      GreCombineRgn(v7, v7, (HRGN)EmptyRgnPublic);
      goto LABEL_12;
    }
  }
  else
  {
    if ( (*v3 & 0x40) == 0 )
      goto LABEL_12;
    v7 = v9;
    if ( EmptyRgnPublic != (HPALETTE)1 )
      goto LABEL_16;
  }
  GreSetRectRgn(v7, 0);
LABEL_12:
  ResetOrg(v9, a1, 1);
  if ( v6 )
    GreDeleteObject(EmptyRgnPublic);
}
