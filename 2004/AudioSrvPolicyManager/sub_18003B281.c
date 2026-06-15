/*
 * XREFs of sub_18003B281 @ 0x18003B281
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 */

__int64 __fastcall sub_18003B281(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 80) = sub_18000FA80(
                           *(_QWORD *)(a2 + 72),
                           34,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           a4);
  return 0LL;
}
