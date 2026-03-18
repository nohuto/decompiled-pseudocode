/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x14035CCA0
 * Callers:
 *     PopUmpoProcessMessages @ 0x14070EB24 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14035CD00 (AlpcGetHeaderSize.c)
 */

__int64 __fastcall AlpcInitializeMessageAttribute(__int64 a1, _DWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // ebp
  unsigned int HeaderSize; // eax

  v7 = a1;
  HeaderSize = AlpcGetHeaderSize(a1);
  *a4 = HeaderSize;
  if ( HeaderSize > a3 )
    return 3221225507LL;
  if ( a2 )
  {
    a2[1] = 0;
    *a2 = v7;
  }
  return 0LL;
}
