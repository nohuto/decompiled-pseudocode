/*
 * XREFs of HvipApertureDetectParameters @ 0x140592D3C
 * Callers:
 *     HviEnterKernelAperture @ 0x140592C94 (HviEnterKernelAperture.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BBED0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1405BD520 (HviGetHardwareFeatures.c)
 */

char __fastcall HvipApertureDetectParameters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v9; // di
  char v10; // si
  char v16; // bl
  __int128 v18; // [rsp+20h] [rbp-50h]
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  v9 = 0;
  v20 = 0LL;
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v10 = 1, (_DWORD)_RCX != 1818588270) )
    v10 = 0;
  v18 = 0LL;
  v19 = 0LL;
  HviGetHypervisorFeatures(&v19, _RDX, a3, a4);
  _RAX = (unsigned __int64)v19 >> 44;
  if ( (v19 & 0x100000000000LL) != 0 )
  {
    LOBYTE(_RAX) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)_RAX )
    {
      _RAX = 1073741831LL;
      __asm { cpuid }
      BYTE8(v18) = _RCX;
    }
  }
  if ( (BYTE8(v18) & 1) != 0 )
  {
    v16 = 0;
    LOBYTE(_RAX) = HviGetHardwareFeatures(&v20);
    v9 = (v20 & 0x8000) != 0;
  }
  else
  {
    v16 = 1;
  }
  byte_140CF9ECC = v10;
  byte_140C12B42 = v16;
  byte_140CF9ECE = v9;
  byte_140CF9ECD = 1;
  return _RAX;
}
