/*
 * XREFs of sub_180073264 @ 0x180073264
 * Callers:
 *     sub_180073FF0 @ 0x180073FF0 (sub_180073FF0.c)
 * Callees:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_1801339A4 @ 0x1801339A4 (sub_1801339A4.c)
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 */

__int64 __fastcall sub_180073264(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v1 = 0LL;
  sub_18005FECC(*a1);
  v3 = (__int64 *)a1[1];
  LOBYTE(v8) = 0;
  if ( v3 )
    v4 = *v3;
  else
    v4 = 0LL;
  result = sub_180136500(*a1, v4, &v8);
  if ( (unsigned int)dword_18019C4F0 > 5 )
  {
    v8 = result;
    v7 = (__int64 *)a1[1];
    if ( v7 )
      v1 = *v7;
    v9 = v1;
    return sub_1801339A4(v6, &unk_18016CC8D);
  }
  return result;
}
