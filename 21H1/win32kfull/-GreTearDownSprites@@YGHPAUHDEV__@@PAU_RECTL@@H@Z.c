/*
 * XREFs of ?GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB505
 * Callers:
 *     ?vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1D887E (-vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z.c)
 *     ?SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x1DBE11 (-SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 * Callees:
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 */

int __userpurge GreTearDownSprites@<eax>(int a1@<ecx>, HDEV a2, struct _RECTL *a3, int a4)
{
  int result; // eax
  unsigned int v6; // edi
  struct _RECTL *v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+4h] [ebp-Ch]

  result = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 104) )
    {
      v6 = 0;
      do
      {
        result = bSpTearDownSprites(0, v7, v8);
        ++v6;
      }
      while ( v6 < *(_DWORD *)(a1 + 104) );
    }
    else
    {
      return bSpTearDownSprites(0, v7, v8);
    }
  }
  return result;
}
