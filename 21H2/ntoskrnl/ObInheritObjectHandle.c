/*
 * XREFs of ObInheritObjectHandle @ 0x140606624
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x140606580 (ExpDuplicateSingleHandle.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14021BFC0 (ObpIncrPointerCount.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfUnblockPushLock @ 0x1403F9560 (ExfUnblockPushLock.c)
 *     ObpIncrementHandleCountEx @ 0x1406F5F60 (ObpIncrementHandleCountEx.c)
 *     EtwTraceDuplicateHandle @ 0x140935AFC (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObInheritObjectHandle(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbp
  int v9; // ebx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v6 = (*(__int64 *)a4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCount((volatile signed __int64 *)v6);
  v12 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a4, 1uLL);
  _InterlockedOr(v11, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  v9 = ObpIncrementHandleCountEx(3, (unsigned int)&v12, a1, (int)v6 + 48, 0, 0, 0LL);
  if ( v9 < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)(v6 + 48));
  }
  else if ( (xmmword_140CFC490 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      v6 + 48,
      *(_DWORD *)(a1 + 1344),
      *(_DWORD *)(a1 + 1088),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 + 24) ^ (unsigned __int64)BYTE1(v6)]);
  }
  return (unsigned int)v9;
}
