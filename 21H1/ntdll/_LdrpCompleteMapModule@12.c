/*
 * XREFs of _LdrpCompleteMapModule@12 @ 0x4B2D14E4
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 * Callees:
 *     _LdrpCorValidateImage@4 @ 0x4B2A6D90 (_LdrpCorValidateImage@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _LdrpRelocateImage@16 @ 0x4B2ED3BF (_LdrpRelocateImage@16.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __fastcall LdrpCompleteMapModule(_DWORD *a1, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // esi
  _BYTE *v6; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  void *v12; // ecx
  signed int v13; // eax
  char v14; // al
  char *v15; // eax
  int v16; // [esp-10h] [ebp-2Ch]
  _BYTE v17[4]; // [esp+Ch] [ebp-10h] BYREF
  int v18; // [esp+10h] [ebp-Ch]
  _DWORD *v19; // [esp+14h] [ebp-8h]
  _DWORD *v20; // [esp+18h] [ebp-4h]

  v20 = a1;
  v4 = 0;
  v5 = (_DWORD *)a1[8];
  v16 = v5[6];
  v18 = a2;
  v6 = RtlImageDirectoryEntryToData(a1, v16, 1, 14, (int)v17);
  if ( !v6 )
    goto LABEL_2;
  if ( (v20[4] & 0x800000) != 0 )
    return -1073741701;
  v11 = v5[13] | 0x400000;
  v5[13] = v11;
  if ( (v6[16] & 1) == 0
    || (v12 = (void *)v5[6], v5[13] = v11 | 0x1000000, v13 = LdrpCorValidateImage(v12), v4 = v13, v13 >= 0) )
  {
LABEL_2:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(v5[23] + 16) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (v5[13] & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v19 = (_DWORD *)v5[6];
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (int)NtCurrentPeb()->SharedData + 554;
          else
            v8 = 2147353476;
          v9 = 2147353477;
          if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v15 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v15 & 0x20) != 0 )
              LdrpLogEtwEvent(-1, -1, 0, 0);
          }
          if ( a3 == 1073741827 && (v19 = v5 + 9, v4 = LdrpRelocateImage(v18, v5 + 9), v4 < 0) )
          {
            LdrpLogError(0, v19);
          }
          else
          {
            if ( RtlGetCurrentServiceSessionId() )
              v10 = (int)NtCurrentPeb()->SharedData + 554;
            else
              v10 = 2147353476;
            if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v9 = (int)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v9 & 0x20) != 0 )
                LdrpLogEtwEvent(-1, -1, 0, 0);
            }
          }
        }
      }
      else
      {
        v14 = ShowSnaps;
        if ( (ShowSnaps & 3) != 0 )
        {
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrmap.c",
            930,
            "LdrpCompleteMapModule",
            0,
            "Could not validate the crypto signature for DLL %wZ\n",
            v5 + 9);
          v14 = ShowSnaps;
        }
        if ( (v14 & 0x10) != 0 )
          __debugbreak();
        return -1073740760;
      }
    }
    else
    {
      v5[13] &= ~4u;
    }
  }
  return v4;
}
