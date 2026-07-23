/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x14096B614
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407B2664 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407B2A68 (AslFileMappingEnsure.c)
 *     AslpFileGetNtHeaderAttributes @ 0x14096B95C (AslpFileGetNtHeaderAttributes.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // edi
  int NtHeaderAttributes; // eax
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  int v9; // r14d
  int v10; // r15d
  int v11; // ecx
  int v12; // r10d
  int v13; // r11d
  int v14; // esi
  int v15; // r14d
  int v16; // r15d
  _WORD v18[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v20; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int16 v23; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v24; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0;
  v24 = 0;
  v18[0] = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) == 6 )
    {
      *(_DWORD *)(a1 + 664) |= 2u;
      *(_DWORD *)(a1 + 696) |= 2u;
      NtHeaderAttributes = AslpFileGetNtHeaderAttributes(
                             (unsigned int)&v19,
                             (unsigned int)&v20,
                             (unsigned int)&v21,
                             (unsigned int)&v22,
                             (__int64)&v23,
                             (__int64)&v24,
                             (__int64)v18);
      v6 = *(_DWORD *)(a1 + 600);
      v7 = *(_DWORD *)(a1 + 632);
      v8 = *(_DWORD *)(a1 + 728);
      v9 = *(_DWORD *)(a1 + 56);
      v10 = *(_DWORD *)(a1 + 952);
      if ( NtHeaderAttributes < 0 )
      {
        v12 = v6 | 2;
        v13 = v7 | 2;
        v14 = v8 | 2;
        v15 = v9 | 2;
        v16 = v10 | 2;
        v11 = 2;
      }
      else
      {
        *(_QWORD *)(a1 + 592) = v19;
        *(_QWORD *)(a1 + 624) = v20;
        v11 = 1;
        *(_QWORD *)(a1 + 720) = v21;
        v12 = v6 | 1;
        v13 = v7 | 1;
        *(_QWORD *)(a1 + 48) = v22;
        v14 = v8 | 1;
        v15 = v9 | 1;
        *(_QWORD *)(a1 + 944) = v23;
        v16 = v10 | 1;
        *(_QWORD *)(a1 + 976) = v24;
        *(_QWORD *)(a1 + 1008) = v18[0];
        *(_DWORD *)(a1 + 576) = 2;
        *(_QWORD *)(a1 + 584) = 4LL;
        *(_DWORD *)(a1 + 608) = 2;
        *(_QWORD *)(a1 + 616) = 4LL;
        *(_DWORD *)(a1 + 704) = 2;
        *(_QWORD *)(a1 + 712) = 4LL;
        *(_DWORD *)(a1 + 32) = 2;
        *(_QWORD *)(a1 + 40) = 4LL;
        *(_DWORD *)(a1 + 928) = 1;
        *(_QWORD *)(a1 + 936) = 2LL;
        *(_DWORD *)(a1 + 960) = 1;
        *(_QWORD *)(a1 + 968) = 2LL;
        *(_DWORD *)(a1 + 992) = 1;
        *(_QWORD *)(a1 + 1000) = 2LL;
      }
      *(_DWORD *)(a1 + 984) |= v11;
      *(_DWORD *)(a1 + 1016) |= v11;
      *(_DWORD *)(a1 + 600) = v12;
      *(_DWORD *)(a1 + 952) = v16;
      *(_DWORD *)(a1 + 56) = v15;
      *(_DWORD *)(a1 + 728) = v14;
      *(_DWORD *)(a1 + 632) = v13;
    }
    else
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
    }
    *(_DWORD *)(a1 + 1080) |= 2u;
    return 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v4;
}
