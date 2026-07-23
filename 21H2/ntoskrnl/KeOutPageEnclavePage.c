/*
 * XREFs of KeOutPageEnclavePage @ 0x140515570
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiEncls @ 0x1403FF240 (KiEncls.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiEnclsStatus @ 0x1405156B8 (KiEnclsStatus.c)
 */

__int64 __fastcall KeOutPageEnclavePage(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v5; // [rsp+A0h] [rbp+0h] BYREF

  memset((void *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 128), 0, 0x80uLL);
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  *(_QWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL)
                                                                      + 128;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 8) = a2;
  v3 = KiEncls(0xBu);
  return KiEnclsStatus(v3);
}
