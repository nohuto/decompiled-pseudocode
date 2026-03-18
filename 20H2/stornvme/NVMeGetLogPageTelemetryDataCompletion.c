/*
 * XREFs of NVMeGetLogPageTelemetryDataCompletion @ 0x1C0013560
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1C0005200 (memmove.c)
 */

char __fastcall NVMeGetLogPageTelemetryDataCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 SrbExtension; // rbx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int8 v12; // dl
  __int64 v13; // rdx
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // cl
  char v19; // cl
  size_t v20; // r8
  const void *v21; // rdx
  void *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // ecx

  SrbExtension = GetSrbExtension(a2);
  v8 = *(_DWORD *)(SrbExtension + 4232);
  v9 = *(_DWORD *)(SrbExtension + 4240);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v10 = *(_QWORD *)(v6 + 64);
    v11 = 60LL;
  }
  else
  {
    v10 = *(_QWORD *)(v6 + 24);
    v11 = 16LL;
  }
  v12 = *(_BYTE *)(v6 + 3);
  if ( v12 != 1 )
    goto LABEL_17;
  if ( !v8 )
  {
    if ( !*(_BYTE *)(a1 + 16) )
      NVMeZeroMemory((void *)v10, *(_DWORD *)(a2 + v11));
    v13 = *(_QWORD *)(SrbExtension + 4200);
    if ( v9 >= 0x200 )
    {
      v14 = *(_BYTE *)(v13 + 5);
      if ( *(_BYTE *)(a1 + 16) )
      {
        *(_BYTE *)(v13 + 5) = *(_BYTE *)(v13 + 7);
        v15 = *(_BYTE *)(v13 + 9);
        *(_BYTE *)(v13 + 7) = v14;
        v16 = *(_BYTE *)(v13 + 8);
        *(_BYTE *)(v13 + 8) = v15;
        v17 = *(_BYTE *)(v13 + 11);
        *(_BYTE *)(v13 + 9) = v16;
        v18 = *(_BYTE *)(v13 + 10);
        *(_BYTE *)(v13 + 10) = v17;
        LOBYTE(v8) = *(_BYTE *)(v13 + 13);
        *(_BYTE *)(v13 + 11) = v18;
        v19 = *(_BYTE *)(v13 + 12);
        *(_BYTE *)(v13 + 12) = v8;
        *(_BYTE *)(v13 + 13) = v19;
      }
      else
      {
        *(_BYTE *)(v10 + 7) = v14;
        *(_BYTE *)(v10 + 6) = *(_BYTE *)(v13 + 6);
        *(_BYTE *)(v10 + 5) = *(_BYTE *)(v13 + 7);
        *(_BYTE *)(v10 + 9) = *(_BYTE *)(v13 + 8);
        *(_BYTE *)(v10 + 8) = *(_BYTE *)(v13 + 9);
        *(_BYTE *)(v10 + 11) = *(_BYTE *)(v13 + 10);
        *(_BYTE *)(v10 + 10) = *(_BYTE *)(v13 + 11);
        *(_BYTE *)(v10 + 13) = *(_BYTE *)(v13 + 12);
        *(_BYTE *)(v10 + 12) = *(_BYTE *)(v13 + 13);
        *(_BYTE *)(v10 + 382) = *(_BYTE *)(v13 + 382);
        LOBYTE(v8) = *(_BYTE *)(v13 + 383);
        *(_BYTE *)(v10 + 383) = v8;
        *(_OWORD *)(v10 + 384) = *(_OWORD *)(v13 + 384);
        *(_OWORD *)(v10 + 400) = *(_OWORD *)(v13 + 400);
        *(_OWORD *)(v10 + 416) = *(_OWORD *)(v13 + 416);
        *(_OWORD *)(v10 + 432) = *(_OWORD *)(v13 + 432);
        *(_OWORD *)(v10 + 448) = *(_OWORD *)(v13 + 448);
        *(_OWORD *)(v10 + 464) = *(_OWORD *)(v13 + 464);
        *(_OWORD *)(v10 + 480) = *(_OWORD *)(v13 + 480);
        *(_OWORD *)(v10 + 496) = *(_OWORD *)(v13 + 496);
      }
      if ( v9 <= 0x200 || *(_DWORD *)(a2 + v11) < v9 || *(_BYTE *)(a1 + 16) )
        goto LABEL_24;
      v20 = v9 - 512;
      v21 = (const void *)(v13 + 512);
      v22 = (void *)(v10 + 512);
      goto LABEL_23;
    }
    v12 = *(_BYTE *)(a2 + 3);
LABEL_17:
    if ( a3 )
    {
      v25 = *(unsigned __int16 *)(a3 + 14);
      v26 = v25 >> 9;
      v23 = (unsigned __int8)(v25 >> 1);
      v24 = v26 & 7;
    }
    else
    {
      v23 = 0LL;
      v24 = 0LL;
    }
    LOBYTE(v8) = StorPortExtendedFunction(
                   86LL,
                   a1,
                   0LL,
                   0LL,
                   5,
                   L"Telemetry Log",
                   64LL,
                   2,
                   0,
                   a2,
                   L"SrbStatus",
                   v12,
                   L"StatusCodeType",
                   v24,
                   L"StatusCode",
                   v23,
                   0LL,
                   0LL);
    goto LABEL_27;
  }
  if ( v9 < 0x200 || *(_DWORD *)(a2 + v11) < v9 || *(_BYTE *)(a1 + 16) )
    goto LABEL_24;
  v21 = *(const void **)(SrbExtension + 4200);
  v20 = *(unsigned int *)(SrbExtension + 4240);
  v22 = (void *)v10;
LABEL_23:
  LOBYTE(v8) = (unsigned __int8)memmove(v22, v21, v20);
LABEL_24:
  *(_DWORD *)(a2 + v11) = v9;
LABEL_27:
  if ( !*(_BYTE *)(a1 + 16) )
    LOBYTE(v8) = NVMeFreeDmaBuffer(
                   a1,
                   *(unsigned int *)(SrbExtension + 4240),
                   SrbExtension + 4200,
                   *(_QWORD *)(SrbExtension + 4208));
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return v8;
}
