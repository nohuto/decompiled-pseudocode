/*
 * XREFs of NtUserfnINLPDELETEITEMSTRUCT @ 0x1C0205110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPDELETEITEMSTRUCT(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int128 *v6; // r10
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h]

  v6 = (__int128 *)a4;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 >= MmUserProbeAddress )
    v6 = (__int128 *)MmUserProbeAddress;
  v8 = *v6;
  v9 = v6[1];
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v8,
           a5);
}
