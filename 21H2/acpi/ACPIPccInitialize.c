/*
 * XREFs of ACPIPccInitialize @ 0x1C00AFC38
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BD9F8 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     AcpiTranslateAccessSize @ 0x1C00AB9E4 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitializeSubspace @ 0x1C00B0024 (AcpiPccInitializeSubspace.c)
 *     AcpiPccInterruptSupported @ 0x1C00B022C (AcpiPccInterruptSupported.c)
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
  __int64 v9; // r14
  __int64 i; // rbx
  char v11; // r10
  bool v12; // cf
  unsigned __int8 v13; // al
  char v14; // r10
  __int64 v15; // r11
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned __int128 v19; // rax
  unsigned __int64 v20; // kr00_8
  unsigned __int64 v21; // rdx
  void *v22; // rcx
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // r14
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+68h] [rbp+10h]
  __int64 Pool2; // [rsp+70h] [rbp+18h]

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
      Pool2 = ExAllocatePool2(64LL, 656LL * v4, 1299211073LL);
      v9 = Pool2;
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xBu,
            (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids);
        return 0LL;
      }
      KeQueryPerformanceCounter(&PerformanceFrequency);
      for ( i = v9 + 90; ; i += 656LL )
      {
        v11 = *v2;
        if ( !*v2 )
        {
          v12 = (unsigned __int8)v2[1] < 0x3Eu;
          goto LABEL_17;
        }
        v13 = v2[1];
        if ( v11 == 1 )
          break;
        if ( v11 == 2 )
        {
          v12 = v13 < 0x5Au;
LABEL_17:
          if ( !v12 )
          {
            *(_BYTE *)(i - 90) = v11;
            *(_QWORD *)(i - 2) = *((_QWORD *)v2 + 3);
            *(_DWORD *)(i + 6) = *((_DWORD *)v2 + 8);
            *(_BYTE *)(i + 1) = AcpiTranslateAccessSize(*(_BYTE *)(i + 1), *(_BYTE *)(i - 1), *(_BYTE *)i);
            *(_QWORD *)(i - 18) = *(_QWORD *)(v2 + 36);
            *(_QWORD *)(i - 26) = *(_QWORD *)(v2 + 44);
            *(_DWORD *)(i + 22) = *((_DWORD *)v2 + 4);
            *(_QWORD *)(i + 14) = *((_QWORD *)v2 + 1);
            v16 = *((_DWORD *)v2 + 13);
            *(_DWORD *)(i - 82) = v16;
            if ( v16 < 0x1F4 )
              v16 = 500;
            *(_DWORD *)(i - 78) = v16;
            *(_DWORD *)(i - 74) = *((_DWORD *)v2 + 14) / 0x3Cu;
            v17 = *((unsigned __int16 *)v2 + 30);
            *(_DWORD *)(i - 70) = v17;
            v18 = v17;
            v20 = v17;
            v19 = v17 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart;
            v29 = *((_QWORD *)&v19 + 1);
            if ( is_mul_ok(v20, PerformanceFrequency.QuadPart) )
            {
              v21 = (unsigned __int64)v19 / 0xF4240;
            }
            else
            {
              *(_QWORD *)(i + 206) = -1LL;
              v21 = v18 * (PerformanceFrequency.QuadPart / 1000000);
            }
            *(_QWORD *)(i + 206) = v21;
            *(_DWORD *)(i - 86) ^= (*(_DWORD *)(i - 86) ^ *(_DWORD *)(a1 + 36)) & 1;
            if ( v14 != 1 || (*(_BYTE *)(i + 26) = v2[6], (v2[6] & 2) != 0) )
            {
              if ( v14 == 2 )
              {
                *(_BYTE *)(i + 26) = v2[6];
                *(_QWORD *)(i + 110) = *(_QWORD *)(v2 + 62);
                *(_DWORD *)(i + 118) = *(_DWORD *)(v2 + 70);
                *(_QWORD *)(i + 126) = *(_QWORD *)(v2 + 74);
                *(_QWORD *)(i + 134) = *(_QWORD *)(v2 + 82);
              }
              if ( (unsigned __int8)(v14 - 1) <= 1u )
                *(_DWORD *)(i + 94) = *(_DWORD *)(v2 + 2);
              if ( (unsigned __int8)AcpiPccInterruptSupported(v15) )
                *(_DWORD *)(i - 78) += v23;
              if ( (int)AcpiPccInitializeSubspace(v22) >= 0 )
              {
                v24 = *(_QWORD *)(i - 50);
                *(_QWORD *)(i - 66) = v24 + 8;
                *(_DWORD *)(i - 58) = *(_DWORD *)(i + 22) - 8;
                *(_QWORD *)(i - 42) = v24 + 4;
                *(_QWORD *)(i - 34) = v24 + 6;
                *(_DWORD *)(i - 86) = *(_DWORD *)(i - 86) & 0xFFFFFFE1 | 4;
              }
            }
          }
        }
        v2 += (unsigned __int8)v2[1];
        if ( !--v8 )
        {
          v25 = Pool2;
          _InterlockedOr(v27, 0);
          AcpiPccSubspaces = v25;
          AcpiPccSubspaceCount = v4;
          return 0LL;
        }
      }
      v12 = v13 < 0x3Eu;
      goto LABEL_17;
    }
  }
  return 0LL;
}
