/*
 * XREFs of IopIoRateStartRateControl @ 0x1402007C8
 * Callers:
 *     IoStartIoRateControl @ 0x1402006C0 (IoStartIoRateControl.c)
 * Callees:
 *     IoDiskIoAttributionQuery @ 0x1402074DC (IoDiskIoAttributionQuery.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopIoRateStartRateControl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 (__fastcall **ExtensionTable)(__int64, __int64, _QWORD, __int64, _QWORD *, __int64, __int64 *, __int64); // rbx
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // [rsp+50h] [rbp-61h] BYREF
  __int128 v16; // [rsp+58h] [rbp-59h] BYREF
  __int128 v17; // [rsp+68h] [rbp-49h]
  __int128 v18; // [rsp+78h] [rbp-39h] BYREF
  __m128i v19; // [rsp+88h] [rbp-29h]
  _QWORD v20[4]; // [rsp+98h] [rbp-19h] BYREF

  v15 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  ExtensionTable = (__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *, __int64, __int64 *, __int64))ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    IoDiskIoAttributionQuery(a5, &v18, &v16);
    v11 = *(_QWORD *)(a5 + 24);
    v20[2] = *((_QWORD *)&v17 + 1) + v19.m128i_i64[0];
    v20[3] = *((_QWORD *)&v17 + 1) + _mm_srli_si128(v19, 8).m128i_u64[0];
    v20[0] = v16 + v18;
    v20[1] = *((_QWORD *)&v16 + 1) + *((_QWORD *)&v18 + 1);
    v12 = (*ExtensionTable)(a1, 15LL, a3, a4, v20, v11, &v15, a7);
    if ( v12 >= 0 )
    {
      v13 = v15;
      v15 = 0LL;
      v12 = 0;
      *a6 = v13;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v12;
}
