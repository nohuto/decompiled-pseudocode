/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C0007A80
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00077E4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00462EC (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0007C48 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C0007CA8 (Endpoint_GetMaxPrimaryStreams.c)
 */

unsigned int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  char v7; // al
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned __int8 v12; // cl
  int v13; // edx
  int v14; // eax
  int MaxPrimaryStreams; // eax
  _DWORD *v16; // r11
  __int64 v17; // rcx
  __int64 DequeuePointer; // rax
  __int64 v19; // r11
  int v20; // r10d
  __int16 v21; // cx
  unsigned int v22; // r10d
  unsigned int result; // eax
  char v24; // cl
  unsigned __int8 v25; // al
  int v26; // ecx
  int v27; // eax
  int v28; // r10d
  char v29; // cl
  int v30; // eax
  int v31; // ecx
  signed __int64 v32[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  *(_OWORD *)v32 = *(_OWORD *)(*(_QWORD *)a2 + 336LL);
  if ( v7 == 1
    || ((v7 == 3) & _bittest64(v32, 0x34u)) != 0
    && *(char *)(a2 + 98) < 0
    && (v8 = *(_QWORD *)(a2 + 16), *(_WORD *)(v8 + 124) == 1529)
    && *(_WORD *)(v8 + 126) == 4353
    && *(_DWORD *)(v8 + 36) > 1u )
  {
    v9 = 0;
  }
  else
  {
    v9 = 6;
  }
  v10 = v9 | *(_DWORD *)(a3 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(a3 + 4) = v10;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_BYTE *)(a2 + 102);
  switch ( v11 )
  {
    case 0:
      if ( (((v10 & 0x38) - 24) & 0xFFFFFFDF) != 0 )
      {
        LOWORD(v14) = *(_WORD *)(a3 + 6);
      }
      else
      {
        if ( v12 >= 0x10u )
          *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
        else
          *(_BYTE *)(a3 + 2) = 6;
        v5 = *(unsigned __int16 *)(a3 + 6);
        *(_WORD *)(a3 + 18) = v5;
        LOWORD(v14) = v5;
        *(_BYTE *)(a3 + 3) = 0;
      }
      v14 = (unsigned __int16)v14;
      goto LABEL_16;
    case 1:
      v13 = v10 & 0x38;
      if ( ((v13 - 24) & 0xFFFFFFDF) != 0 )
      {
        if ( ((v13 - 8) & 0xFFFFFFDF) != 0 )
          goto LABEL_15;
        *(_WORD *)(a3 + 2) = 3;
      }
      else
      {
        if ( v12 < 2u )
        {
          *(_BYTE *)(a3 + 2) = 3;
        }
        else if ( v12 < 4u )
        {
          *(_BYTE *)(a3 + 2) = 4;
        }
        else if ( v12 >= 8u )
        {
          if ( v12 < 0x10u )
            *(_BYTE *)(a3 + 2) = 6;
          else
            *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
        }
        else
        {
          *(_BYTE *)(a3 + 2) = 5;
        }
        *(_BYTE *)(a3 + 3) = 0;
      }
      v5 = *(unsigned __int16 *)(a3 + 6);
      *(_WORD *)(a3 + 18) = v5;
LABEL_15:
      v14 = *(unsigned __int16 *)(a3 + 6);
LABEL_16:
      *(_DWORD *)(a2 + 152) = v14;
      break;
    case 2:
      if ( (((v10 & 0x38) - 8) & 0xFFFFFFCF) != 0 )
      {
        LOBYTE(v26) = *(_BYTE *)(a3 + 5);
        LOWORD(v27) = *(_WORD *)(a3 + 6);
      }
      else
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v24 = 5;
          else
            v24 = v12 - 1;
        }
        else
        {
          v24 = 0;
        }
        *(_BYTE *)(a3 + 2) = v24;
        v25 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v26 = v25;
        v27 = *(unsigned __int16 *)(a3 + 6);
        *(_BYTE *)(a3 + 5) = v26;
        v5 = v27 * (v26 + 1);
        *(_WORD *)(a3 + 18) = v27 * (v26 + 1);
      }
      *(_DWORD *)(a2 + 152) = (unsigned __int16)v27 * ((unsigned __int8)v26 + 1);
      break;
    case 3:
      v28 = v10 & 0x38;
      if ( ((v28 - 24) & 0xFFFFFFCF) == 0 && v28 != 72 || v28 == 8 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            v29 = 5;
          else
            v29 = v12 - 1;
        }
        else
        {
          v29 = 0;
        }
        *(_BYTE *)(a3 + 2) = v29;
        v30 = *(unsigned __int8 *)(a2 + 106);
        if ( (v30 & 0x80u) == 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ (v30 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v5;
        *(_BYTE *)(a3 + 3) = BYTE2(v5);
      }
      if ( (((v10 & 0x38) - 8) & 0xFFFFFFDF) != 0 )
        v31 = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      else
        v31 = v5;
      *(_DWORD *)(a2 + 152) = v31;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v16 ^= (*v16 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  DequeuePointer = Endpoint_GetDequeuePointer(v17, 0LL);
  v21 = v20;
  *(_QWORD *)(v19 + 8) = DequeuePointer;
  LODWORD(DequeuePointer) = v20;
  v22 = v20 & 0xFFFF7FFF;
  result = DequeuePointer | 0x8000;
  if ( (v21 & 0x7C00) != 0 )
    v22 = result;
  *(_DWORD *)v19 = v22;
  return result;
}
