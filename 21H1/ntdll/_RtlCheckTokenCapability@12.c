/*
 * XREFs of _RtlCheckTokenCapability@12 @ 0x4B2EF6F0
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetGroupSecurityDescriptor@12 @ 0x4B2D8680 (_RtlSetGroupSecurityDescriptor@12.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlIsCapabilitySid@4 @ 0x4B2D93E0 (_RtlIsCapabilitySid@4.c)
 *     _NtAccessCheck@32 @ 0x4B2F2960 (_NtAccessCheck@32.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _NtOpenThreadTokenEx@20 @ 0x4B2F2C70 (_NtOpenThreadTokenEx@20.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlCheckTokenCapability(void *a1, void *a2, _BYTE *a3)
{
  HANDLE v3; // eax
  int v4; // esi
  HANDLE v6; // [esp+10h] [ebp-188h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-184h] BYREF
  int v8; // [esp+18h] [ebp-180h] BYREF
  void *v9; // [esp+1Ch] [ebp-17Ch]
  int v10; // [esp+20h] [ebp-178h] BYREF
  int v11; // [esp+24h] [ebp-174h] BYREF
  int v12; // [esp+28h] [ebp-170h] BYREF
  _DWORD v13[6]; // [esp+2Ch] [ebp-16Ch] BYREF
  _DWORD v14[5]; // [esp+44h] [ebp-154h] BYREF
  void *Src; // [esp+58h] [ebp-140h] BYREF
  _DWORD v16[2]; // [esp+ACh] [ebp-ECh] BYREF
  __int16 v17; // [esp+B4h] [ebp-E4h]
  _BYTE v18[164]; // [esp+B8h] [ebp-E0h] BYREF
  _BYTE v19[56]; // [esp+15Ch] [ebp-3Ch] BYREF

  v6 = 0;
  v9 = a2;
  *a3 = 0;
  if ( !RtlIsCapabilitySid((int)a2) )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v3 = a1;
    v6 = a1;
    goto LABEL_4;
  }
  v4 = NtOpenThreadTokenEx(-2, 8, 1, 0, &v6);
  if ( v4 == -1073741700 )
  {
    v4 = ZwOpenProcessTokenEx(-1, 10, 0, &Handle);
    if ( v4 < 0 )
      goto LABEL_17;
    v13[0] = 24;
    v13[5] = v16;
    memset(&v13[1], 0, 16);
    v16[0] = 12;
    v16[1] = 2;
    v17 = 1;
    v4 = NtDuplicateToken(Handle, 8, v13, 0, 2, &v6);
    NtClose(Handle);
  }
  if ( v4 >= 0 )
  {
    v3 = v6;
LABEL_4:
    v8 = 76;
    ZwQueryInformationToken(v3, 1, &Src, 76, &v8);
    RtlCreateSecurityDescriptor(v14, 1);
    RtlSetOwnerSecurityDescriptor((int)v14, (int)Src, 0);
    RtlSetGroupSecurityDescriptor((int)v14, (int)Src, 0);
    RtlCreateAcl((int)v18, 0xA0u, 2u);
    RtlpAddKnownAce((int)v18, 2u, 0, 65537, (unsigned __int8 *)Src, 0);
    RtlpAddKnownAce((int)v18, 2u, 0, 65537, (unsigned __int8 *)v9, 0);
    RtlSetDaclSecurityDescriptor((int)v14, 1, (int)v18, 0);
    v10 = 56;
    v4 = NtAccessCheck(v14, v6, 65537, RtlpCheckTokenCapabilityGenericMapping, v19, &v10, &v12, &v11);
    if ( v4 >= 0 )
    {
      if ( !v11 && v12 == 65537 )
        *a3 = 1;
      v4 = 0;
    }
LABEL_9:
    if ( a1 )
      return v4;
  }
LABEL_17:
  if ( v6 )
    NtClose(v6);
  return v4;
}
