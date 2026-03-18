/*
 * XREFs of NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C00138F0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeGetLogPageTelemetryHeaderCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // al
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx

  SrbExtension = GetSrbExtension(a2);
  v7 = *(unsigned __int8 *)(v5 + 3);
  v8 = SrbExtension;
  if ( (_BYTE)v7 == 1
    && (*(_BYTE *)(v5 + 2) != 40 ? (v9 = *(_QWORD *)(v5 + 24), v10 = 16LL) : (v9 = *(_QWORD *)(v5 + 64), v10 = 60LL),
        (v11 = *(_QWORD *)(SrbExtension + 4200), *(_DWORD *)(SrbExtension + 4240) >= 0x200u)
     && *(_DWORD *)(v10 + a2) >= 0x28u) )
  {
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_OWORD *)v9 = 0LL;
      *(_OWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    *(_WORD *)v9 = *(_WORD *)(v11 + 5);
    *(_BYTE *)(v9 + 2) = *(_BYTE *)(v11 + 7);
    v12 = *(unsigned __int16 *)(v11 + 12);
    if ( (_WORD)v12 )
    {
      *(_DWORD *)(v9 + 30) = 17827840;
      v13 = (v12 + 1) << 9;
      v14 = *(_BYTE *)(v9 + 34) & 0xF0 | 3;
      *(_BYTE *)(v9 + 39) = v13;
      *(_BYTE *)(v9 + 34) = v14;
      *(_BYTE *)(v9 + 38) = BYTE1(v13);
      result = HIWORD(v13);
      *(_BYTE *)(v9 + 36) = HIBYTE(v13);
      *(_BYTE *)(v9 + 37) = BYTE2(v13);
    }
    else
    {
      result = StorPortDebugPrint(1LL, "\tStorNVMe: No Telemetry Host Log page available!\n");
    }
    if ( *(_BYTE *)(a1 + 16) )
    {
      *(_WORD *)(v11 + 5) = 0;
      *(_BYTE *)(v11 + 7) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      *(_WORD *)(v11 + 12) = 0;
    }
    *(_DWORD *)(v10 + a2) = 40;
  }
  else
  {
    if ( v6 )
    {
      v18 = *(unsigned __int16 *)(v6 + 14);
      v19 = v18 >> 9;
      v16 = (unsigned __int8)(v18 >> 1);
      v17 = v19 & 7;
    }
    else
    {
      v16 = 0LL;
      v17 = 0LL;
    }
    result = StorPortExtendedFunction(
               86LL,
               a1,
               0LL,
               0LL,
               5,
               L"Telemetry Log Header",
               64LL,
               2,
               0,
               a2,
               L"SrbStatus",
               v7,
               L"StatusCodeType",
               v17,
               L"StatusCode",
               v16,
               0LL,
               0LL);
  }
  if ( !*(_BYTE *)(a1 + 16) )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v8 + 4240), v8 + 4200, *(_QWORD *)(v8 + 4208));
  *(_BYTE *)(v8 + 4253) |= 8u;
  *(_QWORD *)(v8 + 4200) = 0LL;
  *(_DWORD *)(v8 + 4240) = 0;
  return result;
}
