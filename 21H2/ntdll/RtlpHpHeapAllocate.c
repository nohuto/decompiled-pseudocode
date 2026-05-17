/*
 * XREFs of RtlpHpHeapAllocate @ 0x180007E6C
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlpLogHeapCommit @ 0x180109F88 (RtlpLogHeapCommit.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v4; // rsi
  int v5; // edi
  __int16 v6; // r15
  __int128 v7; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // r10d
  unsigned __int64 v14; // r11
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  volatile signed __int64 *v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-39h] BYREF
  __int128 v24; // [rsp+40h] [rbp-29h] BYREF
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  __int128 v26; // [rsp+60h] [rbp-9h] BYREF
  __int128 v27; // [rsp+70h] [rbp+7h] BYREF
  __int128 v28; // [rsp+80h] [rbp+17h] BYREF
  __int128 v29; // [rsp+90h] [rbp+27h] BYREF
  void *v30; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v30 = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v23 = 4096LL;
  v6 = 1;
  v7 = *a3;
  v8 = 64LL;
  v9 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v25 = *a3;
  if ( a2 <= 0x40 )
    v8 = a2;
  v24 = v7;
  v10 = v9 + 9 * (v8 + 15) - (((_BYTE)v8 - 1) & 7);
  v11 = v10
      + (unsigned int)v8 * (v9 + 64)
      - (((_BYTE)v10 - 1) & 0x3F)
      + ((unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6);
  v31 = 129 * v11 + 10175 - ((129 * (_WORD)v11 + 10174) & 0xFFF) + 4095;
  v12 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v25);
  if ( !v12
    || (RtlpHpAppCompatFlags & 8) != 0
    || (v13 & 0x40000000) != 0
    || BYTE2(v24)
    || v14 >= *(unsigned int *)(v12 + 464) )
  {
    v5 = BYTE1(v24) < 2u ? 0x1000000 : 0;
    v27 = v7;
    v15 = (v13 & 0x40000000) != 0 ? 64 : 4;
    if ( (int)RtlpHpAllocVA((unsigned int)&v30, (unsigned int)&v31, 0, v5 | 0x2000u, v15, (__int64)&v27) >= 0 )
    {
      v28 = *a3;
      if ( (int)RtlpHpAllocVA((unsigned int)&v30, (unsigned int)&v23, 0, v5 | 0x1000u, v15, (__int64)&v28) >= 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
          v18 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v18 = 2147353472LL;
        if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          v4 = v23;
          RtlpLogHeapCommit(v30, v30, v23, 11LL);
        }
        else
        {
          v4 = v23;
        }
        v19 = (volatile signed __int64 *)v30;
        v6 = 0;
        v30 = 0LL;
        goto LABEL_11;
      }
    }
    v19 = 0LL;
  }
  else
  {
    v24 = v7;
    v22 = RtlpHpMetadataAlloc(v14, 0x1000uLL, 1, &v24);
    v19 = (volatile signed __int64 *)v22;
    if ( v22 )
    {
      v26 = *a3;
      RtlpHpMetadataCommit(v22, v22 + 4096, v31 - 4096, &v26, 0);
LABEL_11:
      memset((void *)v19, 0, 0x800uLL);
      *((_QWORD *)v19 + 29) = v19 + 256;
      *((_QWORD *)v19 + 30) = (char *)v19 + v4;
      v20 = v31;
      *((_WORD *)v19 + 15) &= ~1u;
      *((_WORD *)v19 + 15) |= v6;
      *((_QWORD *)v19 + 31) = (char *)v19 + v20;
      _InterlockedExchangeAdd64(v19 + 16, v31 >> 12);
      _InterlockedExchangeAdd64(v19 + 17, v23 >> 12);
    }
  }
  if ( v30 )
  {
    v29 = *a3;
    RtlpHpFreeVA(&v30, &v31, v5 | 0x8000u, &v29);
  }
  return v19;
}
