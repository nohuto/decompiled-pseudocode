/*
 * XREFs of _RtlQueryProcessHeapInformation@4 @ 0x4B336F80
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlStringCbCopyW@12 @ 0x4B2D5C0F (_RtlStringCbCopyW@12.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _RtlStringCbPrintfW @ 0x4B33765B (_RtlStringCbPrintfW.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

int __stdcall RtlQueryProcessHeapInformation(int a1)
{
  unsigned int *DebugInfo; // eax
  unsigned int *v2; // ebx
  NTSTATUS v4; // esi
  void *v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int i; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  int v13; // edx
  void *v14; // eax
  char *v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  _DWORD *v18; // eax
  wchar_t *v19; // ecx
  unsigned int v20; // edx
  _DWORD *v21; // ecx
  size_t v22; // [esp-4h] [ebp-90h]
  size_t v23; // [esp-4h] [ebp-90h]
  _DWORD HeapInformation[11]; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v25[4]; // [esp+3Ch] [ebp-50h] BYREF
  _DWORD *v26; // [esp+4Ch] [ebp-40h]
  int v27; // [esp+50h] [ebp-3Ch]
  int v28; // [esp+54h] [ebp-38h]
  unsigned int v29; // [esp+58h] [ebp-34h]
  unsigned int v30; // [esp+5Ch] [ebp-30h]
  int v31; // [esp+60h] [ebp-2Ch]
  unsigned int v32; // [esp+64h] [ebp-28h]
  int v33; // [esp+68h] [ebp-24h]
  void *v34; // [esp+6Ch] [ebp-20h]
  size_t Size; // [esp+70h] [ebp-1Ch]
  int v36; // [esp+88h] [ebp-4h]

  v33 = -1073741823;
  *(_DWORD *)(a1 + 76) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = (unsigned int *)RtlpCommitQueryDebugInfo(a1, 4);
  v2 = DebugInfo;
  if ( !DebugInfo )
    return -1073741801;
  *DebugInfo = 0;
  *(_DWORD *)(a1 + 56) = DebugInfo;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v36 = 0;
  v4 = RtlpEnumProcessHeaps(2);
  v33 = v4;
  if ( v4 < 0 )
  {
    *(_DWORD *)(a1 + 56) = 0;
  }
  else if ( (*(_BYTE *)(a1 + 32) & 8) != 0 )
  {
    v31 = RtlpGlobalTagHeap;
    if ( RtlpGlobalTagHeap && *(_DWORD *)(RtlpGlobalTagHeap + 136) )
    {
      v5 = (void *)RtlpCommitQueryDebugInfo(a1, 64);
      LODWORD(Size) = v5;
      if ( !v5 )
      {
LABEL_8:
        v4 = -1073741801;
        goto LABEL_36;
      }
      LODWORD(v22) = 64;
      memset(v5, 0, v22);
      v6 = v31;
      v7 = Size;
      *(_DWORD *)Size = v31;
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(v6 + 64);
      *(_WORD *)(v7 + 8) = 8;
      ++*v2;
    }
    for ( i = 0; ; ++i )
    {
      v30 = i;
      if ( i >= *v2 )
        break;
      v9 = i << 6;
      v27 = i << 6;
      v10 = *(_DWORD *)(a1 + 64);
      if ( !v10 || v10 == *(unsigned int *)((char *)v2 + v9 + 4) )
      {
        v11 = *(unsigned int *)((char *)v2 + v9 + 4);
        v31 = v11;
        v12 = *(unsigned __int16 *)(v11 + 132);
        v29 = v12;
        *(unsigned int *)((char *)v2 + v9 + 24) = v12;
        v13 = v12 << 6;
        LODWORD(Size) = v13;
        v28 = v13;
        if ( *(_DWORD *)(v11 + 188) )
        {
          *(unsigned int *)((char *)v2 + v9 + 24) = v29 + 129;
          v13 += 8256;
          LODWORD(Size) = v13;
          v28 = v13;
        }
        v14 = (void *)RtlpCommitQueryDebugInfo(a1, v13);
        v34 = v14;
        if ( !v14 )
          goto LABEL_8;
        LODWORD(v22) = Size;
        memset(v14, 0, v22);
        v15 = (char *)v34;
        v16 = v27;
        *(unsigned int *)((char *)v2 + v27 + 60) = (unsigned int)v34;
        LODWORD(Size) = *(_DWORD *)(v31 + 188);
        v26 = (_DWORD *)Size;
        if ( (_DWORD)Size )
        {
          *(unsigned int *)((char *)v2 + v16 + 32) = 129;
          *(unsigned int *)((char *)v2 + v16 + 36) = 8;
          v17 = 0;
          v32 = 0;
          v18 = (_DWORD *)Size;
          while ( v17 <= 0x80 )
          {
            *(_DWORD *)v15 = *v18;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(Size + 4);
            *((_DWORD *)v15 + 2) = 8 * *(_DWORD *)(Size + 8);
            *((_WORD *)v15 + 6) = v17 | 0x8000;
            v19 = (wchar_t *)(v15 + 16);
            if ( v17 )
            {
              if ( v17 >= 0x80 )
                RtlStringCbCopyW((int)v19, 0x30u, (int)L"VirtualAlloc");
              else
                RtlStringCbPrintfW(v19, 48, (int)L"Objects=%4u", 8 * v17);
            }
            else
            {
              RtlStringCbPrintfW(v19, 48, (int)L"Objects>%4u", 0x400u);
            }
            v15 = (char *)v34 + 64;
            v34 = (char *)v34 + 64;
            v18 = (_DWORD *)(Size + 12);
            LODWORD(Size) = v18;
            v26 = v18;
            v17 = ++v32;
          }
        }
        LODWORD(v23) = *(unsigned __int16 *)(v31 + 132) << 6;
        memmove(v15, *(const void **)(v31 + 136), v23);
        v20 = 0;
        v32 = 0;
        v21 = v34;
        while ( v20 < *(unsigned __int16 *)(v31 + 132) )
        {
          v21[2] *= 8;
          v21 += 16;
          v34 = v21;
          v32 = ++v20;
        }
        i = v30;
      }
    }
  }
  if ( v4 < 0 || (*(_DWORD *)(a1 + 32) & 0x210) == 0 )
    goto LABEL_37;
  HeapInformation[0] = -1;
  HeapInformation[1] = *(_DWORD *)(a1 + 64);
  HeapInformation[3] = RtlpWalkCallbackRoutine;
  HeapInformation[4] = v25;
  HeapInformation[2] = 2 * ((*(_BYTE *)(a1 + 32) & 0x10) != 0) + 3;
  v25[0] = a1;
  v25[1] = v2;
  v25[2] = 0;
  v25[3] = v2 + 1;
  v4 = RtlQueryHeapInformation(0, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x2CuLL, (PSIZE_T)HIDWORD(v22));
LABEL_36:
  v33 = v4;
LABEL_37:
  v36 = -2;
  RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return v4;
}
