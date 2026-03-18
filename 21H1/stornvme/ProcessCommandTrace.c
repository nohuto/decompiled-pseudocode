/*
 * XREFs of ProcessCommandTrace @ 0x1C0002DA0
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x1C00029B0 (ProcessCommandInSpecificQueue.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x1C001B560 (ProcessMultipleCommandsInSpecificQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessCommandTrace(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // r8d
  __int64 *v8; // rdx
  __int64 v9; // r14
  const wchar_t *v10; // r10
  __int64 result; // rax
  __int64 v12; // [rsp+70h] [rbp-E0h]
  __int64 v13; // [rsp+78h] [rbp-D8h]
  __int64 v14; // [rsp+80h] [rbp-D0h]
  __int64 v15; // [rsp+88h] [rbp-C8h]
  __int128 v16; // [rsp+F0h] [rbp-60h]
  __int128 v17; // [rsp+100h] [rbp-50h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(_QWORD *)(v4 + 4096);
  v16 = *(_OWORD *)(v4 + 4128);
  v17 = *(_OWORD *)(v4 + 4144);
  if ( HIDWORD(v5) == -1 || (v6 = *(_DWORD *)(a1 + 200), v7 = 0, !v6) )
  {
LABEL_21:
    v9 = 0LL;
  }
  else
  {
    v8 = (__int64 *)(a1 + 1720);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        if ( *(_DWORD *)(v9 + 16) == HIDWORD(*(_QWORD *)(v4 + 4096)) )
          break;
      }
      ++v7;
      ++v8;
      if ( v7 >= v6 )
        goto LABEL_21;
    }
  }
  v10 = L"Admin Command";
  if ( (*(_BYTE *)(v4 + 4253) & 1) == 0 )
    v10 = L"NVM Command";
  StorPortExtendedFunction(
    87LL,
    a1,
    v9,
    0LL,
    4,
    v10,
    16LL,
    4,
    0,
    a2,
    L"CID",
    (unsigned __int64)(unsigned int)v5 >> 16,
    L"OPC",
    (unsigned __int8)v5,
    L"FUSE",
    ((unsigned int)v5 >> 8) & 3,
    L"PSDT",
    ((unsigned int)v5 >> 15) & 1);
  if ( (*(_BYTE *)(v4 + 4253) & 1) != 0 )
  {
    if ( (unsigned __int8)v5 == 2 )
    {
      return StorPortExtendedFunction(
               87LL,
               a1,
               v9,
               0LL,
               4,
               L"Get Log Page",
               16LL,
               4,
               0,
               a2,
               L"CID",
               (unsigned __int64)(unsigned int)v5 >> 16,
               L"LID",
               BYTE8(v16),
               L"NUMDL",
               (unsigned __int64)DWORD2(v16) >> 16,
               L"NUMDU",
               WORD6(v16));
    }
    else if ( (unsigned __int8)v5 == 10 )
    {
      return StorPortExtendedFunction(
               87LL,
               a1,
               v9,
               0LL,
               4,
               L"Get Features",
               16LL,
               4,
               0,
               a2,
               L"CID",
               (unsigned __int64)(unsigned int)v5 >> 16,
               L"FID",
               BYTE8(v16),
               L"SEL",
               (DWORD2(v16) >> 8) & 7,
               L"CDW11",
               HIDWORD(v16));
    }
    else
    {
      switch ( (char)v5 )
      {
        case 1:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Create IO SQ",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"QID",
                     WORD4(v16),
                     L"QSIZE",
                     (unsigned __int64)DWORD2(v16) >> 16,
                     L"PC",
                     BYTE12(v16) & 1);
          break;
        case 5:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Create IO CQ",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"QID",
                     WORD4(v16),
                     L"QSIZE",
                     (unsigned __int64)DWORD2(v16) >> 16,
                     L"PC",
                     BYTE12(v16) & 1);
          break;
        case 6:
          result = StorPortExtendedFunction(
                     85LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Identify",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"CNS",
                     BYTE8(v16),
                     v12,
                     v13,
                     v14,
                     v15);
          break;
        case 9:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Set Features",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"CDW10",
                     DWORD2(v16),
                     L"CDW11",
                     HIDWORD(v16),
                     L"CDW12",
                     (unsigned int)v17);
          break;
        case 16:
          result = StorPortExtendedFunction(
                     86LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"FW Commit",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"FS",
                     BYTE8(v16) & 7,
                     L"AA",
                     (DWORD2(v16) >> 3) & 3,
                     0LL,
                     0LL);
          break;
        case 17:
          result = StorPortExtendedFunction(
                     86LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"FW Download",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"NUMD",
                     DWORD2(v16),
                     L"OFST",
                     HIDWORD(v16),
                     0LL,
                     0LL);
          break;
        case 25:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Directive Send",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"NUMD",
                     DWORD2(v16),
                     L"DOPER",
                     BYTE12(v16),
                     L"DTYPE",
                     BYTE13(v16));
          break;
        case 26:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Directive Receive",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"NUMD",
                     DWORD2(v16),
                     L"DOPER",
                     BYTE12(v16),
                     L"DTYPE",
                     BYTE13(v16));
          break;
        case -128:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Format NVM",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"LBAF",
                     BYTE8(v16) & 0xF,
                     L"MSET",
                     (DWORD2(v16) >> 4) & 1,
                     L"PI",
                     BYTE8(v16) >> 5);
          break;
        case -127:
          result = StorPortExtendedFunction(
                     86LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Security Send",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"SPSP",
                     (unsigned __int16)(DWORD2(v16) >> 8),
                     L"SECP",
                     (unsigned __int64)DWORD2(v16) >> 24,
                     L"Length",
                     HIDWORD(v16));
          break;
        case -126:
          result = StorPortExtendedFunction(
                     86LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"Security Receive",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"SPSP",
                     (unsigned __int16)(DWORD2(v16) >> 8),
                     L"SECP",
                     (unsigned __int64)DWORD2(v16) >> 24,
                     L"Length",
                     HIDWORD(v16));
          break;
        default:
          result = StorPortExtendedFunction(
                     87LL,
                     a1,
                     v9,
                     0LL,
                     4,
                     L"General Admin",
                     16LL,
                     4,
                     0,
                     a2,
                     L"CID",
                     (unsigned __int64)(unsigned int)v5 >> 16,
                     L"CDW10",
                     DWORD2(v16),
                     L"CDW11",
                     HIDWORD(v16),
                     L"CDW12",
                     (unsigned int)v17);
          break;
      }
    }
  }
  else if ( (unsigned __int8)v5 == 2 || (unsigned __int8)v5 == 1 )
  {
    return StorPortExtendedFunction(
             87LL,
             a1,
             v9,
             0LL,
             4,
             L"RW",
             16LL,
             4,
             0,
             a2,
             L"CID",
             (unsigned __int64)(unsigned int)v5 >> 16,
             L"LBALOW",
             DWORD2(v16),
             L"LBAHIGH",
             HIDWORD(v16),
             L"CDW12",
             (unsigned int)v17);
  }
  else if ( (unsigned __int8)v5 == 9 )
  {
    return StorPortExtendedFunction(
             87LL,
             a1,
             v9,
             0LL,
             4,
             L"Dataset Mgmt",
             16LL,
             4,
             0,
             a2,
             L"CID",
             (unsigned __int64)(unsigned int)v5 >> 16,
             L"NR",
             BYTE8(v16),
             L"IDR",
             BYTE12(v16) & 1,
             L"IDW",
             (HIDWORD(v16) >> 1) & 1);
  }
  else
  {
    return StorPortExtendedFunction(
             87LL,
             a1,
             v9,
             0LL,
             4,
             L"General NVM",
             16LL,
             4,
             0,
             a2,
             L"CID",
             (unsigned __int64)(unsigned int)v5 >> 16,
             L"CDW10",
             DWORD2(v16),
             L"CDW11",
             HIDWORD(v16),
             L"CDW12",
             (unsigned int)v17);
  }
  return result;
}
