/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180055664
 * Callers:
 *     EtwpLogger @ 0x180054FE0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801108B0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     EtwpAddProviderTrackingInfo @ 0x180056B78 (EtwpAddProviderTrackingInfo.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x1800580B0 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1800876A8 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x180087BBC (EtwpWriteRemainingCompressedData.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtReadFile @ 0x18009CED0 (NtReadFile.c)
 *     NtWriteFile @ 0x18009CF10 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x18009D2F0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D730 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r15d
  __int64 Heap; // r14
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // rdx
  int v16; // [rsp+50h] [rbp-29h] BYREF
  int v17; // [rsp+54h] [rbp-25h] BYREF
  __int64 v18; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v21[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v22[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v23; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v17 = 0;
  v16 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 464) != a1 + 464
      || *(_QWORD *)(a1 + 480) != a1 + 480
      || *(_QWORD *)(a1 + 520)
      || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 208);
    }
    else
    {
      VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v20, v22, 24LL, 3);
      if ( VolumeInformationFile < 0 )
        goto LABEL_23;
      v7 = -v23 & (v23 + 7);
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v9 = *(_QWORD *)(a1 + 144);
    v18 = 0LL;
    VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v20, Heap, v7, &v18, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_22;
    v10 = *(_DWORD *)Heap;
    if ( v7 < *(_DWORD *)Heap )
      v10 = v7;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 384);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 388);
      v11 = *(_DWORD *)(a1 + 324);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v10, v17, v16);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    *(_DWORD *)(Heap + 48) = *(_DWORD *)(Heap + 4);
    EtwpAddReloggedHeaderExtensionEvents(a1, Heap, v10);
    EtwpAddProviderTrackingInfo(a1, Heap, v10);
    v12 = NtWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v20, Heap, v10, &v18, 0LL);
    VolumeInformationFile = v12;
    if ( a2 )
      goto LABEL_22;
    if ( v12 < 0 )
      goto LABEL_22;
    v13 = *(_DWORD *)(a1 + 324);
    if ( (v13 & 0x4000020) == 0 )
      goto LABEL_22;
    if ( (v13 & 0x4000000) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v14 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v14 >= *(unsigned int *)(a1 + 320)
                * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_22:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_23;
      }
    }
    v19 = v14;
    if ( v14 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v21, &v19, 8LL, 20);
    goto LABEL_22;
  }
  VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v17, &v16);
  if ( VolumeInformationFile >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v17;
    *(_DWORD *)(a1 + 388) += v16;
    goto LABEL_2;
  }
LABEL_23:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
