/*
 * XREFs of HviGetIptFeatures @ 0x1405BF0D8
 * Callers:
 *     KiGetIptInfo @ 0x1403AD944 (KiGetIptInfo.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403AE200 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403AE240 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BEFF0 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HviGetIptFeatures(_DWORD *a1)
{
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX
    && (LOBYTE(_RAX) = HviGetHypervisorVendorAndMaxFunction(&v8), (unsigned int)v8 >= 0x4000000B)
    && (LOBYTE(_RAX) = HviGetHypervisorFeatures(&v9), (HIDWORD(v9) & 0x8000000) != 0) )
  {
    _RAX = 1073741835LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
