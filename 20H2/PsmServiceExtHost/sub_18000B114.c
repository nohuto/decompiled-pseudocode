/*
 * XREFs of sub_18000B114 @ 0x18000B114
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 * Callees:
 *     sub_18003414C @ 0x18003414C (sub_18003414C.c)
 */

unsigned __int64 __fastcall sub_18000B114(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v5; // rbx
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax

  v3 = a1 + 72;
  v5 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 && v5 )
    v5 ^= v3;
  v6 = *(_BYTE *)(v3 + 8) & 1;
  while ( v5 )
  {
    v7 = sub_18003414C(a2, v5, a3);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        return v5;
      v8 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v5;
    }
    if ( v6 && v8 )
      v5 ^= v8;
    else
      v5 = v8;
  }
  return v5;
}
