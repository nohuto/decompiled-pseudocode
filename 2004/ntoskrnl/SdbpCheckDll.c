/*
 * XREFs of SdbpCheckDll @ 0x140A0E080
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403D9620 (KiSwInterruptDispatch.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F5010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0CD10 @ 0x140A0CD10 (sub_140A0CD10.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
