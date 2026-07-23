/*
 * XREFs of LdrpIsModuleUnderSystem32 @ 0x18007C6B0
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 */

char __fastcall LdrpIsModuleUnderSystem32(__int64 a1)
{
  char v1; // bl
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  String1 = *(_UNICODE_STRING *)(a1 + 72);
  String1.Length = LdrpSystem32.Length;
  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)LdrpSystem32.Length
                                                                                      + 2 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * ((unsigned __int64)LdrpSystem32.Length >> 1)) != 92 )
    return 0;
  v1 = 1;
  if ( RtlCompareUnicodeString(&String1, &LdrpSystem32, 1u) )
    return 0;
  return v1;
}
