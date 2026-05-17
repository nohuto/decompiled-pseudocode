/*
 * XREFs of _RtlpTpInitializeData@12 @ 0x4B2B1FE2
 * Callers:
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 * Callees:
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     _TpSetDefaultPoolMaxThreads@4 @ 0x4B383C20 (_TpSetDefaultPoolMaxThreads@4.c)
 */

int __fastcall RtlpTpInitializeData(_DWORD *a1, unsigned int a2, int a3)
{
  __int16 v4; // si
  int result; // eax

  v4 = a2;
  *a1 = 0;
  a1[1] = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 )
    return 0;
  if ( (v4 & 0x100) == 0 )
    return 0;
  result = NtDuplicateToken(a3, 4, 0, 0, 2, a1);
  if ( result >= 0 )
    return 0;
  return result;
}
