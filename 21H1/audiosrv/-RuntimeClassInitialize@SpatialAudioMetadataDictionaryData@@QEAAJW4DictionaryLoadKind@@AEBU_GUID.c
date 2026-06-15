/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionaryData@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@G@Z @ 0x18012D12C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x18012CBA4 (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 * Callees:
 *     memcmp_0 @ 0x180074B43 (memcmp_0.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionaryData::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        const void *a3,
        __int16 a4)
{
  _OWORD *v5; // rbx
  int v9; // edi
  unsigned int v10; // ebp

  v5 = &unk_18019D170;
  v9 = -2004286973;
  v10 = 0;
  while ( 1 )
  {
    if ( !a2 )
    {
      v9 = memcmp_0(v5, a3, 0x10uLL) != 0 ? v9 : 0;
      goto LABEL_9;
    }
    if ( a2 == 1 && *((_WORD *)v5 + 8) == a4 )
      break;
LABEL_9:
    if ( v9 >= 0 )
      goto LABEL_6;
    ++v10;
    v5 = (_OWORD *)((char *)v5 + 40);
    if ( v10 >= 5 )
      return (unsigned int)v9;
  }
  v9 = 0;
LABEL_6:
  *(_OWORD *)(a1 + 104) = *v5;
  *(_WORD *)(a1 + 100) = *((_WORD *)v5 + 8);
  *(_DWORD *)(a1 + 96) = *((_DWORD *)v5 + 8);
  *(_QWORD *)(a1 + 88) = *((_QWORD *)v5 + 3);
  return (unsigned int)v9;
}
