/*
 * XREFs of CmpVerifyLogRecord @ 0x1405C68FC
 * Callers:
 *     CmpRmReDoPhase @ 0x140871100 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x1405C68A0 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifyRenameKeyLogRecord @ 0x1405C69B8 (CmpVerifyRenameKeyLogRecord.c)
 *     CmpVerifySetOrDeleteValueLogRecord @ 0x1405C6A00 (CmpVerifySetOrDeleteValueLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x1405C6A68 (CmpVerifySetSecurityDescriptorLogRecord.c)
 *     HvBufferCheckSum @ 0x14074C7F8 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmpVerifyLogRecord(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax

  if ( a2 < 0x30 )
    return 3222863920LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > a2 )
    return 3222863920LL;
  if ( v4 < 0x30 )
    return 3222863920LL;
  if ( *(_DWORD *)a1 != (unsigned int)HvBufferCheckSum(a1, v4) )
    return 3222863920LL;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 >= 0xA )
    return 3222863920LL;
  if ( !v5 )
    return 0LL;
  if ( v5 <= 2 )
  {
    result = CmpVerifyCreateOrDeleteKeyLogRecord(a1);
    goto LABEL_23;
  }
  if ( v5 <= 5 )
  {
    result = CmpVerifySetOrDeleteValueLogRecord(a1);
    goto LABEL_23;
  }
  if ( v5 == 6 || v5 == 7 )
  {
    if ( v4 >= 0x38 )
    {
      v6 = *(unsigned __int16 *)(a1 + 32);
      if ( (v6 & 1) == 0 )
      {
        v7 = v6 + 56;
        if ( v7 >= 0x38 && v4 >= v7 )
          return 0LL;
      }
    }
    return 3222863920LL;
  }
  if ( v5 == 8 )
    result = CmpVerifySetSecurityDescriptorLogRecord(a1);
  else
    result = CmpVerifyRenameKeyLogRecord(a1);
LABEL_23:
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
