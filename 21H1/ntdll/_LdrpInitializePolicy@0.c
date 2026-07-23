/*
 * XREFs of _LdrpInitializePolicy@0 @ 0x4B2EBB2B
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrSetDllDirectory@4 @ 0x4B2ED420 (_LdrSetDllDirectory@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _LdrSetDefaultDllDirectories@4 @ 0x4B33CCA0 (_LdrSetDefaultDllDirectories@4.c)
 *     _AppModelPolicy_GetPolicy_Internal@20 @ 0x4B33D42C (_AppModelPolicy_GetPolicy_Internal@20.c)
 */

char __stdcall LdrpInitializePolicy()
{
  struct _PEB *v0; // esi
  _UNICODE_STRING *p_DllPath; // edi
  int v2; // eax
  int v4; // [esp+Ch] [ebp-54h] BYREF
  unsigned __int64 AttributesPresent; // [esp+10h] [ebp-50h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [esp+18h] [ebp-48h] BYREF
  unsigned __int64 v7; // [esp+20h] [ebp-40h] BYREF
  _PS_PKG_CLAIM v8; // [esp+28h] [ebp-38h] BYREF
  unsigned __int64 v9; // [esp+30h] [ebp-30h] BYREF
  _PS_PKG_CLAIM v10; // [esp+38h] [ebp-28h] BYREF
  unsigned __int64 v11; // [esp+40h] [ebp-20h] BYREF
  _PS_PKG_CLAIM v12; // [esp+48h] [ebp-18h] BYREF
  unsigned __int64 v13; // [esp+50h] [ebp-10h] BYREF
  _PS_PKG_CLAIM v14; // [esp+58h] [ebp-8h] BYREF

  v0 = NtCurrentPeb();
  p_DllPath = &v0->ProcessParameters->DllPath;
  RtlInitUnicodeString(&LdrpAppPackagesPath, 0);
  RtlInitUnicodeString(&LdrpOriginalAppPackagesPath, 0);
  LOBYTE(v2) = v0->BitField;
  if ( (v2 & 0x10) != 0 && p_DllPath->Length )
  {
    LdrpAppPackagesPath = *p_DllPath;
    LdrpOriginalAppPackagesPath = LdrpAppPackagesPath;
    LdrpPolicyBits = 41;
    if ( AppModelPolicy_GetPolicy_Internal((int)&v4, &PkgClaim, &AttributesPresent) < 0 || v4 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      LdrpPolicyBits &= ~1u;
    if ( AppModelPolicy_GetPolicy_Internal((int)&v4, &v8, &v7) >= 0 && v4 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( AppModelPolicy_GetPolicy_Internal((int)&v4, &v10, &v9) >= 0 && v4 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    if ( AppModelPolicy_GetPolicy_Internal((int)&v4, &v12, &v11) >= 0 && v4 == 2097153 )
      LdrpPolicyBits |= 4u;
    v2 = AppModelPolicy_GetPolicy_Internal((int)&v4, &v14, &v13) | 0x10000000;
    if ( v2 >= 0 && v4 == 3538945 )
      LdrpPolicyBits |= 0x100u;
  }
  else if ( (v2 & 2) != 0 )
  {
    LOBYTE(v2) = 0;
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LOBYTE(v2) = LdrSetDllDirectory(p_DllPath);
  }
  return v2;
}
