/*
 * XREFs of SddlpAlloc @ 0x1406FDB18
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140340880 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403BFB30 (SeConvertStringSidToSid.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406FB584 (LocalGetStringForControl.c)
 *     LocalpGetStringForCondition @ 0x1406FC3C8 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x1406FC7F0 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1406FC83C (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x1406FC990 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x1406FCAD0 (LocalConvertSidToStringSidW.c)
 *     LocalConvertAclToString @ 0x1406FCD64 (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x1406FD8FC (LookupSidInTable.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407837D4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1407B2F40 (LocalpConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x140928910 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x140929464 (AppendCondition.c)
 *     DecodeAttributeName @ 0x140929544 (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x1409296F8 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140929860 (GetAttributeName.c)
 *     GetOperandValue @ 0x140929D34 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x14092A318 (GetOperatorIndexByName.c)
 *     GetStringOperandValue @ 0x14092A4A0 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x14092A724 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14092AE10 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14092BA44 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
