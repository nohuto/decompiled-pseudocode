/*
 * XREFs of NtAllocateReserveObject @ 0x1406B3300
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(__int64 *a1, int a2, signed int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  PADAPTER_OBJECT *p_DmaAdapter; // rcx
  __int64 result; // rax
  PADAPTER_OBJECT v9; // rbx
  int inserted; // edx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v11 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( (unsigned int)a3 > 1 )
    return 3221225485LL;
  p_DmaAdapter = &DmaAdapter;
  LOBYTE(p_DmaAdapter) = PreviousMode;
  result = ObCreateObjectEx((_DWORD)p_DmaAdapter, (unsigned int)*(&PspMemoryReserveObjectTypes + a3), a2, PreviousMode);
  if ( (int)result >= 0 )
  {
    v9 = DmaAdapter;
    memset(DmaAdapter, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      LODWORD(v9[1].DmaOperations) = 4;
      *(_QWORD *)&v9[4].Version = PspIoMiniPacketCallbackRoutine;
      v9[4].DmaOperations = (_DMA_OPERATIONS *)v9;
      LOBYTE(v9[5].Version) = 0;
    }
    inserted = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v11);
    LODWORD(DmaAdapter) = inserted;
    if ( inserted >= 0 )
      *a1 = v11;
    return (unsigned int)inserted;
  }
  return result;
}
