/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x1407CBEF0
 * Callers:
 *     IoConnectInterruptEx @ 0x140761D90 (IoConnectInterruptEx.c)
 *     IoConnectInterrupt @ 0x1407CBE70 (IoConnectInterrupt.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140377D04 (KeVerifyGroupAffinity.c)
 *     HalGetVectorInput @ 0x1403CAA40 (HalGetVectorInput.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(__int64 a1, __int64 a2),
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        char a10,
        __int128 *a11)
{
  char v15; // bl
  __int128 v16; // xmm0
  char v17; // di
  __int64 result; // rax
  __int64 v19; // [rsp+48h] [rbp-91h]
  __int64 v20; // [rsp+68h] [rbp-71h] BYREF
  _OWORD v21[6]; // [rsp+70h] [rbp-69h] BYREF

  memset(v21, 0, sizeof(v21));
  v20 = 0LL;
  if ( !a3 || !KeVerifyGroupAffinity((__int64)a11, 0) )
    return 3221225485LL;
  v15 = a8;
  if ( a8 )
  {
    if ( a8 >= a7 )
      goto LABEL_5;
    return 3221225485LL;
  }
  v15 = a7;
LABEL_5:
  v16 = *a11;
  DWORD2(v21[0]) = 0;
  LOBYTE(v21[1]) = a7;
  v17 = 1;
  DWORD2(v21[1]) = a9;
  LODWORD(v21[0]) = 1;
  HIDWORD(v21[0]) = a6;
  v21[2] = v16;
  result = HalGetVectorInput(a6);
  if ( (int)result >= 0 )
  {
    ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])(0LL, 0LL);
    *a1 = 0LL;
    LODWORD(v21[4]) = 0;
    if ( (BYTE4(v21[4]) & 1) == 0 )
      v17 = a10;
    DWORD1(v21[1]) = 0;
    result = IopConnectInterrupt(&v20, a2, a3, 0LL, a4, 0, a5, v15, v17, v19, (__int64)v21);
    if ( (int)result >= 0 )
      *a1 = v20 + 112;
  }
  return result;
}
