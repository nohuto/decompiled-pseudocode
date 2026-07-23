/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x1407B2F54
 * Callers:
 *     AslpFileQueryVersionString @ 0x1407B2FFC (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1403BD9C8 (AslpFileVerBlockGetValueOffset.c)
 */

NTSTATUS __fastcall AslpFileVerStringBlockGetValue(__int64 *a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  size_t v7; // rbx
  NTSTATUS result; // eax
  size_t v10; // rdi
  __int64 v11; // r11
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( result >= 0 )
  {
    if ( v12 > a4 )
    {
      return -1073741811;
    }
    else
    {
      if ( v12 == a4 )
      {
        v11 = a3 + v12 - 2;
      }
      else
      {
        v10 = a4 - v12;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)(v12 + a3), v10, &pcbLength) < 0 )
        {
          v7 = v10 - 2;
          *(_WORD *)(v11 + 2 * ((v10 - 2) >> 1)) = 0;
        }
        else
        {
          v7 = pcbLength;
        }
      }
      result = 0;
      *a2 = v7 >> 1;
      *a1 = v11;
    }
  }
  return result;
}
