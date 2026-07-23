/*
 * XREFs of IopPortFindSuitableRange @ 0x1407D0DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlFindRange @ 0x140760520 (RtlFindRange.c)
 */

char __fastcall IopPortFindSuitableRange(__int64 a1, unsigned __int64 *a2)
{
  char v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11

  v3 = 0;
  v4 = a2[5];
  v6 = *(_QWORD *)(v4 + 16);
  if ( !v6 )
  {
    a2[1] = *a2;
    return 1;
  }
  v7 = a2[4];
  if ( (*(_DWORD *)(v7 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v7 + 44) & 1) != 0 )
    v3 = 1;
  v8 = a2[2];
  v9 = a2[3];
  if ( v8 <= v9
    && ((int)RtlFindRange(
               *(_QWORD *)(a1 + 48),
               v8,
               v9,
               v6,
               *(_QWORD *)(v4 + 24),
               *(_BYTE *)(v4 + 36) & 1,
               v3,
               *(_QWORD *)(a1 + 328),
               *(_QWORD *)(a1 + 336),
               a2) >= 0
     || (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(a1 + 272))(a1, a2)) )
  {
    a2[1] = *a2 - 1 + *(_QWORD *)(a2[5] + 16);
    return 1;
  }
  return 0;
}
