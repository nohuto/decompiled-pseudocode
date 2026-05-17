/*
 * XREFs of RtlpHeapTrkHash @ 0x4B364861
 * Callers:
 *     RtlpHeapTrkFindStack @ 0x4B3647C2 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x4B364DEB (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x4B364E7D (RtlpHeapTrkTrackRemove.c)
 * Callees:
 *     __aullrem @ 0x4B2F67C0 (__aullrem.c)
 */

unsigned __int64 __thiscall RtlpHeapTrkHash(void *this)
{
  unsigned __int8 *v1; // ebx
  _WORD *v2; // ecx
  unsigned __int64 v3; // kr00_8
  void *v5; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h]
  char *v7; // [esp+14h] [ebp-4h]

  v5 = this;
  v1 = (unsigned __int8 *)&v5;
  v2 = &unk_4B3A6DA0;
  v6 = 4;
  v7 = (char *)&unk_4B3A6DA0;
  v3 = 0LL;
  do
  {
    v3 += (unsigned __int16)(*v2 * *v1) % 0x1EEFu;
    v2 = v7 + 2;
    ++v1;
    v7 += 2;
    --v6;
  }
  while ( v6 );
  return v3 % 0x1EEF;
}
