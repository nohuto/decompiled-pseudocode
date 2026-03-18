/*
 * XREFs of AlpcpCreatePort @ 0x14062C294
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406FA218 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
