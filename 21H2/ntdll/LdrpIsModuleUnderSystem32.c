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
  unsigned __int16 v3[12]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = *(_OWORD *)(a1 + 72);
  v3[0] = LdrpSystem32;
  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)LdrpSystem32
                                                                                      + 2 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * ((unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1)) != 92 )
    return 0;
  v1 = 1;
  if ( (unsigned int)RtlCompareUnicodeString(v3, (unsigned __int16 *)&LdrpSystem32, 1) )
    return 0;
  return v1;
}
