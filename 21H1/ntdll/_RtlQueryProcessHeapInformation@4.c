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
  int HeapInformation; // esi
  void *v5; // eax
  int v6; // eax
  size_t v7; // ecx
  unsigned int i; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  size_t v13; // edx
  void *v14; // eax
  char *v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  _DWORD *v18; // eax
  wchar_t *v19; // ecx
  unsigned int v20; // edx
  _DWORD *v21; // ecx
  _DWORD v22[11]; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v23[4]; // [esp+3Ch] [ebp-50h] BYREF
  size_t v24; // [esp+4Ch] [ebp-40h]
  int v25; // [esp+50h] [ebp-3Ch]
  size_t v26; // [esp+54h] [ebp-38h]
  unsigned int v27; // [esp+58h] [ebp-34h]
  unsigned int v28; // [esp+5Ch] [ebp-30h]
  int v29; // [esp+60h] [ebp-2Ch]
  unsigned int v30; // [esp+64h] [ebp-28h]
  int v31; // [esp+68h] [ebp-24h]
  void *v32; // [esp+6Ch] [ebp-20h]
  size_t Size; // [esp+70h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v31 = -1073741823;
  *(_DWORD *)(a1 + 76) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = (unsigned int *)RtlpCommitQueryDebugInfo(a1, 4);
  v2 = DebugInfo;
  if ( !DebugInfo )
    return -1073741801;
  *DebugInfo = 0;
  *(_DWORD *)(a1 + 56) = DebugInfo;
  RtlEnterCriticalSection((int)&RtlpProcessHeapsListLock);
  ms_exc.registration.TryLevel = 0;
  HeapInformation = RtlpEnumProcessHeaps(2);
  v31 = HeapInformation;
  if ( HeapInformation < 0 )
  {
    *(_DWORD *)(a1 + 56) = 0;
  }
  else if ( (*(_BYTE *)(a1 + 32) & 8) != 0 )
  {
    v29 = RtlpGlobalTagHeap;
    if ( RtlpGlobalTagHeap && *(_DWORD *)(RtlpGlobalTagHeap + 136) )
    {
      v5 = (void *)RtlpCommitQueryDebugInfo(a1, 64);
      Size = (size_t)v5;
      if ( !v5 )
      {
LABEL_8:
        HeapInformation = -1073741801;
        goto LABEL_36;
      }
      memset(v5, 0, 0x40u);
      v6 = v29;
      v7 = Size;
      *(_DWORD *)Size = v29;
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(v6 + 64);
      *(_WORD *)(v7 + 8) = 8;
      ++*v2;
    }
    for ( i = 0; ; ++i )
    {
      v28 = i;
      if ( i >= *v2 )
        break;
      v9 = i << 6;
      v25 = i << 6;
      v10 = *(_DWORD *)(a1 + 64);
      if ( !v10 || v10 == *(unsigned int *)((char *)v2 + v9 + 4) )
      {
        v11 = *(unsigned int *)((char *)v2 + v9 + 4);
        v29 = v11;
        v12 = *(unsigned __int16 *)(v11 + 132);
        v27 = v12;
        *(unsigned int *)((char *)v2 + v9 + 24) = v12;
        v13 = v12 << 6;
        Size = v13;
        v26 = v13;
        if ( *(_DWORD *)(v11 + 188) )
        {
          *(unsigned int *)((char *)v2 + v9 + 24) = v27 + 129;
          v13 += 8256;
          Size = v13;
          v26 = v13;
        }
        v14 = (void *)RtlpCommitQueryDebugInfo(a1, v13);
        v32 = v14;
        if ( !v14 )
          goto LABEL_8;
        memset(v14, 0, Size);
        v15 = (char *)v32;
        v16 = v25;
        *(unsigned int *)((char *)v2 + v25 + 60) = (unsigned int)v32;
        Size = *(_DWORD *)(v29 + 188);
        v24 = Size;
        if ( Size )
        {
          *(unsigned int *)((char *)v2 + v16 + 32) = 129;
          *(unsigned int *)((char *)v2 + v16 + 36) = 8;
          v17 = 0;
          v30 = 0;
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
                RtlStringCbPrintfW(v19, 48, (wchar_t *)L"Objects=%4u", 8 * v17);
            }
            else
            {
              RtlStringCbPrintfW(v19, 48, L"Objects>%4u", 0);
            }
            v15 = (char *)v32 + 64;
            v32 = (char *)v32 + 64;
            v18 = (_DWORD *)(Size + 12);
            Size = (size_t)v18;
            v24 = (size_t)v18;
            v17 = ++v30;
          }
        }
        memmove(v15, *(const void **)(v29 + 136), *(unsigned __int16 *)(v29 + 132) << 6);
        v20 = 0;
        v30 = 0;
        v21 = v32;
        while ( v20 < *(unsigned __int16 *)(v29 + 132) )
        {
          v21[2] *= 8;
          v21 += 16;
          v32 = v21;
          v30 = ++v20;
        }
        i = v28;
      }
    }
  }
  if ( HeapInformation < 0 || (*(_DWORD *)(a1 + 32) & 0x210) == 0 )
    goto LABEL_37;
  v22[0] = -1;
  v22[1] = *(_DWORD *)(a1 + 64);
  v22[3] = RtlpWalkCallbackRoutine;
  v22[4] = v23;
  v22[2] = 2 * ((*(_BYTE *)(a1 + 32) & 0x10) != 0) + 3;
  v23[0] = a1;
  v23[1] = v2;
  v23[2] = 0;
  v23[3] = v2 + 1;
  HeapInformation = RtlQueryHeapInformation(0, 2, v22, 44, 0);
LABEL_36:
  v31 = HeapInformation;
LABEL_37:
  ms_exc.registration.TryLevel = -2;
  RtlLeaveCriticalSection((int)&RtlpProcessHeapsListLock);
  return HeapInformation;
}
