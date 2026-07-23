/*
 * XREFs of CmpDoReDoRecord @ 0x140882118
 * Callers:
 *     CmpRmReDoPhase @ 0x140875980 (CmpRmReDoPhase.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405CD898 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoCreateKey @ 0x140881FCC (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x1408820BC (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRenameKey @ 0x140882200 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x14088225C (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x1408822CC (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x14088233C (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x14088239C (CmpDoReDoSetValueExisting.c)
 *     CmpDoReOpenTransKey @ 0x140882410 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRecord(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  NTSTATUS v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 0x1C) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    if ( v3 > 6 )
    {
      v10 = v3 - 7;
      if ( !v10 )
        return (unsigned int)CmpDoReDoSetLastWriteTime();
      v11 = v10 - 1;
      if ( !v11 )
        return (unsigned int)CmpDoReDoSetSecurityDescriptor();
      v12 = v11 - 1;
      if ( !v12 )
        return (unsigned int)CmpDoReDoRenameKey();
      if ( v12 == 1 )
        return (unsigned int)CmpDoReDoSetEntireSecurityDescriptor(a1, a2);
    }
    else
    {
      if ( v3 == 6 )
        return (unsigned int)CmpDoReDoSetKeyUserFlags();
      v4 = v3 - 1;
      if ( !v4 )
        return (unsigned int)CmpDoReDoCreateKey(a1, a2);
      v5 = v4 - 1;
      if ( !v5 )
      {
        KeyHandle = 0LL;
        v9 = CmpDoReOpenTransKey(a1, a2 + 32, 0x10000LL, &KeyHandle);
        if ( v9 >= 0 )
        {
          v9 = ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
        return (unsigned int)v9;
      }
      v6 = v5 - 1;
      if ( !v6 || (v7 = v6 - 1) == 0 )
        return (unsigned int)CmpDoReDoSetValueExisting();
      if ( v7 == 1 )
        return (unsigned int)CmpDoReDoDeleteValue(a1, (UNICODE_STRING *)a2);
    }
    return v2;
  }
  return 0LL;
}
