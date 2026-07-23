/*
 * XREFs of HvpInitMap @ 0x1406FBFC8
 * Callers:
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407B209C (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpFreeMap @ 0x14061A3C8 (HvpFreeMap.c)
 *     HvpAllocateMap @ 0x14061E850 (HvpAllocateMap.c)
 */

__int64 __fastcall HvpInitMap(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r12
  void *v4; // r13
  void *v5; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  void *v13; // rax
  void *v14; // rbx
  __int64 v15; // rsi
  __int64 result; // rax
  void *v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v7 & 0xFFF) != 0 )
  {
    v18 = -1073741492;
    SetFailureLocation(v3, 0, 5, 0xC000014C, 0);
  }
  else
  {
    v8 = v7 >> 12;
    if ( v7 >> 12 )
      v9 = (v8 - 1) >> 9;
    else
      v9 = 0;
    *(_DWORD *)(a1 + 272) = v7;
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_10;
    v2 = (v8 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v2 )
      v2 = 4;
    v4 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, a2, 926043459LL);
    if ( v4 )
    {
      LOBYTE(v10) = 1;
      v5 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, v10, 926043459LL);
      if ( !v5 )
      {
        v19 = -1073741801;
        goto LABEL_23;
      }
      memset(v4, 0, v2);
      memset(v5, 0, v2);
      *(_QWORD *)(a1 + 96) = v4;
      v11 = v7 >> 9;
      *(_DWORD *)(a1 + 88) = v11;
      *(_DWORD *)(a1 + 112) = v11;
      *(_QWORD *)(a1 + 120) = v5;
      *(_DWORD *)(a1 + 108) = v2;
LABEL_10:
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24);
      if ( v9 )
      {
        v17 = (void *)v12(0x2000LL, 0LL, 942820675LL);
        v15 = (__int64)v17;
        if ( v17 )
        {
          memset(v17, 0, 0x2000uLL);
          if ( HvpAllocateMap(a1, v15, 0, v9) )
          {
            v14 = 0LL;
            goto LABEL_13;
          }
          v18 = -1073741670;
          SetFailureLocation(v3, 0, 5, 0xC000009A, 0x40u);
          HvpFreeMap(a1, v15, 0, v9);
          (*(void (__fastcall **)(__int64, __int64))(a1 + 32))(v15, 0x2000LL);
          goto LABEL_27;
        }
        v19 = -1073741670;
        v20 = 48;
LABEL_25:
        v18 = v19;
        SetFailureLocation(v3, 0, 5, v19, v20);
LABEL_27:
        if ( v4 )
        {
          if ( *(void **)(a1 + 96) == v4 )
            *(_QWORD *)(a1 + 96) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v4, v2);
        }
        if ( v5 )
        {
          if ( *(void **)(a1 + 120) == v5 )
            *(_QWORD *)(a1 + 120) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v5, v2);
        }
        return v18;
      }
      v13 = (void *)v12(12288LL, 0LL, 909266243LL);
      v14 = v13;
      if ( v13 )
      {
        memset(v13, 0, 0x3000uLL);
        v15 = a1 + 288;
LABEL_13:
        *(_QWORD *)(a1 + 280) = v15;
        result = 0LL;
        *(_QWORD *)(a1 + 288) = v14;
        return result;
      }
      v19 = -1073741670;
LABEL_23:
      v20 = 32;
      goto LABEL_25;
    }
    v18 = -1073741801;
    SetFailureLocation(v3, 0, 5, 0xC0000017, 0x10u);
  }
  return v18;
}
