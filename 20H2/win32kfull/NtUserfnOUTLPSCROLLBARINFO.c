/*
 * XREFs of NtUserfnOUTLPSCROLLBARINFO @ 0x1C02063B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTLPSCROLLBARINFO(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-68h]
  __int128 v10; // [rsp+48h] [rbp-50h] BYREF
  __int128 v11; // [rsp+58h] [rbp-40h]
  __int128 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+80h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
  *(_QWORD *)(a4 + 48) = *(_QWORD *)(a4 + 48);
  v7 = *(_DWORD *)(a4 + 56);
  *(_DWORD *)(a4 + 56) = v7;
  v10 = *(_OWORD *)a4;
  v11 = *(_OWORD *)(a4 + 16);
  v12 = *(_OWORD *)(a4 + 32);
  v13 = *(_QWORD *)(a4 + 48);
  v14 = v7;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
         a1,
         a2,
         a3,
         &v10,
         a5);
  *(_OWORD *)a4 = v10;
  *(_OWORD *)(a4 + 16) = v11;
  *(_OWORD *)(a4 + 32) = v12;
  *(_QWORD *)(a4 + 48) = v13;
  *(_DWORD *)(a4 + 56) = v14;
  return v9;
}
