/*
 * XREFs of _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176
 * Callers:
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpAddReloggedHeaderExtensionEvents@12 @ 0x4B2EE302 (_EtwpAddReloggedHeaderExtensionEvents@12.c)
 *     _EtwpAddProviderTrackingInfo@12 @ 0x4B2F0E96 (_EtwpAddProviderTrackingInfo@12.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 *     _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10 (_NtQueryVolumeInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpFinalizeRelogFileHeaderStats@20 @ 0x4B382940 (_EtwpFinalizeRelogFileHeaderStats@20.c)
 *     _EtwpWriteRemainingCompressedData@12 @ 0x4B383377 (_EtwpWriteRemainingCompressedData@12.c)
 */

ULONG __fastcall EtwpFinalizeLogFileHeader(int a1, char a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  unsigned int *Heap; // eax
  NTSTATUS VolumeInformationFile; // edi
  unsigned int *v7; // edi
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v15; // rax
  int v16; // ecx
  int v17; // kr00_4
  unsigned int v18; // [esp-4h] [ebp-74h]
  char v19[8]; // [esp+10h] [ebp-60h] BYREF
  _BYTE v20[8]; // [esp+18h] [ebp-58h] BYREF
  _DWORD v21[3]; // [esp+20h] [ebp-50h] BYREF
  int v22; // [esp+2Ch] [ebp-44h]
  unsigned __int64 v23; // [esp+30h] [ebp-40h] BYREF
  unsigned int *v24; // [esp+3Ch] [ebp-34h]
  int v25; // [esp+40h] [ebp-30h] BYREF
  unsigned int v26; // [esp+44h] [ebp-2Ch]
  unsigned int v27; // [esp+48h] [ebp-28h]
  char v28; // [esp+4Fh] [ebp-21h]
  char v29[20]; // [esp+50h] [ebp-20h] BYREF
  int v30; // [esp+64h] [ebp-Ch]

  v2 = a1;
  v28 = a2;
  v3 = 0;
  v22 = a1;
  v26 = 0;
  v13 = (*(_DWORD *)(a1 + 212) & 0x4000000) == 0;
  v25 = 0;
  if ( !v13 )
  {
    VolumeInformationFile = EtwpWriteRemainingCompressedData(&v25);
    v13 = VolumeInformationFile == 0;
    if ( VolumeInformationFile < 0 )
      goto LABEL_16;
    *(_DWORD *)(v2 + 280) += v26;
    *(_DWORD *)(v2 + 276) += v25;
  }
  if ( *(_DWORD *)(v2 + 332) != v2 + 332
    || *(_DWORD *)(v2 + 340) != v2 + 340
    || *(_DWORD *)(v2 + 360)
    || (*(_DWORD *)(v2 + 212) & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(v2 + 140);
    goto LABEL_4;
  }
  VolumeInformationFile = NtQueryVolumeInformationFile(*(_DWORD *)(v2 + 104), v20, v29, 24, 3);
  v13 = VolumeInformationFile == 0;
  if ( VolumeInformationFile >= 0 )
  {
    v4 = -v30 & (v30 + 3);
LABEL_4:
    v27 = v4;
    Heap = (unsigned int *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v4);
    v24 = Heap;
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v21[0] = 0;
    v21[1] = 0;
    VolumeInformationFile = NtReadFile(*(_DWORD *)(v2 + 104), 0, 0, 0, v20, Heap, v4, v21, 0);
    if ( VolumeInformationFile < 0 )
      goto LABEL_15;
    v7 = v24;
    v8 = v27;
    if ( v27 >= *v24 )
    {
      v8 = *v24;
      v27 = *v24;
    }
    if ( !v28 )
    {
      v24[29] = *(_DWORD *)(v2 + 136);
      v7[35] = *(_DWORD *)(v2 + 280);
      v7[38] += *(_DWORD *)(v2 + 272);
      v7[93] += *(_DWORD *)(v2 + 276);
      v9 = *(_DWORD *)(v2 + 212);
      if ( (v9 & 0x10000) != 0 )
      {
        if ( (v9 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(v8, v26, v25);
      }
      else
      {
        while ( 1 )
        {
          v10 = MEMORY[0x7FFE0018];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        v7 = v24;
        v3 = 0;
        v2 = v22;
        v24[30] = MEMORY[0x7FFE0014];
        v7[31] = v10;
      }
    }
    v18 = v27;
    v7[12] = v7[1];
    EtwpAddReloggedHeaderExtensionEvents(v18);
    EtwpAddProviderTrackingInfo(v27);
    v11 = NtWriteFile(*(_DWORD *)(v2 + 104), 0, 0, 0, v20, v7, v27, v21, 0);
    VolumeInformationFile = v11;
    if ( v28 )
      goto LABEL_15;
    if ( v11 < 0 )
      goto LABEL_15;
    v12 = *(_DWORD *)(v2 + 212);
    if ( (v12 & 0x4000020) == 0 )
      goto LABEL_15;
    if ( (v12 & 0x4000000) != 0 )
    {
      v15 = *(_QWORD *)(v2 + 248);
    }
    else
    {
      v16 = 1024;
      if ( (v12 & 0x2000) == 0 )
        v16 = 0x100000;
      v17 = v16 * *(_DWORD *)(v2 + 208);
      v26 = ((unsigned int)v16 * (unsigned __int64)*(unsigned int *)(v2 + 208)) >> 32;
      v15 = *(unsigned int *)(v2 + 140) * (unsigned __int64)*(unsigned int *)(v2 + 280);
      if ( v15 >= __PAIR64__(v26, v17) )
        goto LABEL_15;
    }
    v23 = v15;
    if ( v15 )
      VolumeInformationFile = ZwSetInformationFile(*(_DWORD *)(v2 + 104), v19, &v23, 8, 20);
LABEL_15:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v24);
    v13 = VolumeInformationFile == 0;
  }
LABEL_16:
  if ( !v13 )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v3;
}
