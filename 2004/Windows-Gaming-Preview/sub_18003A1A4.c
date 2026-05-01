/*
 * XREFs of sub_18003A1A4 @ 0x18003A1A4
 * Callers:
 *     sub_1800285F8 @ 0x1800285F8 (sub_1800285F8.c)
 *     sub_180028818 @ 0x180028818 (sub_180028818.c)
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_18002BB40 @ 0x18002BB40 (sub_18002BB40.c)
 *     sub_18002BD00 @ 0x18002BD00 (sub_18002BD00.c)
 *     sub_180038D10 @ 0x180038D10 (sub_180038D10.c)
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 */

_QWORD *__fastcall sub_18003A1A4(__int64 a1, unsigned __int8 a2)
{
  int v3; // edi
  _QWORD *v4; // rcx
  _QWORD *j; // rax
  __int64 **v6; // rdx
  __int64 i; // rdx
  __int64 *v8; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  if ( !*(_QWORD *)(a1 + 88) )
    sub_180012300(
      retaddr,
      680,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      -2147418113);
  v4 = *(_QWORD **)(a1 + 80);
  j = (_QWORD *)*v4;
  while ( j != v4 )
  {
    if ( ((*(_DWORD *)(j[6] + 32LL) >> 10) & 1) == v3 )
      return j + 4;
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v8 = *v6;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  j = (_QWORD *)*v4;
  return j + 4;
}
