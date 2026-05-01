/*
 * XREFs of sub_180004E94 @ 0x180004E94
 * Callers:
 *     sub_180004DD8 @ 0x180004DD8 (sub_180004DD8.c)
 *     sub_18006A338 @ 0x18006A338 (sub_18006A338.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 */

_QWORD *__fastcall sub_180004E94(_QWORD *a1, char a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx

  result = (_QWORD *)sub_180008938(a1 + 1);
  if ( !(_DWORD)result )
  {
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (result = (_QWORD *)v5[1], (_QWORD *)*result != v5) )
      __fastfail(3u);
    *result = v6;
    *(_QWORD *)(v6 + 8) = result;
  }
  v7 = (void *)a1[6];
  if ( v7 )
    result = (_QWORD *)sub_1800265B0(v7);
  if ( (a2 & 1) == 0 && a1[5] != -1LL )
    return (_QWORD *)RtlRbRemoveNode(a1[7] + 40LL, a1 + 3);
  return result;
}
