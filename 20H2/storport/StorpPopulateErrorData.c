/*
 * XREFs of StorpPopulateErrorData @ 0x1C0043300
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 * Callees:
 *     memmove @ 0x1C001F600 (memmove.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 */

void *__fastcall StorpPopulateErrorData(
        __int128 *a1,
        char a2,
        const void **a3,
        __int64 a4,
        __int16 a5,
        __int16 a6,
        _BYTE *Src,
        _BYTE *a8,
        size_t Size,
        void *a10)
{
  size_t v13; // r8
  unsigned __int64 v14; // rax
  size_t v15; // r8
  unsigned __int64 v16; // rax
  size_t v17; // r8
  void *result; // rax
  unsigned int v19; // eax

  memset(&unk_1C0069965, 0, 0x44FuLL);
  word_1C006995C = Size;
  WheaErrorData = 0x54524F50524F5453LL;
  word_1C0069958 = 1;
  word_1C006995A = Size + 98;
  word_1C006995E = a6;
  v13 = 32LL;
  word_1C0069962 = a5;
  word_1C0069960 = 1;
  byte_1C0069964 = a2;
  xmmword_1C0069968 = *a1;
  if ( *(_WORD *)a3 <= 0x20u )
    v13 = *(unsigned __int16 *)a3;
  memmove(&unk_1C0069978, a3[1], v13);
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  v15 = 8LL;
  if ( v14 <= 8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
  }
  memmove(&unk_1C0069998, Src, v15);
  v16 = -1LL;
  do
    ++v16;
  while ( a8[v16] );
  v17 = 16LL;
  if ( v16 <= 0x10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
  }
  result = memmove(&unk_1C00699A1, a8, v17);
  if ( a10 )
  {
    v19 = 1024;
    if ( (unsigned int)Size <= 0x400 )
      v19 = Size;
    return memmove(&unk_1C00699B2, a10, v19);
  }
  return result;
}
