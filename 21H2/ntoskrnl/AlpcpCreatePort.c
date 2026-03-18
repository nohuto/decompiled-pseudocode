/*
 * XREFs of AlpcpCreatePort @ 0x1406679E8
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
