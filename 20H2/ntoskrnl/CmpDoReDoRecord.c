/*
 * XREFs of CmpDoReDoRecord @ 0x140884A28
 * Callers:
 *     CmpRmReDoPhase @ 0x140877F30 (CmpRmReDoPhase.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403F9BF0 (ZwDeleteKey.c)
 *     CmpDoReDoCreateKey @ 0x1408848DC (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x1408849CC (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRenameKey @ 0x140884B08 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140884B64 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140884BD4 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140884C44 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140884CA4 (CmpDoReDoSetValueExisting.c)
 *     CmpDoReOpenTransKey @ 0x140884D18 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRecord(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 0x1C) == 0 )
  {
    switch ( *(_DWORD *)(a2 + 12) )
    {
      case 1:
        return (unsigned int)CmpDoReDoCreateKey(a1, a2);
      case 2:
        KeyHandle = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 0x10000LL, &KeyHandle);
        if ( v4 >= 0 )
        {
          v4 = ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
        return (unsigned int)v4;
      case 3:
      case 4:
        return (unsigned int)CmpDoReDoSetValueExisting();
      case 5:
        return (unsigned int)CmpDoReDoDeleteValue(a1, (UNICODE_STRING *)a2);
      case 6:
        return (unsigned int)CmpDoReDoSetKeyUserFlags();
      case 7:
        return (unsigned int)CmpDoReDoSetLastWriteTime();
      case 8:
        return (unsigned int)CmpDoReDoSetSecurityDescriptor();
      case 9:
        return (unsigned int)CmpDoReDoRenameKey();
      default:
        return v2;
    }
  }
  return 0LL;
}
