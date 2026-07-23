/*
 * XREFs of AlpcpCreatePort @ 0x1406D0684
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140608E98 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x1406CFCAC (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
