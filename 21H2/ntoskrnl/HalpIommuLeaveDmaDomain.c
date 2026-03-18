/*
 * XREFs of HalpIommuLeaveDmaDomain @ 0x14051B4F4
 * Callers:
 *     HalpIommuBlockDevice @ 0x14051A460 (HalpIommuBlockDevice.c)
 *     IommuDomainDetachDevice @ 0x140528160 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x140528320 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuAttachDeviceDomain @ 0x140517D9C (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051A824 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x14051B094 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x14051B360 (HalpIommuIsInPermanentPassthrough.c)
 */

__int64 __fastcall HalpIommuLeaveDmaDomain(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( HalpHvIommu )
  {
    v4 = ((__int64 (__fastcall *)(_QWORD))qword_140C4C600)(*(_QWORD *)(a1 + 32));
    v5 = v4;
    if ( (_WORD)v4 != 118 )
    {
      if ( v4 < 0 )
        KeBugCheckEx(0x1D9u, 2uLL, v4, a2, 0LL);
      goto LABEL_17;
    }
LABEL_6:
    v5 = 0;
LABEL_17:
    *(_QWORD *)(a1 + 24) = 0LL;
    return v5;
  }
  if ( HalpIommuIsInPermanentPassthrough(a1, a2) )
    goto LABEL_6;
  result = HalpIommuGetHardwareDomain(a2, *(_QWORD *)(a1 + 32), 0, 0, (__int64 *)&v8);
  v5 = result;
  if ( (int)result < 0 )
    return result;
  if ( HalpIommuSecurityPolicy != 1 || !*(_BYTE *)(a1 + 56) )
  {
    if ( !HalpHvIommu )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL),
        *(_QWORD *)(a1 + 40),
        0LL);
    goto LABEL_15;
  }
  result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, *(_QWORD *)(a1 + 32), 0, 0, &v7);
  if ( (int)result >= 0 )
  {
    result = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v7 + 32);
    v5 = result;
    if ( (int)result >= 0 )
    {
LABEL_15:
      if ( v8 )
        HalpIommuDereferenceHardwareDomain(a2, v8);
      goto LABEL_17;
    }
  }
  return result;
}
