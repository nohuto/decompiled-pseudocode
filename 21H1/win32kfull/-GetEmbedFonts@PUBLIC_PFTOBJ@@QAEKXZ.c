/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QAEKXZ @ 0x1D03AC
 * Callers:
 *     _NtGdiGetEmbedFonts@0 @ 0x212E2D (_NtGdiGetEmbedFonts@0.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __thiscall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **this)
{
  int v2; // esi
  int *v4; // edx
  int v5; // ebx
  int i; // ecx
  int j; // eax
  HANDLE v8; // edi
  bool v9; // zf
  int v10; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v11; // [esp+Ch] [ebp-8h]
  HANDLE CurrentThreadId; // [esp+10h] [ebp-4h]

  v2 = 0;
  if ( *this != gpPFTPrivate )
    return 0;
  v11 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = PsGetCurrentThreadId();
  v10 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v4 = (int *)((char *)*this + 24);
  v5 = 20;
  do
  {
    if ( v4 )
    {
      for ( i = *v4; i; i = *(_DWORD *)(i + 4) )
      {
        for ( j = *(_DWORD *)(i + 92); j; j = *(_DWORD *)(j + 16) )
        {
          v8 = *(HANDLE *)(j + 12);
          if ( (*(_BYTE *)(j + 8) & 4) != 0 )
            v9 = v8 == CurrentThreadId;
          else
            v9 = v8 == (HANDLE)v11;
          if ( v9 )
            ++v2;
        }
      }
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v2;
}
