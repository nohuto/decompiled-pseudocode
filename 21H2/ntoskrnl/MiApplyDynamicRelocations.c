/*
 * XREFs of MiApplyDynamicRelocations @ 0x140B06E60
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140B06C7C (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     LdrApplyDynamicRelocations @ 0x1403C3418 (LdrApplyDynamicRelocations.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140706200 (LdrCaptureDynamicRelocationTableHeader.c)
 *     VslApplyDynamicRelocations @ 0x140B4EA44 (VslApplyDynamicRelocations.c)
 */

__int64 __fastcall MiApplyDynamicRelocations(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v14[5]; // [rsp+44h] [rbp-14h] BYREF

  v13 = 0;
  v14[0] = 0;
  v6 = a2;
  if ( (MiFlags & 0x4000) != 0 )
    return VslApplyDynamicRelocations(a1, a3, a4);
  LOBYTE(a2) = 1;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, a2, 10, (int)&v13);
  if ( !v8 || v13 != *v8 )
    return 0LL;
  result = LdrCaptureDynamicRelocationTableHeader(a1, v6, (__int64)v8, *v8, 0LL, 523, v14, 0LL);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations(a1, (_DWORD *)(a1 + v14[0]), v10, v11, v12, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
