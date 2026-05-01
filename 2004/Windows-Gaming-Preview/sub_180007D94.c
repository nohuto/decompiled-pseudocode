/*
 * XREFs of sub_180007D94 @ 0x180007D94
 * Callers:
 *     sub_180007308 @ 0x180007308 (sub_180007308.c)
 *     sub_18000F52C @ 0x18000F52C (sub_18000F52C.c)
 *     sub_18003ADD8 @ 0x18003ADD8 (sub_18003ADD8.c)
 *     sub_18003AF70 @ 0x18003AF70 (sub_18003AF70.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 */

void __fastcall sub_180007D94(volatile signed __int32 *a1, int a2, int a3)
{
  int v6; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  if ( byte_18005A430 )
  {
    AcquireSRWLockExclusive(&stru_18005A438);
    if ( !a3 || a3 != dword_18005A44C || (v6 = a2, v7 = a1, !sub_180004C18(qword_18005A480, &v6, 0x10uLL)) )
      _InterlockedAnd(a1, a2 != 0 ? -3 : -264);
    ReleaseSRWLockExclusive(&stru_18005A438);
  }
}
