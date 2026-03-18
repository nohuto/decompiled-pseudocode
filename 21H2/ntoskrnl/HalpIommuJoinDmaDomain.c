/*
 * XREFs of HalpIommuJoinDmaDomain @ 0x14051B384
 * Callers:
 *     HalpIommuUnblockDevice @ 0x14051BA00 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x140527CF0 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140527F70 (IommuDomainAttachDeviceEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuAttachDeviceDomain @ 0x140517D9C (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051A824 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x14051B094 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x14051B360 (HalpIommuIsInPermanentPassthrough.c)
 */

__int64 __fastcall HalpIommuJoinDmaDomain(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ebx
  char v8; // al
  __int64 v9; // rdx
  int v10; // ecx
  __int64 result; // rax
  _QWORD *v12; // r15
  _DWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  _QWORD *v16; // [rsp+70h] [rbp+20h] BYREF

  v16 = 0LL;
  if ( a3 )
    *a3 = 0;
  v5 = a1[3];
  if ( HalpHvIommu )
  {
    v6 = a1[4];
    v16 = 0LL;
    v13[1] = 0;
    v15 = 0LL;
    v14 = v6;
    LODWORD(v16) = *(_DWORD *)(a2 + 48);
    BYTE4(v16) = *(_BYTE *)(a2 + 52);
    v13[0] = 4;
    v7 = ((__int64 (__fastcall *)(_DWORD *, _QWORD **))qword_140C4C5F8)(v13, &v16);
    if ( v7 >= 0 )
      goto LABEL_19;
    return (unsigned int)v7;
  }
  if ( a2 != HalpIommuBypassDomain && HalpIommuIsInPermanentPassthrough((__int64)a1, a2) )
  {
    v7 = 0;
LABEL_19:
    a1[3] = a2;
    return (unsigned int)v7;
  }
  v8 = *(_BYTE *)(a2 + 52);
  v9 = a1[4];
  v10 = v8 != 0 ? 128 : 256;
  if ( (v10 & *(_DWORD *)(v9 + 472)) == v10 )
  {
    result = HalpIommuGetHardwareDomain(a2, v9, 1, 1, (__int64 *)&v16);
    if ( (int)result < 0 )
      return result;
    v12 = v16;
    v7 = HalpIommuAttachDeviceDomain(a1[4], a1[5], (__int64)(v16 + 4));
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        result = HalpIommuGetHardwareDomain(v5, a1[4], 0, 0, (__int64 *)&v16);
        v7 = result;
        if ( (int)result < 0 )
          return result;
        HalpIommuDereferenceHardwareDomain(v5, v16);
      }
      goto LABEL_19;
    }
    HalpIommuDereferenceHardwareDomain(a2, v12);
    return (unsigned int)v7;
  }
  if ( a3 )
    *a3 |= 1u;
  return 3221225520LL;
}
