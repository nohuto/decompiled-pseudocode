/*
 * XREFs of RaidSrbIsPowerRequired @ 0x1C0035210
 * Callers:
 *     RaUnitStartIo @ 0x1C0004F30 (RaUnitStartIo.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidSrbIsPowerRequired(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  bool v8; // zf
  __int64 v9; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_DWORD *)(a2 + 20);
  else
    v3 = *(unsigned __int8 *)(a2 + 2);
  if ( v3 > 0x10 )
    return v3 >= 0x12 && (v3 <= 0x13 || v3 == 23 || v3 == 32 || v3 - 36 <= 1);
  if ( v3 == 16 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 )
      LOBYTE(v9) = *(_BYTE *)(v9 + 532) & 0x10;
    v8 = (_BYTE)v9 == 0;
    return !v8;
  }
  if ( !v3 )
    return 1;
  v4 = v3 - 2;
  if ( !v4 )
    return 1;
  v5 = v4 - 5;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 395LL) == 0;
    return !v8;
  }
  return v6 == 1;
}
