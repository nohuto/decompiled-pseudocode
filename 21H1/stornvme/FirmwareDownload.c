/*
 * XREFs of FirmwareDownload @ 0x1C0010390
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C0001738 (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0004750 (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C0004784 (GetFirmwareGranularity.c)
 *     FillClippedSGL @ 0x1C001009C (FillClippedSGL.c)
 *     NVMeQueueWorkItem @ 0x1C0013BCC (NVMeQueueWorkItem.c)
 */

__int64 __fastcall FirmwareDownload(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 SrbExtension; // r14
  _DWORD *v7; // rdi
  char *v8; // rbp
  char *v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v16; // r9
  unsigned int FirmwareGranularity; // eax
  unsigned int v18; // r12d
  unsigned int *ScatterGatherList; // rax
  int v20; // r9d
  unsigned int v21; // r9d
  __int64 v22; // r9
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+20h] [rbp-E8h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D8h]
  int v32; // [rsp+38h] [rbp-D0h]
  int v33; // [rsp+38h] [rbp-D0h]
  int v34; // [rsp+40h] [rbp-C8h]
  int v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+80h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-80h]
  void *v54; // [rsp+120h] [rbp+18h] BYREF

  v3 = 0;
  v54 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(_DWORD **)(v5 + 64);
  else
    v7 = *(_DWORD **)(v5 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x20u )
    v9 = (char *)v7 + (unsigned int)v7[11];
  else
    v9 = 0LL;
  v10 = (unsigned int)v7[12];
  if ( v9 )
  {
    if ( (unsigned int)v10 < 0x20 )
      goto LABEL_13;
    v11 = *((_QWORD *)v9 + 2);
    v12 = v11 + 32;
  }
  else
  {
    if ( (unsigned int)v10 < 0x18 )
      goto LABEL_13;
    v11 = *((_QWORD *)v8 + 2);
    v12 = v11 + 24;
  }
  if ( v10 >= v12 && v11 && (v8[8] & 3) == 0 && (*((_QWORD *)v8 + 2) & 3) == 0 )
  {
    ControllerMaxTransferSize = GetControllerMaxTransferSize(a1);
    if ( v16 > ControllerMaxTransferSize )
    {
      v7[5] = 4;
      goto LABEL_14;
    }
    if ( (a1[6] & 0x800) == 0 )
    {
      NVMeQueueWorkItem(a1, NVMeControllerValidateFirmwareActivateCapability);
      a1[6] |= 0x800u;
    }
    FirmwareGranularity = GetFirmwareGranularity((__int64)a1);
    if ( !FirmwareGranularity || !(*((_QWORD *)v8 + 2) % (unsigned __int64)FirmwareGranularity) )
    {
      if ( (a1[14] & 8) != 0 )
      {
        v23 = v7[11];
        if ( v9 )
          v24 = v23 + 32;
        else
          v24 = v23 + 24;
        *(_DWORD *)(SrbExtension + 4216) = v24;
      }
      else
      {
        v18 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
        StorPortExtendedFunction(
          0LL,
          a1,
          24 * v18 + 16,
          1701672526LL,
          (unsigned int)&v54,
          v28,
          v30,
          v32,
          v34,
          v36,
          v38,
          v40,
          v42,
          v44,
          v46,
          v48,
          v50,
          v52);
        if ( !v54 )
        {
          v7[5] = 1;
          v13 = 4LL;
          v3 = -1056964605;
          goto LABEL_16;
        }
        NVMeZeroMemory(v54, 24 * v18 + 16);
        ScatterGatherList = (unsigned int *)StorPortGetScatterGatherList(a1, a2);
        v20 = v7[11];
        if ( v9 )
          v21 = v20 + 32;
        else
          v21 = v20 + 24;
        if ( !FillClippedSGL(ScatterGatherList, (unsigned int *)v54, v18, v21) )
        {
          if ( v54 )
          {
            StorPortExtendedFunction(
              1LL,
              a1,
              v54,
              v22,
              v27,
              v29,
              v31,
              v33,
              v35,
              v37,
              v39,
              v41,
              v43,
              v45,
              v47,
              v49,
              v51,
              v53);
            v54 = 0LL;
          }
          v3 = -1056964607;
          v7[5] = 4;
          goto LABEL_15;
        }
        *(_QWORD *)(SrbExtension + 4216) = v54;
      }
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      v25 = *((_QWORD *)v8 + 1);
      v26 = (*((_QWORD *)v8 + 2) >> 2) - 1;
      *(_BYTE *)(SrbExtension + 4096) = 17;
      *(_DWORD *)(SrbExtension + 4136) = v26;
      *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareDownloadCompletion;
      *(_DWORD *)(SrbExtension + 4140) = v25 >> 2;
      return v3;
    }
  }
LABEL_13:
  v7[5] = 3;
LABEL_14:
  v3 = -1056964602;
LABEL_15:
  v13 = 21LL;
LABEL_16:
  *(_BYTE *)(a2 + 3) = v13;
  StorPortExtendedFunction(
    87LL,
    a1,
    0LL,
    1LL,
    1,
    L"Firmware Download",
    64LL,
    2,
    0,
    a2,
    L"SrbStatus",
    v13,
    L"ReturnCode",
    (unsigned int)v7[5],
    L"BufferLength",
    (unsigned int)v7[12],
    L"BufferSize",
    *((_QWORD *)v8 + 2));
  return v3;
}
