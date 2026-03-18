/*
 * XREFs of HviGetIptFeatures @ 0x1405BD688
 * Callers:
 *     KiGetIptInfo @ 0x1403A7DD4 (KiGetIptInfo.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A8560 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BD5A0 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HviGetIptFeatures(_DWORD *a1)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX
    && (LOBYTE(_RAX) = HviGetHypervisorVendorAndMaxFunction(&v11), (unsigned int)v11 >= 0x4000000B)
    && (LOBYTE(_RAX) = HviGetHypervisorFeatures(&v12, v3, v4, v5), (HIDWORD(v12) & 0x8000000) != 0) )
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
