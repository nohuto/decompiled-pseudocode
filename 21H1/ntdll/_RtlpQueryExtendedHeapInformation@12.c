/*
 * XREFs of _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0
 * Callers:
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _RtlpQueryExtendedInformationAllHeaps@4 @ 0x4B358DD6 (_RtlpQueryExtendedInformationAllHeaps@4.c)
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 */

int __fastcall RtlpQueryExtendedHeapInformation(int a1, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // esi
  __int16 v9; // di
  int v10; // ecx
  unsigned int v11; // esi
  unsigned int v12; // edi
  void *v13; // ecx
  NTSTATUS v14; // eax
  NTSTATUS v15; // esi
  _DWORD *v16; // eax
  unsigned int v17; // edi
  _DWORD *v18; // ebx
  ULONG_PTR v19; // [esp-1Ch] [ebp-DCh]
  SIZE_T v20; // [esp-14h] [ebp-D4h]
  SIZE_T v21; // [esp-14h] [ebp-D4h]
  size_t v22; // [esp-4h] [ebp-C4h]
  size_t v23; // [esp-4h] [ebp-C4h]
  ULONG v24; // [esp+0h] [ebp-C0h]
  ULONG v25; // [esp+4h] [ebp-BCh]
  ULONG v26; // [esp+4h] [ebp-BCh]
  HANDLE Handle; // [esp+10h] [ebp-B0h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-ACh] BYREF
  LARGE_INTEGER MaximumSize; // [esp+18h] [ebp-A8h] BYREF
  unsigned int v30; // [esp+20h] [ebp-A0h] BYREF
  int v31; // [esp+24h] [ebp-9Ch]
  SIZE_T CommitSize; // [esp+28h] [ebp-98h] BYREF
  int (__stdcall *v33)(_DWORD *, _DWORD *); // [esp+34h] [ebp-8Ch]
  _DWORD *v34; // [esp+38h] [ebp-88h]
  int v35; // [esp+3Ch] [ebp-84h] BYREF
  int (__stdcall *v36)(_DWORD *, _DWORD *); // [esp+40h] [ebp-80h]
  _DWORD *v37; // [esp+44h] [ebp-7Ch]
  _DWORD v38[9]; // [esp+48h] [ebp-78h] BYREF
  int v39; // [esp+6Ch] [ebp-54h]
  unsigned int v40; // [esp+70h] [ebp-50h]
  unsigned int v41; // [esp+74h] [ebp-4Ch]
  HANDLE v42[2]; // [esp+78h] [ebp-48h] BYREF
  LARGE_INTEGER v43; // [esp+80h] [ebp-40h]
  int v44; // [esp+88h] [ebp-38h]
  int v45; // [esp+8Ch] [ebp-34h]
  int v46; // [esp+94h] [ebp-2Ch]
  unsigned int v47; // [esp+98h] [ebp-28h]

  v31 = a2;
  if ( (a1 & 3) != 0 )
    return -1073741811;
  if ( *(_DWORD *)a1 == -1 )
  {
    LODWORD(v22) = 48;
    v35 = *(_DWORD *)(a1 + 8);
    memset(v38, 0, v22);
    if ( *(_DWORD *)(a1 + 12) )
    {
      v36 = *(int (__stdcall **)(_DWORD *, _DWORD *))(a1 + 12);
      v6 = *(_DWORD **)(a1 + 16);
    }
    else
    {
      v38[0] = a1;
      v40 = a1 + 20;
      v41 = a1 + a2;
      v6 = v38;
      v39 = a1;
      v36 = RtlpExtendedHeapInformationGenerator;
    }
    v37 = v6;
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    v7 = *(_DWORD *)(a1 + 4);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 8) == -571548178 )
        v9 = *(_WORD *)(v7 + 20);
      else
        v9 = *(_WORD *)(v7 + 124);
      if ( v9 != -1 )
      {
        RtlLockHeap(*(PVOID *)(a1 + 4));
        v7 = *(_DWORD *)(a1 + 4);
      }
      v8 = RtlpQueryExtendedInformationHeap(v7, &v35);
      if ( v9 != -1 )
        RtlUnlockHeap(*(PVOID *)(a1 + 4));
    }
    else
    {
      v8 = RtlpQueryExtendedInformationAllHeaps(&v35);
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
    v10 = v8 != -2147483622 ? v8 : 0;
    result = v10;
    if ( v36 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v10 >= 0 )
      {
        v11 = v40;
        if ( a3 )
          *a3 = v40 - v39;
        result = v10;
        if ( v11 > v41 )
          return -1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 44;
      return v8 != -2147483622 ? v8 : 0;
    }
  }
  else
  {
    v12 = 0;
    MaximumSize.LowPart = 0x10000;
    BaseAddress = 0;
    while ( 1 )
    {
      Handle = 0;
      MaximumSize.HighPart = 0;
      v15 = NtCreateSection(&Handle, 0xF001Fu, 0, &MaximumSize, 4u, 0x8000000u, 0);
      if ( v15 < 0 )
        break;
      LODWORD(v22) = 72;
      memset(v42, 0, v22);
      v13 = *(void **)a1;
      v44 = *(_DWORD *)(a1 + 4);
      v45 = *(_DWORD *)(a1 + 8);
      v43 = MaximumSize;
      v42[0] = Handle;
      v14 = RtlpHeapPerformCrossProcessQuery(v13, v42);
      v15 = v14;
      if ( v14 != -1073741789 )
      {
        if ( v14 >= 0 )
        {
          CommitSize = 0LL;
          HIDWORD(v20) = &v30;
          LODWORD(v20) = &CommitSize;
          v30 = 0x10000;
          v15 = ZwMapViewOfSection(
                  Handle,
                  (HANDLE)0xFFFFFFFF,
                  &BaseAddress,
                  0x1000000000000uLL,
                  v20,
                  (PLARGE_INTEGER)2,
                  0,
                  (SECTION_INHERIT)4,
                  HIDWORD(v22),
                  v25);
          if ( v15 >= 0 )
          {
            LODWORD(v23) = 48;
            memset(v38, 0, v23);
            v33 = *(int (__stdcall **)(_DWORD *, _DWORD *))(a1 + 12);
            if ( v33 )
            {
              v16 = *(_DWORD **)(a1 + 16);
            }
            else
            {
              v38[0] = a1;
              v40 = a1 + 20;
              v39 = a1;
              v41 = a1 + v31;
              v16 = v38;
              v33 = RtlpExtendedHeapInformationGenerator;
            }
            v31 = 0;
            v34 = v16;
            if ( v47 )
            {
              while ( 1 )
              {
                v17 = (v12 + 3) & 0xFFFFFFFC;
                if ( v17 >= MaximumSize.LowPart || v17 >= 2 * v30 || (__int64)(CommitSize + v30) > MaximumSize.QuadPart )
                  break;
                v18 = (char *)BaseAddress + v17;
                if ( v17 + 8 >= v30 || !*v18 )
                {
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
                  CommitSize += v30;
                  HIDWORD(v21) = &v30;
                  BaseAddress = 0;
                  LODWORD(v21) = &CommitSize;
                  HIDWORD(v19) = v30;
                  LODWORD(v19) = 0;
                  v15 = ZwMapViewOfSection(
                          Handle,
                          (HANDLE)0xFFFFFFFF,
                          &BaseAddress,
                          v19,
                          v21,
                          (PLARGE_INTEGER)2,
                          0,
                          (SECTION_INHERIT)4,
                          v24,
                          v26);
                  if ( v15 < 0 )
                    goto LABEL_46;
                  v17 = 0;
                  v18 = BaseAddress;
                }
                v15 = ((int (__thiscall *)(int (__stdcall *)(_DWORD *, _DWORD *), _DWORD *, _DWORD *))v33)(
                        v33,
                        v18,
                        v34);
                if ( v15 >= 0 )
                {
                  v12 = v18[1] + v17;
                  if ( ++v31 < v47 )
                    continue;
                }
                goto LABEL_46;
              }
              v15 = -1073741762;
            }
LABEL_46:
            if ( v33 == RtlpExtendedHeapInformationGenerator )
            {
              if ( v15 >= 0 )
              {
                if ( a3 )
                  *a3 = v40 - v39;
                if ( v40 > v41 )
                  v15 = -1073741789;
              }
            }
            else if ( a3 )
            {
              *a3 = 44;
            }
          }
        }
        break;
      }
      NtClose(Handle);
      MaximumSize.LowPart = (v46 + 0xFFFF) & 0xFFFF0000;
    }
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
    if ( Handle )
      NtClose(Handle);
    return v15;
  }
  return result;
}
