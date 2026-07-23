/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x1406F1554
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 *     ObpLookupDirectoryEntry @ 0x1407962FC (ObpLookupDirectoryEntry.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x14026CAAC (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x1402AAF3C (ObpLockDirectoryShared.c)
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406F16A8 (ObpLookupDirectoryUsingHash.c)
 *     ObpGetShadowDirectory @ 0x1408DC43C (ObpGetShadowDirectory.c)
 */

__int64 __fastcall ObpLookupDirectoryEntryEx(
        PADAPTER_OBJECT DmaAdapter,
        unsigned __int16 *a2,
        char a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rdi
  char v7; // r12
  bool v9; // r14
  unsigned int v10; // r11d
  unsigned __int64 v12; // rbx
  unsigned int v13; // r10d
  int v14; // r10d
  unsigned int v15; // edx
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v20; // r10
  __int64 v21; // rax
  __int128 v22; // rt0
  struct _DMA_ADAPTER *ShadowDirectory; // rbx
  __int64 v24; // r9

  v6 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v7 = a4;
  v9 = (a3 & 0x40) != 0;
  v10 = *a2 >> 1;
  if ( v10 < 4 )
  {
    v13 = 0;
  }
  else
  {
    v12 = 0LL;
    do
    {
      a4 = *(_QWORD *)v6;
      if ( (*(_QWORD *)v6 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v20 = 4LL;
        do
        {
          v21 = (unsigned __int16)a4;
          if ( (unsigned __int16)a4 >= 0x61u )
          {
            if ( (unsigned __int16)a4 <= 0x7Au )
              v21 = (unsigned int)(unsigned __int16)a4 - 32;
            else
              v21 = NLS_UPCASE(a4);
          }
          *(_QWORD *)&v22 = a4;
          *((_QWORD *)&v22 + 1) = v21;
          a4 = v22 >> 16;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        a4 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v6 += 4;
      v10 -= 4;
      v12 = a4 + (v12 >> 1) + 3 * v12;
    }
    while ( v10 >= 4 );
    v13 = v12 + HIDWORD(v12);
  }
  while ( v10 )
  {
    v15 = *v6;
    v16 = (v13 >> 1) + 3 * v13;
    ++v6;
    --v10;
    if ( v15 < 0x61 )
      goto LABEL_12;
    if ( v15 > 0x7A )
    {
      a4 = NLS_UPCASE(v15);
      v13 = a4 + v14;
    }
    else
    {
      v16 -= 32;
LABEL_12:
      v13 = v15 + v16;
    }
  }
  LOBYTE(a4) = v9;
  *(_DWORD *)(a6 + 24) = v13;
  *(_WORD *)(a6 + 28) = v13 % 0x25;
  v18 = ObpLookupDirectoryUsingHash(DmaAdapter, a2, a6, a4);
  if ( !v18 && v7 )
  {
    do
    {
      LOBYTE(v17) = a5;
      ShadowDirectory = (struct _DMA_ADAPTER *)ObpGetShadowDirectory(DmaAdapter, v17);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(DmaAdapter);
          ObpUnlockDirectory((__int64)DmaAdapter, a6);
          ObpLockDirectoryShared(a6, ShadowDirectory);
          HalPutDmaAdapter(DmaAdapter);
        }
        LOBYTE(v24) = v9;
        v18 = ObpLookupDirectoryUsingHash(ShadowDirectory, a2, a6, v24);
      }
      DmaAdapter = ShadowDirectory;
    }
    while ( !v18 && ShadowDirectory );
  }
  return v18;
}
