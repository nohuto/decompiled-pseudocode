/*
 * XREFs of ?GreUnTearDownSprites@@YGXPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB553
 * Callers:
 *     ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97 (--1DEVEXCLUDERECT@@QAE@XZ.c)
 * Callees:
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 */

void __userpurge GreUnTearDownSprites(int a1@<edx>, int a2@<ecx>, HDEV a3, struct _RECTL *a4, int a5)
{
  unsigned int v7; // edi

  if ( *(_DWORD *)(a2 + 104) )
  {
    v7 = 0;
    do
      vSpUnTearDownSprites(*(_DWORD *)(*(_DWORD *)(a2 + 108) + 4 * v7++), a1, 0);
    while ( v7 < *(_DWORD *)(a2 + 104) );
  }
  else
  {
    vSpUnTearDownSprites(a2, a1, 0);
  }
}
