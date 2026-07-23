/*
 * XREFs of HalpAuditEnumerateRsdts @ 0x140A66638
 * Callers:
 *     HalpAuditAcpiTables @ 0x140A66350 (HalpAuditAcpiTables.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A666CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6686C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditAllocateRsdtArrayTable @ 0x140A668DC (HalpAuditAllocateRsdtArrayTable.c)
 */

__int64 __fastcall HalpAuditEnumerateRsdts(__int64 a1, PVOID *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // r8
  unsigned int v7; // [rsp+40h] [rbp+20h] BYREF
  int v8; // [rsp+44h] [rbp+24h]
  PVOID P; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h] BYREF

  v8 = HIDWORD(a1);
  v10 = 0LL;
  v7 = 0;
  P = 0LL;
  v4 = HalpAuditAllocateRsdtArrayTable(&P);
  if ( v4 >= 0 )
  {
    if ( (int)HalpAuditGetExtendedBiosDataArea(v3, &v10, &v7) < 0
      || (LOBYTE(v5) = 1, v4 = HalpAuditEnumerateRsdtsInRange(v10, v7, v5, &P), v4 >= 0) )
    {
      v4 = HalpAuditEnumerateRsdtsInRange(917504LL, 0x20000LL, 0LL, &P);
    }
  }
  if ( v4 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    *a2 = P;
  }
  return (unsigned int)v4;
}
