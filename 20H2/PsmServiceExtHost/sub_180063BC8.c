/*
 * XREFs of sub_180063BC8 @ 0x180063BC8
 * Callers:
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 * Callees:
 *     sub_180063B70 @ 0x180063B70 (sub_180063B70.c)
 *     sub_180063C68 @ 0x180063C68 (sub_180063C68.c)
 */

__int64 __fastcall sub_180063BC8(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int128 v4; // rax
  unsigned int v6; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 *v12; // r9
  bool v13; // cc
  unsigned __int64 *v14; // rdx

  v3 = a2;
  v4 = a2 * (unsigned __int128)0x400uLL;
  v6 = 0;
  if ( is_mul_ok(a2, 0x400uLL) )
  {
    v8 = v4 / (unsigned __int64)a1[2];
    if ( v8 )
    {
      sub_180063B70(a1, v8, (__int64)a3);
      sub_180063C68(a3[3], v9, a3 + 3);
      sub_180063C68(a3[2], a3 + 2, a3 + 2);
      sub_180063C68(a3[1], v10, a3 + 1);
      sub_180063C68(*a3, v11, a3);
      v13 = *v12 <= v3;
      *v14 = v3;
      if ( !v13 )
        v3 = *v12;
      *v12 = v3;
    }
    else
    {
      return (unsigned int)-1073741676;
    }
  }
  else
  {
    return (unsigned int)-1073741675;
  }
  return v6;
}
