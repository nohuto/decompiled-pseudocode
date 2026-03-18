/*
 * XREFs of BgfxGrowDirtyRect @ 0x1403BD5F8
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x140399198 (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_140C13480 + 1));
  v6 = *(_DWORD *)xmmword_140C13480;
  if ( *(_DWORD *)xmmword_140C13480 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_140C13480 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_140C13480 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_140C13480 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_140C13480 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_140C13480 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_140C13480 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_140C13480 + 12) = v11;
  ++*(_DWORD *)qword_140C13470;
  KxReleaseSpinLock(*((PKSPIN_LOCK *)&xmmword_140C13480 + 1));
}
