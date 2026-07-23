/*
 * XREFs of _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307
 * Callers:
 *     _RtlCreateProcessParametersWithTemplate@12 @ 0x4B2A8270 (_RtlCreateProcessParametersWithTemplate@12.c)
 *     _RtlCreateProcessParameters@40 @ 0x4B335950 (_RtlCreateProcessParameters@40.c)
 *     _RtlCreateProcessParametersEx@44 @ 0x4B335990 (_RtlCreateProcessParametersEx@44.c)
 * Callees:
 *     _RtlpCopyProcString@16 @ 0x4B2A8706 (_RtlpCopyProcString@16.c)
 *     ValidateStringParameter @ 0x4B2A877F (ValidateStringParameter.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpGetBlockSizeEx@8 @ 0x4B2DB9E7 (_RtlpGetBlockSizeEx@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlDeNormalizeProcessParams@4 @ 0x4B3359D0 (_RtlDeNormalizeProcessParams@4.c)
 */

int __fastcall RtlCreateProcessParametersInternal(
        _RTL_USER_PROCESS_PARAMETERS **a1,
        unsigned __int16 *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        void *Src,
        int *a7,
        int *a8,
        int *a9,
        int *a10,
        int a11,
        int a12)
{
  int v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  unsigned __int16 *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int *v20; // edx
  int v21; // eax
  int v22; // eax
  int *v23; // eax
  unsigned int v24; // edi
  unsigned int BlockSize; // eax
  unsigned int v26; // ebx
  _RTL_USER_PROCESS_PARAMETERS *Heap; // esi
  int v28; // ecx
  int v29; // eax
  SIZE_T v31; // [esp-4h] [ebp-30h]
  size_t v32; // [esp-4h] [ebp-30h]
  int v34; // [esp+10h] [ebp-1Ch]
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [esp+1Ch] [ebp-10h]
  unsigned int Size; // [esp+20h] [ebp-Ch]
  char v38; // [esp+2Bh] [ebp-1h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return -1073741811;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( ValidateStringParameter(a2) < 0 )
    return -1073741811;
  v12 = a3 ? ValidateStringParameter(a3) : 0;
  if ( v12 < 0 )
    return -1073741811;
  v38 = 0;
  v34 = 0;
  if ( a4 )
  {
    v34 = *a4 >> 1;
    if ( ValidateStringParameter(a4) < 0 || !v13 )
      return -1073741811;
    if ( *(_WORD *)(*(_DWORD *)(v14 + 4) + 2 * v13 - 2) == 92 )
      goto LABEL_12;
    if ( v13 > 0x103 )
      return -1073741811;
    v38 = 1;
  }
LABEL_12:
  v15 = a5;
  if ( a5 )
    v16 = ValidateStringParameter(a5);
  else
    v16 = 0;
  if ( v16 < 0 )
    return -1073741811;
  v17 = a7 ? ValidateStringParameter(a7) : 0;
  if ( v17 < 0 )
    return -1073741811;
  v18 = a8 ? ValidateStringParameter(a8) : 0;
  if ( v18 < 0 )
    return -1073741811;
  v19 = a9 ? ValidateStringParameter(a9) : 0;
  if ( v19 < 0 )
    return -1073741811;
  v20 = a10;
  v21 = a10 ? ValidateStringParameter(a10) : 0;
  if ( v21 < 0 )
    return -1073741811;
  v22 = a11 ? ValidateStringParameter(a11) : 0;
  if ( v22 < 0 )
    return -1073741811;
  if ( !a5 )
  {
    v15 = a2;
    a5 = a2;
  }
  if ( !a7 )
    a7 = &RtlpNullString;
  v23 = a8;
  if ( !a8 )
  {
    v23 = &RtlpNullString;
    a8 = &RtlpNullString;
  }
  if ( !a9 )
    a9 = &RtlpNullString;
  if ( !v20 )
  {
    v20 = &RtlpNullString;
    a10 = &RtlpNullString;
  }
  v24 = ((*v15 + 5) & 0xFFFFFFFC)
      + ((*((unsigned __int16 *)a9 + 1) + 3) & 0xFFFFFFFC)
      + ((*a2 + 5) & 0xFFFFFFFC)
      + ((*((unsigned __int16 *)v23 + 1) + 3) & 0xFFFFFFFC)
      + ((*((unsigned __int16 *)a7 + 1) + 3) & 0xFFFFFFFC)
      + 1224;
  if ( *(_WORD *)v20 )
    v24 += (*((unsigned __int16 *)v20 + 1) + 3) & 0xFFFFFFFC;
  if ( a3 )
    v24 += (*(unsigned __int16 *)(a3 + 2) + 3) & 0xFFFFFFFC;
  if ( a11 )
    v24 += (*(unsigned __int16 *)(a11 + 2) + 3) & 0xFFFFFFFC;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1);
  else
    BlockSize = ProcessParameters->EnvironmentSize;
  Size = BlockSize;
  v26 = (BlockSize + 3) & 0xFFFFFFFC;
  if ( v26 >= BlockSize )
  {
    while ( 1 )
    {
      if ( v26 + v24 < v24 )
        return -1073741675;
      LODWORD(v31) = v26 + v24;
      Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v31);
      if ( !Heap )
        return -1073741670;
      if ( Src )
        break;
      RtlEnterCriticalSection(&FastPebLock);
      Size = ProcessParameters->EnvironmentSize;
      if ( Size <= v26 )
      {
        LODWORD(v31) = ProcessParameters->EnvironmentSize;
        memcpy((char *)Heap + v24, ProcessParameters->Environment, v31);
        RtlLeaveCriticalSection(&FastPebLock);
        v26 = (Size + 3) & 0xFFFFFFFC;
LABEL_54:
        LODWORD(v32) = 704;
        memset(Heap, 0, v32);
        Heap->EnvironmentSize = v26;
        Heap->Environment = (char *)Heap + v24;
        Heap->MaximumLength = v24;
        Heap->Length = v24;
        Heap->Flags = 1;
        Heap->ConsoleFlags = ProcessParameters->ConsoleFlags & 1;
        if ( a4 )
        {
          RtlpCopyProcString(a4, 520);
          if ( v38 )
          {
            Heap->CurrentDirectory.DosPath.Buffer[v34] = 92;
            Heap->CurrentDirectory.DosPath.Length += 2;
          }
        }
        else
        {
          RtlEnterCriticalSection(&FastPebLock);
          RtlpCopyProcString(&ProcessParameters->CurrentDirectory, 520);
          RtlLeaveCriticalSection(&FastPebLock);
        }
        if ( a3 )
          RtlpCopyProcString(a3, *(unsigned __int16 *)(a3 + 2));
        if ( a11 )
          RtlpCopyProcString(a11, *(unsigned __int16 *)(a11 + 2));
        RtlpCopyProcString(a2, *a2 + 2);
        v28 = *a5;
        v29 = a5[1];
        if ( (_WORD)v28 != (_WORD)v29 )
          v29 = v28 + 2;
        RtlpCopyProcString(a5, v29);
        RtlpCopyProcString(a7, *((unsigned __int16 *)a7 + 1));
        RtlpCopyProcString(a8, *((unsigned __int16 *)a8 + 1));
        RtlpCopyProcString(a9, *((unsigned __int16 *)a9 + 1));
        if ( *(_WORD *)a10 )
          RtlpCopyProcString(a10, *((unsigned __int16 *)a10 + 1));
        if ( (a12 & 1) == 0 )
          Heap = RtlDeNormalizeProcessParams(Heap);
        *a1 = Heap;
        return 0;
      }
      RtlLeaveCriticalSection(&FastPebLock);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v26 = (Size + 3) & 0xFFFFFFFC;
      if ( v26 < Size )
        return -1073741675;
    }
    LODWORD(v31) = Size;
    memcpy((char *)Heap + v24, Src, v31);
    goto LABEL_54;
  }
  return -1073741675;
}
