/*
 * XREFs of ClrFTrueVis @ 0x1C001AE1C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ClrFTrueVis @ 0x1C001AE1C (ClrFTrueVis.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 * Callees:
 *     ClrFTrueVis @ 0x1C001AE1C (ClrFTrueVis.c)
 *     DecPaintCount @ 0x1C001B304 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

char __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v1 + 136) || (LOBYTE(v1) = *(_BYTE *)(v1 + 17), (v1 & 0x10) != 0) )
  {
    DeleteMaybeSpecialRgn();
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL) = 0LL;
    LOBYTE(v1) = DecPaintCount(a1);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
  {
    v1 = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(v1 + 31) & 0x10) != 0 )
      LOBYTE(v1) = ClrFTrueVis(i);
  }
  return v1;
}
