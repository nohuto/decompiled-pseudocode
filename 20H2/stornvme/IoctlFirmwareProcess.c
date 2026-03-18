/*
 * XREFs of IoctlFirmwareProcess @ 0x1C0001738
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     FirmwareActivate @ 0x1C0010104 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0010318 (FirmwareDownload.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int Info; // eax
  unsigned int v9; // edi
  unsigned __int8 v11; // bp
  __int64 v12; // r9
  __int64 v13; // r10

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  v6 = *(unsigned int *)(a2 + v5);
  if ( (unsigned int)v6 < 0x34 )
  {
    v11 = 21;
    *(_BYTE *)(a2 + 3) = 21;
    v12 = 0LL;
    v13 = 0LL;
    v9 = -1056964602;
LABEL_19:
    StorPortExtendedFunction(
      87LL,
      a1,
      0LL,
      0LL,
      1,
      L"Firmware Ioctl",
      64LL,
      2,
      0,
      a2,
      L"SrbStatus",
      v11,
      L"SrbBufferLen",
      *(unsigned int *)(a2 + v5),
      L"Function",
      v13,
      L"Version",
      v12);
    return v9;
  }
  v7 = (unsigned int)v4[11];
  if ( v6 < v7 + (unsigned __int64)(unsigned int)v4[12] )
    goto LABEL_14;
  if ( v4[7] && (v4[10] & 1) != 0 )
  {
    if ( (unsigned int)v7 >= 0x34 && (v7 & 3) == 0 )
    {
      switch ( v4[9] )
      {
        case 1:
          Info = FirmwareGetInfo(a1, a2);
LABEL_11:
          v9 = Info;
          goto LABEL_12;
        case 2:
          Info = FirmwareDownload(a1, a2);
          goto LABEL_11;
        case 3:
          Info = FirmwareActivate(a1, a2);
          goto LABEL_11;
      }
LABEL_17:
      v9 = -1056964602;
      *(_BYTE *)(a2 + 3) = 21;
      goto LABEL_18;
    }
LABEL_14:
    v4[5] = 3;
    goto LABEL_17;
  }
  v4[5] = 3;
  *(_BYTE *)(a2 + 3) = 21;
  v9 = -1056964602;
LABEL_12:
  if ( v9 )
  {
LABEL_18:
    v12 = (unsigned int)v4[7];
    v13 = (unsigned int)v4[9];
    v11 = *(_BYTE *)(a2 + 3);
    goto LABEL_19;
  }
  return v9;
}
