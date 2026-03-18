/*
 * XREFs of NVMeMapError @ 0x1C0001008
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00034C8 (GetSrbScsiData.c)
 *     GetLunExtension @ 0x1C0003660 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C00047A8 (NVMeIsAllowedWithinThrottleLimit.c)
 *     memmove @ 0x1C0005200 (memmove.c)
 */

void *__fastcall NVMeMapError(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // r13
  char v5; // si
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r15d
  unsigned int v12; // edx
  char v13; // al
  void *result; // rax
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 LunExtension; // rdi
  unsigned int v20; // edx
  int v21; // ecx
  bool v22; // zf
  int v23; // ecx
  bool v24; // zf
  unsigned int v25; // edx
  char v26; // al
  unsigned int v27; // ebx
  char *v28; // [rsp+D0h] [rbp-80h] BYREF
  void *v29; // [rsp+D8h] [rbp-78h] BYREF
  __int128 Src; // [rsp+E0h] [rbp-70h] BYREF
  __int16 v31; // [rsp+F0h] [rbp-60h]
  __int128 v32; // [rsp+100h] [rbp-50h]
  __int128 v33; // [rsp+120h] [rbp-30h]
  __int128 v34; // [rsp+130h] [rbp-20h]
  unsigned __int8 v35; // [rsp+190h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+198h] [rbp+48h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v5 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v6 = *(_OWORD *)(SrbExtension + 4096);
  v35 = 0;
  v7 = *(_OWORD *)(SrbExtension + 4128);
  v36 = 0;
  v8 = *(_OWORD *)(SrbExtension + 4144);
  v33 = v7;
  v31 = 0;
  v32 = v6;
  v34 = v8;
  Src = 0LL;
  if ( (unsigned __int8)v6 > 0x11u )
  {
    if ( (unsigned __int8)v6 >= 0x19u )
    {
      if ( (unsigned __int8)v6 <= 0x1Au )
      {
        if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 3LL, &v36) )
        {
          LunExtension = GetLunExtension(a1, DWORD1(v32));
          StorPortExtendedFunction(
            87LL,
            a1,
            LunExtension,
            1LL,
            12,
            L"Directive Send/Receive Error",
            16LL,
            2,
            0,
            a2,
            L"OPC",
            (unsigned __int8)v6,
            L"SCT",
            ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
            L"SC",
            (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
            L"Throttled Instance Count",
            v36);
        }
      }
      else if ( (unsigned __int8)v6 == 128 )
      {
        StorPortExtendedFunction(
          87LL,
          a1,
          0LL,
          1LL,
          12,
          L"Format NVM Error",
          16LL,
          2,
          0,
          a2,
          L"OPC",
          (unsigned __int8)v6,
          L"SCT",
          ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
          L"SC",
          (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
          L"LBAF",
          BYTE8(v33) & 0xF);
      }
      else if ( (unsigned int)(unsigned __int8)v6 - 129 <= 1
             && (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 4LL, &v36) )
      {
        v18 = GetLunExtension(a1, DWORD1(v32));
        StorPortExtendedFunction(
          87LL,
          a1,
          v18,
          1LL,
          12,
          L"Security Send/Receive Error",
          16LL,
          2,
          0,
          a2,
          L"OPC",
          (unsigned __int8)v6,
          L"SCT",
          ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
          L"SC",
          (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
          L"Throttled Instance Count",
          v36);
      }
    }
  }
  else if ( (unsigned __int8)v6 == 17 )
  {
    StorPortExtendedFunction(
      87LL,
      a1,
      0LL,
      1LL,
      12,
      L"NVMe Firmware Download Error",
      16LL,
      2,
      0,
      a2,
      L"OPC",
      (unsigned __int8)v6,
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
      L"SC",
      (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
      L"NUMD",
      DWORD2(v33));
  }
  else if ( (_BYTE)v6 )
  {
    switch ( (unsigned __int8)v6 )
    {
      case 1u:
        if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 2LL, &v36) )
        {
          v16 = GetLunExtension(a1, DWORD1(v32));
          StorPortExtendedFunction(
            86LL,
            a1,
            v16,
            1LL,
            12,
            L"NVMe Write Error",
            1LL,
            2,
            0,
            a2,
            L"OPC",
            (unsigned __int8)v6,
            L"SCT",
            ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
            L"SC",
            (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
            L"Throttled Instance Count",
            v36);
        }
        break;
      case 2u:
        if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 1LL, &v36) )
        {
          v9 = GetLunExtension(a1, DWORD1(v32));
          StorPortExtendedFunction(
            86LL,
            a1,
            v9,
            1LL,
            12,
            L"NVMe Read Error",
            1LL,
            2,
            0,
            a2,
            L"OPC",
            (unsigned __int8)v6,
            L"SCT",
            ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
            L"SC",
            (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
            L"Throttled Instance Count",
            v36);
        }
        break;
      case 0x10u:
        StorPortExtendedFunction(
          87LL,
          a1,
          0LL,
          1LL,
          12,
          L"NVMe Firmware Commit Error",
          16LL,
          2,
          0,
          a2,
          L"OPC",
          (unsigned __int8)v6,
          L"SCT",
          ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
          L"SC",
          (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
          L"FS",
          BYTE8(v33) & 7);
        break;
    }
  }
  else if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 0LL, &v36) )
  {
    v17 = GetLunExtension(a1, DWORD1(v32));
    StorPortExtendedFunction(
      86LL,
      a1,
      v17,
      1LL,
      12,
      L"NVMe Flush Error",
      1LL,
      2,
      0,
      a2,
      L"OPC",
      0LL,
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7,
      L"SC",
      (unsigned __int8)((unsigned __int64)*(unsigned __int16 *)(SrbExtension + 4250) >> 1),
      L"Throttled Instance Count",
      v36);
  }
  v10 = *(unsigned __int16 *)(SrbExtension + 4250);
  v11 = 18;
  if ( ((v10 >> 9) & 7) == 0 )
  {
    v25 = v10 >> 1;
    if ( (unsigned __int8)v25 > 0x80u )
    {
      if ( (unsigned __int8)v25 != 129 )
      {
        if ( (unsigned __int8)v25 != 130 )
        {
          if ( (unsigned __int8)v25 != 131 )
            goto LABEL_19;
          v5 = 24;
          WORD6(Src) = 2348;
          v13 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_18;
        }
        v26 = BYTE2(Src) & 0xF2;
        *(_BYTE *)(a2 + 3) = 4;
        LOBYTE(Src) = -16;
        v5 = 2;
        BYTE7(Src) = 10;
        BYTE2(Src) = v26 | 2;
        if ( *(__int16 *)(SrbExtension + 4250) >= 0 )
          WORD6(Src) = 260;
        else
          WORD6(Src) = 4;
        goto LABEL_20;
      }
LABEL_148:
      v13 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_149;
    }
    if ( (unsigned __int8)v25 == 128 )
    {
      WORD6(Src) = 33;
      v13 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_17;
    }
    if ( (unsigned __int8)v25 > 0xEu )
    {
      if ( (unsigned __int8)v25 <= 0x16u )
      {
        if ( (unsigned __int8)v25 == 22 )
          goto LABEL_16;
        if ( (unsigned __int8)v25 == 15 || (unsigned __int8)v25 == 16 || (unsigned __int8)v25 == 17 )
          goto LABEL_88;
        if ( (unsigned __int8)v25 != 18 )
        {
          if ( (unsigned __int8)v25 == 19 || (unsigned __int8)v25 == 20 )
            goto LABEL_16;
          if ( (unsigned __int8)v25 != 21 )
            goto LABEL_19;
        }
        goto LABEL_132;
      }
      switch ( (unsigned __int8)v25 )
      {
        case 0x18u:
          goto LABEL_16;
        case 0x19u:
          WORD6(Src) = 42;
          v13 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_17;
        case 0x1Au:
          goto LABEL_16;
      }
      if ( (unsigned __int8)v25 != 27 )
      {
        if ( (unsigned __int8)v25 != 28 )
        {
          v22 = (unsigned __int8)v25 == 30;
LABEL_67:
          if ( !v22 )
            goto LABEL_19;
          goto LABEL_16;
        }
        v13 = BYTE2(Src) & 0xF0 | 4;
LABEL_149:
        WORD6(Src) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      if ( (unsigned __int8)v25 == 14 )
        goto LABEL_88;
      if ( (unsigned __int8)v25 > 7u )
      {
        if ( (unsigned __int8)v25 != 8 && (unsigned __int8)v25 != 9 && (unsigned __int8)v25 != 10 )
        {
          if ( (unsigned __int8)v25 == 11 )
          {
            WORD6(Src) = 2336;
            v13 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_17;
          }
          v23 = (unsigned __int8)v25 - 12;
          if ( (unsigned __int8)v25 == 12 )
          {
            WORD6(Src) = 44;
            v13 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_17;
          }
LABEL_87:
          if ( v23 != 1 )
            goto LABEL_19;
          goto LABEL_88;
        }
      }
      else if ( (unsigned __int8)v25 != 7 )
      {
        if ( !(_BYTE)v25 )
        {
          *(_BYTE *)(a2 + 3) = 1;
          v5 = 0;
          goto LABEL_20;
        }
        if ( (unsigned __int8)v25 != 1 )
        {
          if ( (unsigned __int8)v25 == 2 )
            goto LABEL_16;
          if ( (unsigned __int8)v25 == 3 )
          {
            WORD6(Src) = 35;
            v13 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_17;
          }
          if ( (unsigned __int8)v25 != 4 )
          {
            if ( (unsigned __int8)v25 == 5 )
            {
              v5 = 34;
              WORD6(Src) = 2059;
              v13 = BYTE2(Src) & 0xF0 | 0xB;
              goto LABEL_18;
            }
            if ( (unsigned __int8)v25 != 6 )
              goto LABEL_19;
            WORD6(Src) = 68;
            v13 = BYTE2(Src) & 0xF0 | 4;
LABEL_17:
            v5 = 2;
LABEL_18:
            BYTE2(Src) = v13;
            BYTE7(Src) = 10;
            LOBYTE(Src) = -16;
LABEL_19:
            *(_BYTE *)(a2 + 3) = 4;
            goto LABEL_20;
          }
          goto LABEL_148;
        }
LABEL_132:
        WORD6(Src) = 32;
        v13 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_17;
      }
    }
    v5 = 34;
    v13 = BYTE2(Src) & 0xF0 | 0xB;
    WORD6(Src) = 0;
    goto LABEL_18;
  }
  if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) == 1 )
  {
    v12 = v10 >> 1;
    if ( (unsigned __int8)v12 > 0x80u )
    {
      v21 = (unsigned __int8)v12 - 129;
      v24 = (unsigned __int8)v12 == 129;
    }
    else
    {
      if ( (unsigned __int8)v12 == 128 )
      {
LABEL_16:
        WORD6(Src) = 36;
        v13 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_17;
      }
      if ( (unsigned __int8)v12 <= 0x11u )
      {
        if ( (unsigned __int8)v12 != 17 )
        {
          if ( (unsigned __int8)v12 <= 9u )
          {
            if ( (unsigned __int8)v12 == 9 )
              goto LABEL_16;
            if ( !(_BYTE)v12 || (unsigned __int8)v12 == 1 )
            {
              WORD6(Src) = 38;
              v13 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_17;
            }
            if ( (unsigned __int8)v12 != 2 && (unsigned __int8)v12 != 3 && (unsigned __int8)v12 != 5 )
            {
              if ( (unsigned __int8)v12 == 6 )
                goto LABEL_16;
              v21 = (unsigned __int8)v12 - 7;
              if ( (unsigned __int8)v12 != 7 )
                goto LABEL_65;
            }
            goto LABEL_88;
          }
          if ( (unsigned __int8)v12 == 10 )
          {
            WORD6(Src) = 305;
            v13 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_17;
          }
          if ( (unsigned __int8)v12 != 11 )
          {
            if ( (unsigned __int8)v12 == 12
              || (unsigned __int8)v12 == 13
              || (unsigned __int8)v12 == 14
              || (unsigned __int8)v12 == 15 )
            {
              goto LABEL_16;
            }
            if ( (unsigned __int8)v12 != 16 )
              goto LABEL_19;
          }
        }
        goto LABEL_77;
      }
      if ( (unsigned __int8)v12 <= 0x1Au )
      {
        if ( (unsigned __int8)v12 == 26 || (unsigned __int8)v12 == 18 )
        {
LABEL_77:
          v13 = BYTE2(Src) & 0xF0 | 6;
          goto LABEL_149;
        }
        if ( (unsigned __int8)v12 == 19
          || (unsigned __int8)v12 == 20
          || (unsigned __int8)v12 == 21
          || (unsigned __int8)v12 == 22 )
        {
          goto LABEL_16;
        }
        v23 = (unsigned __int8)v12 - 24;
        if ( (unsigned __int8)v12 != 24 )
          goto LABEL_87;
LABEL_88:
        v13 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_149;
      }
      if ( (unsigned __int8)v12 == 27
        || (unsigned __int8)v12 == 28
        || (unsigned __int8)v12 == 30
        || (unsigned __int8)v12 == 31
        || (unsigned __int8)v12 == 32 )
      {
        goto LABEL_16;
      }
      v21 = (unsigned __int8)v12 - 33;
      v24 = (unsigned __int8)v12 == 33;
    }
    if ( v24 )
      goto LABEL_16;
LABEL_65:
    v22 = v21 == 1;
    goto LABEL_67;
  }
  if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) != 2 )
    goto LABEL_19;
  v20 = v10 >> 1;
  *(_BYTE *)(a2 + 3) = 4;
  switch ( (unsigned __int8)v20 )
  {
    case 0x80u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD6(Src) = 3;
      break;
    case 0x81u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD6(Src) = 17;
      break;
    case 0x82u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD6(Src) = 272;
      break;
    case 0x83u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD6(Src) = 529;
      break;
    case 0x84u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD6(Src) = 785;
      break;
    case 0x85u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
      WORD6(Src) = 29;
      break;
    case 0x86u:
      v5 = 2;
      LOBYTE(Src) = -16;
      BYTE7(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      WORD6(Src) = 2336;
      break;
  }
LABEL_20:
  result = (void *)GetSrbScsiData(a2, 0, (unsigned int)&v28, (unsigned int)&v29, (__int64)&v35);
  if ( v28 )
    *v28 = v5;
  if ( (Src & 0x80u) != 0LL )
  {
    v15 = (char *)v29;
    if ( v29 )
    {
      v27 = v35;
      if ( v35 )
      {
        if ( v35 <= 0x12u )
          v11 = v35;
        result = memmove(v29, &Src, v11);
        *(_BYTE *)(a2 + 3) |= 0x80u;
        if ( v27 > v11 )
          return (void *)NVMeZeroMemory(&v15[v11], v27 - v11);
      }
    }
  }
  return result;
}
