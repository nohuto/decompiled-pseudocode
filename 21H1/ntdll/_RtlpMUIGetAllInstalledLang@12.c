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
  unsigned int v4; // ebx
  PVOID Heap; // eax
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // esi
  _WORD *v9; // eax
  SIZE_T v11; // [esp-4h] [ebp-28h]
  unsigned int v13; // [esp+10h] [ebp-14h] BYREF
  int v14; // [esp+14h] [ebp-10h] BYREF
  unsigned int v15; // [esp+18h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-8h]
  void *v17; // [esp+20h] [ebp-4h] BYREF

  LODWORD(v11) = 520;
  v13 = 520;
  v4 = 0;
  v16 = a1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
  v17 = Heap;
  if ( Heap )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v15 = 0;
    v7 = 0;
    v14 = 0;
    if ( *(_WORD *)(v6 + 6) )
    {
      v8 = 0;
      do
      {
        v9 = (_WORD *)(v8 + *(_DWORD *)(v6 + 12));
        if ( (*v9 & 0x1000) == 0 )
        {
          RtlpAddLanguagesToMultiSZ((const void **)&v17, &v15, &v13, v9, v16, &v14, 0);
          v6 = *(_DWORD *)(v16 + 20);
        }
        ++v7;
        v8 += 28;
      }
      while ( v7 < *(unsigned __int16 *)(v6 + 6) );
      Heap = v17;
      v4 = v15;
    }
    *((_WORD *)Heap + v4) = 0;
    LOBYTE(v4) = 1;
    *a2 = v17;
    *a3 = v14;
  }
  return v4;
}
