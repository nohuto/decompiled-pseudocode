/*
 * XREFs of _LdrpFindDelayloadedMethod@12 @ 0x4B32F6A6
 * Callers:
 *     _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0 (_LdrQueryOptionalDelayLoadedAPI@16.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpFindDelayloadedMethodInDescriptor@12 @ 0x4B32F710 (_LdrpFindDelayloadedMethodInDescriptor@12.c)
 */

int __fastcall LdrpFindDelayloadedMethod(PVOID BaseOfImage, int a2, _DWORD *a3)
{
  int DelayloadedMethodInDescriptor; // edi
  char *v4; // esi
  ULONG v5; // ebx
  ULONG Size; // [esp+10h] [ebp-4h] BYREF

  DelayloadedMethodInDescriptor = 0;
  *a3 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xDu, &Size);
  if ( v4 )
  {
    v5 = Size >> 5;
    Size = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a2);
        if ( DelayloadedMethodInDescriptor )
          break;
        v4 += 32;
        if ( ++Size >= v5 )
          return DelayloadedMethodInDescriptor;
      }
      *a3 = v4;
    }
  }
  return DelayloadedMethodInDescriptor;
}
