/*
 * XREFs of sub_180035C14 @ 0x180035C14
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035C14(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  bool i; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = a1 + 64;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = v4 - 16;
  for ( i = v4 == v2; ; i = v8 == v9 )
  {
    if ( !i )
      v5 = v6;
    if ( !v5 || *(_BYTE *)(v5 + 40) == a2 )
      break;
    v8 = *(_QWORD *)(v5 + 16);
    v6 = v8 - 16;
    v9 = *(_QWORD *)(v5 + 8) + 64LL;
    v5 = 0LL;
  }
  return v5;
}
