/*
 * XREFs of SddlpAlloc @ 0x140642A7C
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140271FB0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403BD6B0 (SeConvertStringSidToSid.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14063EFE4 (LocalGetStringForControl.c)
 *     LocalpGetStringForCondition @ 0x1406417E0 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x140641C08 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x140641C54 (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x140641DA8 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x140641EE8 (LocalConvertSidToStringSidW.c)
 *     LocalConvertAclToString @ 0x140641F7C (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x14068E37C (LookupSidInTable.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407751D4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1407A3C10 (LocalpConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x140922AE8 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x14092363C (AppendCondition.c)
 *     DecodeAttributeName @ 0x14092371C (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x1409238D0 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140923A38 (GetAttributeName.c)
 *     GetOperandValue @ 0x140923F0C (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409244F0 (GetOperatorIndexByName.c)
 *     GetStringOperandValue @ 0x140924678 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1409248FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140924FE8 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x140925C1C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
