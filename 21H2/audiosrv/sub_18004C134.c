/*
 * XREFs of sub_18004C134 @ 0x18004C134
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 */

char __fastcall sub_18004C134(_QWORD *a1)
{
  char v1; // bl
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  _OWORD v11[3]; // [rsp+20h] [rbp-48h]

  v1 = 0;
  v11[0] = xmmword_18015B770;
  v3 = 3;
  v11[1] = xmmword_18015B760;
  v11[2] = xmmword_18015B750;
  if ( (unsigned __int8)sub_18006C4AC(a1)
    && (unsigned int)IsDolbyMatSupportedByAudioDriver(v5, v4, v6, v7, *(_QWORD *)&v11[0], *((_QWORD *)&v11[0] + 1)) )
  {
    v3 = 2;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)&v11[v8] - *a1;
    if ( !v9 )
      v9 = *((_QWORD *)&v11[v8] + 1) - a1[1];
    if ( !v9 )
      break;
    if ( ++v8 >= v3 )
      return v1;
  }
  return 1;
}
