/*
 * XREFs of ExCheckSingleFilter @ 0x14063A59C
 * Callers:
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     EtwTraceObjectOperation @ 0x14062DD68 (EtwTraceObjectOperation.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     EtwTraceDuplicateHandle @ 0x1409E1FA0 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1409E2AC8 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1409E3B48 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EA760 (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x140A976A8 (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x140A976F4 (ViFaultsIsTagTarget.c)
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
