/*
 * XREFs of sub_180004DD8 @ 0x180004DD8
 * Callers:
 *     sub_180004CDC @ 0x180004CDC (sub_180004CDC.c)
 * Callees:
 *     sub_180004E94 @ 0x180004E94 (sub_180004E94.c)
 *     sub_1800355D8 @ 0x1800355D8 (sub_1800355D8.c)
 */

__int64 __fastcall sub_180004DD8(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  int v5; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = a1 + 40;
  v3 = 0;
  v4 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( v4 )
      v4 ^= v2;
    else
      v4 = 0LL;
  }
  v5 = *(_BYTE *)(v2 + 8) & 1;
  if ( !v4 )
    return (unsigned int)-1073741275;
  do
  {
    v7 = sub_1800355D8(&v9, v4);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v8 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v4;
    }
    if ( v5 && v8 )
      v4 ^= v8;
    else
      v4 = v8;
  }
  while ( v4 );
  if ( v4 )
  {
    sub_180004E94(v4 - 24, 0LL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(v4 - 24));
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
