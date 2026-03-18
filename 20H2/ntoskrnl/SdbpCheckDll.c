/*
 * XREFs of SdbpCheckDll @ 0x140A14080
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DC2B0 (KiSwInterruptDispatch.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409FB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A12D10 @ 0x140A12D10 (sub_140A12D10.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
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
