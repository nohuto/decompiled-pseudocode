/*
 * XREFs of HalpIommuLeaveDmaDomain @ 0x1404C9BD4
 * Callers:
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 *     HalpLeaveDmaDomain @ 0x1404C50EC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C90A0 (HalpIommuBlockDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA830 (IommuDomainDetachDevice.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C934C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C9834 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAttachDeviceDomain @ 0x1404CBE90 (HalpIommuAttachDeviceDomain.c)
 */

__int64 __fastcall HalpIommuLeaveDmaDomain(_QWORD *a1, ULONG_PTR a2)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( HalpHvIommu )
  {
    v4 = ((__int64 (__fastcall *)(_QWORD))qword_140C4A340)(a1[3]);
    if ( (_WORD)v4 == 118 )
      v4 = 0;
    if ( v4 < 0 )
      KeBugCheckEx(0x1D9u, 2uLL, v4, a2, 0LL);
    return (unsigned int)v4;
  }
  result = HalpIommuGetHardwareDomain(a2, a1[1], 0, 0, (__int64 *)&v7);
  v4 = result;
  if ( (int)result < 0 )
    return result;
  if ( HalpIommuSecurityPolicy != 1 || !*((_BYTE *)a1 + 16) )
  {
    if ( !HalpHvIommu )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1[1] + 120LL))(*(_QWORD *)(a1[1] + 16LL), *a1, 0LL);
    goto LABEL_14;
  }
  result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, a1[1], 0, 0, &v6);
  if ( (int)result >= 0 )
  {
    result = HalpIommuAttachDeviceDomain(a1[1], *a1, v6 + 32);
    v4 = result;
    if ( (int)result >= 0 )
    {
LABEL_14:
      if ( v7 )
        HalpIommuDereferenceHardwareDomain(a2, v7);
      return (unsigned int)v4;
    }
  }
  return result;
}
