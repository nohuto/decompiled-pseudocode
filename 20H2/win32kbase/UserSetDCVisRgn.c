/*
 * XREFs of UserSetDCVisRgn @ 0x1C001F800
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C001CDA0 (GreSetRectRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C001FA90 (CreateEmptyRgnPublic.c)
 *     IsGetStyleWindowSupported @ 0x1C001FD28 (IsGetStyleWindowSupported.c)
 *     GreOffsetRgn @ 0x1C0037F80 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  int v2; // eax
  _DWORD *v3; // rbx
  int v4; // eax
  HBRUSH EmptyRgnPublic; // rsi
  int v6; // ebp
  HRGN v7; // rcx
  __int64 v8; // rbp
  HRGN v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( qword_1C0250598 )
    v2 = qword_1C0250598();
  else
    v2 = -1073741637;
  v3 = (_DWORD *)((char *)a1 + 64);
  if ( v2 < 0 )
    goto LABEL_14;
  v4 = qword_1C02505A0;
  if ( qword_1C02505A0 )
    v4 = ((__int64 (__fastcall *)(HRGN *, _QWORD, _QWORD, _QWORD))qword_1C02505A0)(
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
    && (!qword_1C02505B0 ? (v8 = 0LL) : (v8 = qword_1C02505B0(*((_QWORD *)a1 + 2), 2848LL)), v8) )
  {
    EmptyRgnPublic = (HBRUSH)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL);
    GreOffsetRgn((HRGN)EmptyRgnPublic);
    v6 = 1;
  }
  else
  {
    EmptyRgnPublic = (HBRUSH)*((_QWORD *)a1 + 6);
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
    if ( EmptyRgnPublic != (HBRUSH)1 )
      goto LABEL_16;
  }
  GreSetRectRgn(v7, gZero.LowPart, gZero.HighPart, 0, 0);
LABEL_12:
  ResetOrg(v9, a1, 1);
  if ( v6 )
    GreDeleteObject(EmptyRgnPublic);
}
