/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C00448B8
 * Callers:
 *     Bulk_EP_FSEReceived @ 0x1C000D130 (Bulk_EP_FSEReceived.c)
 *     Bulk_EP_EndpointHalted @ 0x1C0044610 (Bulk_EP_EndpointHalted.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x1C000B5B0 (Bulk_FindStage.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 v6; // r10
  __int64 v7; // r9
  int v8; // r8d
  unsigned int v9; // edx
  bool v10; // cl
  unsigned int v11; // edx
  size_t v12; // r8
  __int64 result; // rax
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v18 = 0;
  v19 = 0LL;
  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v19,
          &v18)
    || (v3 = (__int64)v19) == 0 )
  {
    result = *(unsigned int *)(a1 + 348);
    goto LABEL_24;
  }
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *v19;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 336LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( (v6 & 0x1800000000LL) != 0 )
  {
    if ( (v6 & 0x1000000000LL) == 0 )
    {
      v9 = *(_DWORD *)(v7 + 8);
      v10 = (v9 & 0x80u) == 0;
      v11 = v9 >> 8;
      v12 = 0LL;
      if ( (v6 & 0x200000000000LL) == 0 || !v10 )
        v12 = v11;
      goto LABEL_13;
    }
    if ( (v6 & 0x800000000LL) != 0 )
    {
      v12 = 0LL;
      goto LABEL_13;
    }
    v8 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 8);
  }
  v12 = v8 & 0xFFFFFF;
LABEL_13:
  if ( (v6 & 0x10000000000LL) != 0 )
    v12 = (*(_DWORD *)(v7 + 12) & 0x1FFFF) + (unsigned int)v12;
  if ( (unsigned int)v12 > *((_DWORD *)v19 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = v12;
      v16 = *(_DWORD *)(a1 + 64);
      v15 = *(_DWORD *)(v4 + 144);
      v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v4 + 80),
        3u,
        0xEu,
        0xCu,
        (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
        v14,
        v15,
        v16,
        v17);
    }
    v12 = 0LL;
  }
  *(_DWORD *)(v5 + 108) += v12;
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v5 + 76) == 2 )
    memmove(*(void **)(v3 + 64), *(const void **)(*(_QWORD *)(v3 + 72) + 16LL), v12);
  result = v18;
LABEL_24:
  *(_DWORD *)(a1 + 352) = result;
  return result;
}
