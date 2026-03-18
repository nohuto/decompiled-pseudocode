/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x14063D3A8
 * Callers:
 *     MiMarkProcessCfgBits @ 0x14063726C (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiGetControlAreaLoadConfig @ 0x1402ACB84 (MiGetControlAreaLoadConfig.c)
 *     MiIsCfgBitMapPageShared @ 0x1402AEF74 (MiIsCfgBitMapPageShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x14063C8B0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v4; // rcx
  _KPROCESS *Process; // rbp
  __int64 ControlAreaLoadConfig; // rax
  __int64 v7; // r8
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v20; // rsi
  int v21; // ebp
  __int64 v23; // r8
  unsigned int v24; // eax
  int v25; // [rsp+50h] [rbp-78h] BYREF
  int v26; // [rsp+54h] [rbp-74h] BYREF
  _KPROCESS *v27; // [rsp+58h] [rbp-70h]
  unsigned __int64 v28; // [rsp+60h] [rbp-68h]
  _QWORD *v29; // [rsp+68h] [rbp-60h]
  __int128 v30; // [rsp+70h] [rbp-58h] BYREF
  int v31; // [rsp+80h] [rbp-48h]

  v25 = 0;
  v3 = a1;
  v26 = 0;
  v29 = a1;
  v4 = *(__int64 **)(a3 + 72);
  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(*v4);
  v8 = v3[2];
  v9 = (unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32;
  v10 = (unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32;
  v28 = *(_QWORD *)(ControlAreaLoadConfig + 16);
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
  v16 = v15 + v14;
  v31 = 0;
  v17 = (v15 + v14 - 1) | 0xFFF;
  v18 = v14 & 0xFFFFFFFFFFFFF000uLL;
  v30 = 0LL;
  while ( v18 <= v17 )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v18, v8);
    if ( IsCfgBitMapPageShared == 2 )
    {
      v20 = v18 | 0xFFF;
      goto LABEL_6;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      if ( IsCfgBitMapPageShared == 3 )
      {
        v20 = v17;
        if ( (v18 | 0x1FFFFF) <= v17 )
          v20 = v18 | 0x1FFFFF;
LABEL_6:
        v21 = MiSetProtectionOnSection((__int64)Process, v8, v18, v20, 2u, 0, &v26, (__int64)&v25);
        if ( v21 < 0 )
          goto LABEL_11;
        v18 = v20 - 4095;
        v3 = v29;
      }
      else
      {
        if ( v18 < v14 )
          v23 = (unsigned int)(v14 - v18);
        else
          v23 = 0LL;
        if ( v18 + 4096 <= v16 )
        {
          v24 = 4096 - v23;
        }
        else
        {
          v24 = v16 - v18 - v23;
          if ( (_DWORD)v16 - (_DWORD)v18 == (_DWORD)v23 )
            break;
        }
        v21 = MiCopyToCfgBitMap(
                (__int64)v3,
                v28,
                v23,
                0,
                v18 + (unsigned int)v23,
                v8,
                (unsigned int)(v23 + v18 - v14) >> 1 << 7,
                (unsigned int *)&v30,
                v24);
        if ( v21 < 0 )
          goto LABEL_11;
      }
      Process = v27;
    }
    v18 += 4096LL;
  }
  v21 = 0;
LABEL_11:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8 + 40);
  KeAbPostRelease(v8 + 40);
  return (unsigned int)v21;
}
