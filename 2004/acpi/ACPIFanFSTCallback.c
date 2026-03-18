/*
 * XREFs of ACPIFanFSTCallback @ 0x1C00551E0
 * Callers:
 *     ACPIFanLoop @ 0x1C000D1CC (ACPIFanLoop.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     ACPIFanLoop @ 0x1C000D1CC (ACPIFanLoop.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D858 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C0049E08 (AcpiDiagTraceFanStatusChange.c)
 */

void __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // r14
  unsigned int v5; // esi
  char v8; // r10
  int v9; // ebp
  char v10; // r11
  const char *v11; // rax
  const char *v12; // r8
  __int64 v13; // rdx
  char v14; // r10
  const char *v15; // rax
  const char *v16; // r8
  __int64 v17; // rdx
  char v18; // r10
  const char *v19; // rax
  const char *v20; // r8
  __int64 v21; // rdx
  unsigned __int16 v22; // r9
  int v23; // edx
  char v24; // r11
  const char *v25; // rax
  const char *v26; // r10
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // eax
  __int128 v30; // [rsp+50h] [rbp-48h] BYREF
  __int128 v31; // [rsp+60h] [rbp-38h]
  __int64 v32; // [rsp+70h] [rbp-28h]

  v4 = 0;
  v5 = (unsigned int)a2 >> 31;
  v8 = a2;
  v9 = 0x40000000;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a2 < 0 )
  {
    v10 = 0;
    v11 = (const char *)&unk_1C00701BA;
    v12 = (const char *)&unk_1C00701BA;
    if ( a4 )
    {
      v13 = *(_QWORD *)(a4 + 8);
      v10 = a4;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a4 + 568);
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(a4 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0xFu,
        (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
        v8,
        v10,
        v11,
        v12);
    goto LABEL_41;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v14 = 0;
    v15 = (const char *)&unk_1C00701BA;
    v16 = (const char *)&unk_1C00701BA;
    if ( a4 )
    {
      v17 = *(_QWORD *)(a4 + 8);
      v14 = a4;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(a4 + 568);
        if ( (v17 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(a4 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x10u,
        (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
        v14,
        v15,
        v16);
    goto LABEL_41;
  }
  if ( **(_DWORD **)(a3 + 32) >= 3u )
  {
    v23 = AMLIEvalPkgDataElement(a3, 1u, (__int64)&v30);
    v4 = v23 >= 0;
    if ( v23 >= 0 )
    {
      if ( WORD1(v30) == 1 )
      {
        v29 = v31;
        if ( (_DWORD)v31 != *(_DWORD *)(a4 + 280) )
        {
          *(_DWORD *)(a4 + 280) = v31;
          *(_BYTE *)(a4 + 284) = v29 != 0;
          AcpiDiagTraceFanStatusChange(a4);
          v9 = 1073741826;
        }
      }
      else
      {
        v18 = 0;
        v19 = (const char *)&unk_1C00701BA;
        v20 = (const char *)&unk_1C00701BA;
        if ( a4 )
        {
          v28 = *(_QWORD *)(a4 + 8);
          v18 = a4;
          if ( (v28 & 0x200000000000LL) != 0 )
          {
            v19 = *(const char **)(a4 + 568);
            if ( (v28 & 0x400000000000LL) != 0 )
              v20 = *(const char **)(a4 + 576);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = 19;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v24 = 0;
      v25 = (const char *)&unk_1C00701BA;
      v26 = (const char *)&unk_1C00701BA;
      if ( a4 )
      {
        v27 = *(_QWORD *)(a4 + 8);
        v24 = a4;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(a4 + 568);
          if ( (v27 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(a4 + 576);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x12u,
          (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
          v23,
          v24,
          v25,
          v26);
    }
  }
  else
  {
    v18 = 0;
    v19 = (const char *)&unk_1C00701BA;
    v20 = (const char *)&unk_1C00701BA;
    if ( a4 )
    {
      v21 = *(_QWORD *)(a4 + 8);
      v18 = a4;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v19 = *(const char **)(a4 + 568);
        if ( (v21 & 0x400000000000LL) != 0 )
          v20 = *(const char **)(a4 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 17;
LABEL_24:
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        v22,
        (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
        v18,
        v19,
        v20);
    }
  }
LABEL_41:
  if ( !(_BYTE)v5 )
  {
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( v4 )
  {
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)&v30, 1u);
  }
  ACPIFanLoop(a4, v9, 0);
}
