/*
 * XREFs of sub_180017610 @ 0x180017610
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 */

__int64 __fastcall sub_180017610(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  __int64 **v5; // r8
  __int64 *i; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 240);
  if ( !v2 )
    return 0LL;
  v4 = -2147023728;
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 168));
  v5 = (__int64 **)(v2 + 120);
  for ( i = *(__int64 **)(v2 + 120); i && i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v7 = (__int64 *)*i;
    if ( i == *v5 )
      *v5 = v7;
    else
      *(_QWORD *)i[1] = v7;
    v8 = i[1];
    if ( i == *(__int64 **)(v2 + 128) )
      *(_QWORD *)(v2 + 128) = v8;
    else
      *(_QWORD *)(*i + 8) = v8;
    *i = *(_QWORD *)(v2 + 152);
    v9 = (*(_QWORD *)(v2 + 136))-- == 1LL;
    *(_QWORD *)(v2 + 152) = i;
    if ( v9 )
      sub_180017F24(v2 + 120);
    v4 = 0;
  }
  if ( v2 != -168 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 168));
  if ( v4 >= 0 )
    return 0LL;
  sub_180003AB0(
    retaddr,
    4804,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    v4);
  return (unsigned int)v4;
}
