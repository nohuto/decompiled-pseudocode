/*
 * XREFs of sub_18003B356 @ 0x18003B356
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 */

__int64 __fastcall sub_18003B356(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 48) = sub_18000FA80(
                           *(_QWORD *)(a2 + 40),
                           274,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           a4);
  return 0LL;
}
