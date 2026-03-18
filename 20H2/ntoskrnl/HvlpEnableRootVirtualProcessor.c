/*
 * XREFs of HvlpEnableRootVirtualProcessor @ 0x1408912F8
 * Callers:
 *     HvlInitializeProcessor @ 0x140795810 (HvlInitializeProcessor.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1404F143C (HvlpGetLpcbByApicId.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408911CC (HvlpCreateRootVirtualProcessor.c)
 */

__int64 __fastcall HvlpEnableRootVirtualProcessor(__int64 a1, int a2)
{
  int *LpcbByApicId; // rax
  int *v4; // rbx
  __int64 result; // rax
  char v6; // cl
  int v7; // eax
  bool v8; // zf

  LpcbByApicId = HvlpGetLpcbByApicId(a2);
  v4 = LpcbByApicId;
  if ( (HvlpRootFlags & 0x40) == 0
    || (result = HvlpCreateRootVirtualProcessor((__int64)LpcbByApicId, *(_DWORD *)(a1 + 36)), (int)result >= 0) )
  {
    v6 = byte_140C123C0;
    *(_QWORD *)(a1 + 33616) = *((_QWORD *)v4 + 4);
    v7 = *(_DWORD *)(a1 + 36);
    v8 = v7 == v4[1];
    v4[6] = v7;
    if ( !v8 )
      v6 = 0;
    result = 0LL;
    byte_140C123C0 = v6;
  }
  return result;
}
