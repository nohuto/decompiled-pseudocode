/*
 * XREFs of NullifyLookasideRef @ 0x1C012925C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C008BD10 (Win32FreeToPagedLookasideList.c)
 */

__int64 (*__fastcall NullifyLookasideRef(__int64 a1))(void)
{
  bool v1; // zf
  __int64 (*result)(void); // rax

  *(_QWORD *)a1 = 0LL;
  v1 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v1 )
    return Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, a1);
  return result;
}
