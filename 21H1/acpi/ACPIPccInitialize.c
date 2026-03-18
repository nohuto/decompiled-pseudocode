/*
 * XREFs of ACPIPccInitialize @ 0x1C00B0468
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BE5D4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     AcpiTranslateAccessSize @ 0x1C00AC9C4 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitializeSubspace @ 0x1C00B0844 (AcpiPccInitializeSubspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int64 v1; // r8
  char *v2; // rdi
  unsigned __int64 v3; // r8
  unsigned int v4; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r15
  PVOID PoolWithTag; // rax
  __int64 v10; // rbp
  __int64 i; // rbx
  char v12; // cl
  unsigned __int8 v13; // al
  bool v14; // cf
  char *v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // kr00_8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  char v21; // dl
  __int64 v22; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h]

  v1 = *(unsigned int *)(a1 + 4);
  v2 = (char *)(a1 + 48);
  PerformanceFrequency.QuadPart = 0LL;
  v3 = a1 + v1;
  v4 = 0;
  v6 = a1 + 48;
  if ( a1 + 50 <= v3 )
  {
    do
    {
      v7 = *(unsigned __int8 *)(v6 + 1);
      if ( (unsigned __int8)v7 < 2u )
        break;
      v6 += v7;
      if ( v6 > v3 )
        break;
      ++v4;
    }
    while ( v6 + 2 <= v3 );
    if ( v4 )
    {
      v8 = v4;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 648LL * v4, 0x4D706341u);
      v10 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xBu,
            (__int64)&WPP_79609623c0e33e2afa48dee71fa9caab_Traceguids);
        return 0LL;
      }
      memset(PoolWithTag, 0, 648LL * v4);
      KeQueryPerformanceCounter(&PerformanceFrequency);
      for ( i = v10 + 90; ; i += 648LL )
      {
        v12 = *v2;
        v13 = v2[1];
        if ( !*v2 || v12 == 1 )
          break;
        if ( v12 == 2 )
        {
          v14 = v13 < 0x5Au;
          goto LABEL_16;
        }
LABEL_28:
        v2 += (unsigned __int8)v2[1];
        if ( !--v8 )
        {
          _InterlockedOr(v24, 0);
          AcpiPccSubspaces = v10;
          AcpiPccSubspaceCount = v4;
          return 0LL;
        }
      }
      v14 = v13 < 0x3Eu;
LABEL_16:
      if ( !v14 )
      {
        *(_BYTE *)(i - 90) = v12;
        *(_QWORD *)(i - 2) = *((_QWORD *)v2 + 3);
        *(_DWORD *)(i + 6) = *((_DWORD *)v2 + 8);
        *(_BYTE *)(i + 1) = AcpiTranslateAccessSize(*(_BYTE *)(i + 1), *(_BYTE *)(i - 1), *(_BYTE *)i);
        *(_QWORD *)(i - 18) = *(_QWORD *)(v2 + 36);
        *(_QWORD *)(i - 26) = *(_QWORD *)(v2 + 44);
        *(_DWORD *)(i + 22) = *((_DWORD *)v2 + 4);
        *(_QWORD *)(i + 14) = *((_QWORD *)v2 + 1);
        *(_DWORD *)(i - 82) = *((_DWORD *)v2 + 13);
        *(_DWORD *)(i - 78) = *((_DWORD *)v2 + 14) / 0x3Cu;
        v17 = *((unsigned __int16 *)v2 + 30);
        *(_DWORD *)(i - 74) = v17;
        v18 = v17;
        v26 = (v17 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart) >> 64;
        v19 = v17 * PerformanceFrequency.QuadPart;
        if ( is_mul_ok(v18, PerformanceFrequency.QuadPart) )
        {
          v20 = (unsigned __int64)(((unsigned __int64)v19 * (unsigned __int128)v16) >> 64) >> 18;
        }
        else
        {
          *(_QWORD *)(i + 206) = -1LL;
          v20 = *(unsigned int *)(i - 74)
              * (((unsigned __int64)((unsigned __int128)(PerformanceFrequency.QuadPart * (__int128)(__int64)v16) >> 64) >> 63)
               + ((__int64)((unsigned __int128)(PerformanceFrequency.QuadPart * (__int128)(__int64)v16) >> 64) >> 18));
        }
        *(_QWORD *)(i + 206) = v20;
        v21 = *v15;
        *(_DWORD *)(i - 86) ^= (*(_DWORD *)(i - 86) ^ *(_DWORD *)(a1 + 36)) & 1;
        if ( v21 != 1 || (*(_BYTE *)(i + 26) = v2[6], (v2[6] & 2) != 0) )
        {
          if ( v21 == 2 )
          {
            *(_BYTE *)(i + 26) = v2[6];
            *(_QWORD *)(i + 110) = *(_QWORD *)(v2 + 62);
            *(_DWORD *)(i + 118) = *(_DWORD *)(v2 + 70);
            *(_QWORD *)(i + 126) = *(_QWORD *)(v2 + 74);
            *(_QWORD *)(i + 134) = *(_QWORD *)(v2 + 82);
          }
          if ( (unsigned __int8)(v21 - 1) <= 1u )
            *(_DWORD *)(i + 94) = *(_DWORD *)(v2 + 2);
          if ( (int)AcpiPccInitializeSubspace(v15) >= 0 )
          {
            v22 = *(_QWORD *)(i - 50);
            *(_QWORD *)(i - 66) = v22 + 8;
            *(_DWORD *)(i - 58) = *(_DWORD *)(i + 22) - 8;
            *(_QWORD *)(i - 42) = v22 + 4;
            *(_QWORD *)(i - 34) = v22 + 6;
            *(_DWORD *)(i - 86) = *(_DWORD *)(i - 86) & 0xFFFFFFE1 | 4;
          }
        }
      }
      goto LABEL_28;
    }
  }
  return 0LL;
}
