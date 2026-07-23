/*
 * XREFs of MiApplyDynamicRelocations @ 0x140A4EEC4
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140A4ECEC (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     LdrApplyDynamicRelocations @ 0x1403B5508 (LdrApplyDynamicRelocations.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14070E90C (MiCaptureDynamicRelocationTableRva.c)
 *     VslApplyDynamicRelocations @ 0x140A92584 (VslApplyDynamicRelocations.c)
 */

__int64 __fastcall MiApplyDynamicRelocations(char *BaseOfImage, ULONG64 Size, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  ULONG v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+44h] [rbp-14h] BYREF

  v13 = 0;
  LODWORD(v14) = 0;
  v6 = Size;
  if ( (MiFlags & 0x8000) != 0 )
    return VslApplyDynamicRelocations(BaseOfImage, a3, a4);
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &v13);
  if ( !v8 || v13 != *v8 )
    return 0LL;
  result = MiCaptureDynamicRelocationTableRva(BaseOfImage, v6, 0LL, 523, (__int64)v8, *v8, &v14);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations((__int64)BaseOfImage, &BaseOfImage[(unsigned int)v14], v10, v11, v12, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
