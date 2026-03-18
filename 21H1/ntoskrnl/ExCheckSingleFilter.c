/*
 * XREFs of ExCheckSingleFilter @ 0x1405AD97C
 * Callers:
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     EtwTraceObjectOperation @ 0x1405A1DF0 (EtwTraceObjectOperation.c)
 *     EtwTracePool @ 0x1405A2104 (EtwTracePool.c)
 *     EtwTraceDuplicateHandle @ 0x14093124C (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x140931D74 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x140932DDC (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x140939650 (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x1409DA300 (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x1409DA34C (ViFaultsIsTagTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCheckSingleFilter(int a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v6 = a1;
  v2 = 0;
  v3 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 == 42 )
      return 1LL;
    if ( v4 != 63 && *((_BYTE *)&v6 + v3) != v4 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= 4 )
      return 1LL;
  }
  return 0LL;
}
