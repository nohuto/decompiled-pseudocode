/*
 * XREFs of _RtlpMUIGetAllInstalledLang@12 @ 0x4B354922
 * Callers:
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 */

char __fastcall RtlpMUIGetAllInstalledLang(int a1, _DWORD *a2, _DWORD *a3)
{
  size_t v4; // ebx
  const void *Heap; // eax
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // esi
  _WORD *v9; // eax
  unsigned int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  size_t v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  const void *v16; // [esp+20h] [ebp-4h] BYREF

  v12 = 520;
  v4 = 0;
  v15 = a1;
  Heap = (const void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 520);
  v16 = Heap;
  if ( Heap )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v14 = 0;
    v7 = 0;
    v13 = 0;
    if ( *(_WORD *)(v6 + 6) )
    {
      v8 = 0;
      do
      {
        v9 = (_WORD *)(v8 + *(_DWORD *)(v6 + 12));
        if ( (*v9 & 0x1000) == 0 )
        {
          RtlpAddLanguagesToMultiSZ(&v16, &v14, &v12, v9, v15, &v13, 0);
          v6 = *(_DWORD *)(v15 + 20);
        }
        ++v7;
        v8 += 28;
      }
      while ( v7 < *(unsigned __int16 *)(v6 + 6) );
      Heap = v16;
      v4 = v14;
    }
    *((_WORD *)Heap + v4) = 0;
    LOBYTE(v4) = 1;
    *a2 = v16;
    *a3 = v13;
  }
  return v4;
}
