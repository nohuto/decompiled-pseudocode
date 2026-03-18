/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     GetControllerMaxTransferSize @ 0x1C0004750 (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C0004784 (GetFirmwareGranularity.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rsi
  __int64 v5; // r14
  _BYTE *v6; // r12
  _DWORD *v7; // rdi
  char *v8; // rbx
  bool v9; // r15
  int v10; // r11d
  char v11; // al
  int FirmwareGranularity; // eax
  __int64 v13; // rcx
  int ControllerMaxTransferSize; // eax
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r9
  __int64 v17; // r8
  unsigned __int8 v18; // cl
  char v19; // al
  __int64 result; // rax
  char v21; // al
  unsigned __int8 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int8 v25; // cl
  char v26; // al
  unsigned int v27; // eax
  unsigned int v28; // r8d
  int v29; // eax
  int v30; // r8d

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1608);
  v6 = *(_BYTE **)(SrbExtension + 4200);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(v3 + 3) != 1 )
  {
    v7[5] = 1;
    goto LABEL_19;
  }
  v9 = *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x18u;
  NVMeZeroMemory((char *)v7 + (unsigned int)v7[11], (unsigned int)v7[12]);
  v10 = 1;
  if ( !v9 )
  {
    *(_DWORD *)v8 = 1;
    *((_DWORD *)v8 + 1) = 16;
    v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
    v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    v8[10] = *v6 & 7;
    v21 = -1;
    if ( ((*v6 >> 4) & 7) != 0 )
      v21 = (*v6 >> 4) & 7;
    v22 = 0;
    v8[11] = v21;
    v16 = *(_BYTE *)(v5 + 260);
    if ( (v16 & 0xE) != 0 )
    {
      while ( 1 )
      {
        v23 = v22;
        v24 = 16LL * v22;
        if ( (unsigned int)v7[12] < (unsigned __int64)(v24 + 32) )
          goto LABEL_33;
        v25 = v22 + 1;
        v8[v24 + 16] = v22 + 1;
        if ( v22 )
          v26 = 0;
        else
          v26 = *(_BYTE *)(v5 + 260) & 1;
        v8[v24 + 17] = v26;
        ++v22;
        *(_QWORD *)&v8[v24 + 24] = *(_QWORD *)&v6[8 * v23 + 8];
        v16 = *(_BYTE *)(v5 + 260);
        if ( v25 >= (unsigned __int8)((v16 >> 1) & 7) )
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
  *(_DWORD *)v8 = 2;
  *((_DWORD *)v8 + 1) = 24;
  v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
  v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
  v8[10] = *v6 & 7;
  v11 = -1;
  if ( ((*v6 >> 4) & 7) != 0 )
    v11 = (*v6 >> 4) & 7;
  v8[11] = v11;
  v8[12] = 1;
  FirmwareGranularity = GetFirmwareGranularity(a1);
  v13 = a1;
  if ( !FirmwareGranularity )
  {
    *((_DWORD *)v8 + 4) = 4;
LABEL_12:
    ControllerMaxTransferSize = GetControllerMaxTransferSize(v13);
    goto LABEL_13;
  }
  *((_DWORD *)v8 + 4) = FirmwareGranularity;
  v27 = GetControllerMaxTransferSize(a1);
  v13 = a1;
  if ( !(v27 % v28) )
    goto LABEL_12;
  v29 = GetControllerMaxTransferSize(a1);
  ControllerMaxTransferSize = v29 - v30;
LABEL_13:
  *((_DWORD *)v8 + 5) = ControllerMaxTransferSize;
  v15 = 0;
  v16 = *(_BYTE *)(v5 + 260);
  if ( (v16 & 0xE) != 0 )
  {
    while ( 1 )
    {
      v17 = v15;
      if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)v15 + 2) )
        break;
      v18 = v10 + v15;
      v8[24 * v15 + 24] = v10 + v15;
      if ( v15 )
        v19 = 0;
      else
        v19 = v10 & *(_BYTE *)(v5 + 260);
      v8[24 * v15 + 25] = v19;
      v15 += v10;
      *(_QWORD *)&v8[24 * v17 + 32] = *(_QWORD *)&v6[8 * v17 + 8];
      v16 = *(_BYTE *)(v5 + 260);
      if ( v18 >= (unsigned __int8)((v16 >> 1) & 7) )
        goto LABEL_18;
    }
LABEL_33:
    v7[12] = 16 * (v10 + ((v16 >> 1) & 7));
    v7[5] = 5;
    goto LABEL_19;
  }
LABEL_18:
  v7[5] = 0;
LABEL_19:
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             SrbExtension + 4200,
             *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
