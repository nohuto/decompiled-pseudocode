/*
 * XREFs of BgfxGrowDirtyRect @ 0x1403BC2D8
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x140398A08 (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_140C13440 + 1));
  v6 = *(_DWORD *)xmmword_140C13440;
  if ( *(_DWORD *)xmmword_140C13440 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_140C13440 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_140C13440 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_140C13440 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_140C13440 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_140C13440 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_140C13440 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_140C13440 + 12) = v11;
  ++*(_DWORD *)qword_140C13430;
  KxReleaseSpinLock(*((PKSPIN_LOCK *)&xmmword_140C13440 + 1));
}
