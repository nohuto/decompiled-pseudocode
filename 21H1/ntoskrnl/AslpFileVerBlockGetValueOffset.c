/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x1403B9558
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14079A6A0 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerStringBlockGetValue @ 0x14079AA98 (AslpFileVerStringBlockGetValue.c)
 *     AslpFileVerQueryBlock @ 0x14079AC74 (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1402E535C (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall AslpFileVerBlockGetValueOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  size_t *v4; // r11
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  pcbLength = 0LL;
  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return -1073741811;
  result = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a2 + 6), a3 - 6, &pcbLength);
  if ( result >= 0 )
  {
    if ( pcbLength + 8 < pcbLength )
    {
      return -1073741675;
    }
    else
    {
      *v4 = (pcbLength + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0;
    }
  }
  return result;
}
