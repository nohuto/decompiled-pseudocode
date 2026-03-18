/*
 * XREFs of ExpPartitionCreatePool @ 0x140851DAC
 * Callers:
 *     ExAllocatePrivateWorkerPool @ 0x140851D88 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeGetCurrentNode @ 0x1403D4F3C (KeGetCurrentNode.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408520BC (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePool(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned int v7; // ecx
  unsigned int v8; // esi
  _WORD *CurrentNode; // r14
  __int64 result; // rax
  unsigned __int16 v11; // bp
  __int64 v12; // [rsp+70h] [rbp+8h]
  signed int v13; // [rsp+80h] [rbp+18h]

  do
  {
    v6 = !_BitScanForward(&v7, *(_DWORD *)(a1 + 24));
    v13 = v7;
    if ( v6 )
      return 3221225495LL;
  }
  while ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), v7) );
  v8 = v7;
  CurrentNode = (_WORD *)KeGetCurrentNode();
  if ( (_UNKNOWN *)KeNodeBlock[(unsigned __int16)*CurrentNode] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                             + 280 * (unsigned __int16)*CurrentNode) )
    CurrentNode = 0LL;
  result = ExpPartitionCreatePoolInternal(a1, 1, 16, (_DWORD)CurrentNode, v13);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( KeNumberNodes )
    {
      v12 = (2 * ((unsigned __int16)*CurrentNode & 0x7Fu)) | 1LL;
      do
      {
        if ( v11 != *CurrentNode )
        {
          v8 = v13;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v11) + 8LL * v13) = v12;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v11) + 16LL), 0, 0);
        }
        ++v11;
      }
      while ( v11 < (unsigned __int16)KeNumberNodes );
    }
    *a4 = v8;
    result = 0LL;
    v8 = 8;
  }
  if ( v8 != 8 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), v8);
  return result;
}
