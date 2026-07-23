/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x1407009E4
 * Callers:
 *     MiMarkProcessCfgBits @ 0x140685B78 (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiGetControlAreaLoadConfig @ 0x1402A4208 (MiGetControlAreaLoadConfig.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiIsCfgBitMapPageShared @ 0x1403183BC (MiIsCfgBitMapPageShared.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x140700C60 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v4; // rcx
  _KPROCESS *Process; // rbp
  __int64 ControlAreaLoadConfig; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v22; // rsi
  int v23; // ebp
  __int64 v25; // r8
  unsigned int v26; // eax
  int v27; // [rsp+50h] [rbp-78h] BYREF
  int v28; // [rsp+54h] [rbp-74h] BYREF
  _KPROCESS *v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  _QWORD *v31; // [rsp+68h] [rbp-60h]
  __int128 v32; // [rsp+70h] [rbp-58h] BYREF
  int v33; // [rsp+80h] [rbp-48h]

  v27 = 0;
  v3 = a1;
  v28 = 0;
  v31 = a1;
  v4 = *(__int64 **)(a3 + 72);
  Process = KeGetCurrentThread()->ApcState.Process;
  v29 = Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(*v4);
  v8 = v3[2];
  v9 = (unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32;
  v10 = (unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32;
  v30 = *(_QWORD *)(ControlAreaLoadConfig + 16);
  v11 = (volatile signed __int64 *)(v8 + 40);
  v12 = (*(unsigned int *)(v7 + 24) | v10) << 12;
  v13 = 2 * (((((*(unsigned int *)(v7 + 28) | v9) + 1) << 12) - v12) >> 4);
  v14 = *v3 + ((2 * (v12 >> 4)) >> 3);
  v15 = v13 >> 3;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v8) )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 40);
    KeAbPostRelease(v8 + 40);
    return 3221225738LL;
  }
  v18 = v15 + v14;
  v33 = 0;
  v19 = (v15 + v14 - 1) | 0xFFF;
  v20 = v14 & 0xFFFFFFFFFFFFF000uLL;
  v32 = 0LL;
  while ( v20 <= v19 )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v20, v8, v16, v17);
    if ( IsCfgBitMapPageShared == 2 )
    {
      v22 = v20 | 0xFFF;
      goto LABEL_6;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      if ( IsCfgBitMapPageShared == 3 )
      {
        v22 = v19;
        if ( (v20 | 0x1FFFFF) <= v19 )
          v22 = v20 | 0x1FFFFF;
LABEL_6:
        v23 = MiSetProtectionOnSection((__int64)Process, v8, v20, v22, 2u, 0, &v28, (__int64)&v27);
        if ( v23 < 0 )
          goto LABEL_11;
        v20 = v22 - 4095;
        v3 = v31;
      }
      else
      {
        if ( v20 < v14 )
          v25 = (unsigned int)(v14 - v20);
        else
          v25 = 0LL;
        if ( v20 + 4096 <= v18 )
        {
          v26 = 4096 - v25;
        }
        else
        {
          v26 = v18 - v20 - v25;
          if ( (_DWORD)v18 - (_DWORD)v20 == (_DWORD)v25 )
            break;
        }
        v23 = MiCopyToCfgBitMap(
                v3,
                v30,
                v25,
                0LL,
                v20 + (unsigned int)v25,
                v8,
                (unsigned int)(v25 + v20 - v14) >> 1 << 7,
                &v32,
                v26);
        if ( v23 < 0 )
          goto LABEL_11;
      }
      Process = v29;
    }
    v20 += 4096LL;
  }
  v23 = 0;
LABEL_11:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8 + 40);
  KeAbPostRelease(v8 + 40);
  return (unsigned int)v23;
}
