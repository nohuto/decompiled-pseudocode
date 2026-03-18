/*
 * XREFs of SddlpAlloc @ 0x140690940
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1402E1F10 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403BC720 (SeConvertStringSidToSid.c)
 *     LookupSidInTable @ 0x1405E4BB8 (LookupSidInTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14068F104 (LocalGetStringForControl.c)
 *     LocalpGetStringForCondition @ 0x14068F6A4 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x14068FACC (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14068FB18 (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x14068FC6C (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x14068FDAC (LocalConvertSidToStringSidW.c)
 *     LocalConvertAclToString @ 0x14068FE40 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140772DC4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1407A168C (LocalpConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x140921838 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x14092238C (AppendCondition.c)
 *     DecodeAttributeName @ 0x14092246C (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x140922620 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140922788 (GetAttributeName.c)
 *     GetOperandValue @ 0x140922C5C (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140923240 (GetOperatorIndexByName.c)
 *     GetStringOperandValue @ 0x1409233C8 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x14092364C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140923D38 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14092496C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
