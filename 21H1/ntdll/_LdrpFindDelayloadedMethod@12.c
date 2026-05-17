/*
 * XREFs of _LdrpFindDelayloadedMethod@12 @ 0x4B32F6A6
 * Callers:
 *     _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0 (_LdrQueryOptionalDelayLoadedAPI@16.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpFindDelayloadedMethodInDescriptor@12 @ 0x4B32F710 (_LdrpFindDelayloadedMethodInDescriptor@12.c)
 */

int __fastcall LdrpFindDelayloadedMethod(void *a1, int a2, _DWORD *a3)
{
  int DelayloadedMethodInDescriptor; // edi
  char *v4; // esi
  unsigned int v5; // ebx
  unsigned int v8; // [esp+10h] [ebp-4h] BYREF

  DelayloadedMethodInDescriptor = 0;
  *a3 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(a1, (int)a1, 1, 13, (int)&v8);
  if ( v4 )
  {
    v5 = v8 >> 5;
    v8 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a2);
        if ( DelayloadedMethodInDescriptor )
          break;
        v4 += 32;
        if ( ++v8 >= v5 )
          return DelayloadedMethodInDescriptor;
      }
      *a3 = v4;
    }
  }
  return DelayloadedMethodInDescriptor;
}
