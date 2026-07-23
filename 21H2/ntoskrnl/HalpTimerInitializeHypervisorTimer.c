/*
 * XREFs of HalpTimerInitializeHypervisorTimer @ 0x1403A8E94
 * Callers:
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140386ADC (HalpTimerEnableHypervisorTimer.c)
 *     HalpFindTimer @ 0x14039D5A8 (HalpFindTimer.c)
 *     HalpIsPartitionCpuManager @ 0x1403A8F7C (HalpIsPartitionCpuManager.c)
 *     HalpTimerInitialize @ 0x1403AADC4 (HalpTimerInitialize.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403CB924 (HalpInterruptSetRemappedLineStateInternal.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1D6C (HalpTimerTestHypervisorTimer.c)
 *     HalpHvBuildDeviceId @ 0x1409A7FF8 (HalpHvBuildDeviceId.c)
 */

void __fastcall HalpTimerInitializeHypervisorTimer(__int64 a1, __int64 a2)
{
  ULONG_PTR *Timer; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  char v11; // r12
  unsigned int *v12; // r15
  int v13; // esi
  int v14; // r14d
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  ULONG_PTR *v19; // rax
  _BYTE v20[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  int v22; // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v25[6]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-1h]
  __int64 v27; // [rsp+78h] [rbp+7h]
  __int64 v28; // [rsp+80h] [rbp+Fh]
  __int64 v29; // [rsp+88h] [rbp+17h]
  __int128 v30; // [rsp+90h] [rbp+1Fh] BYREF

  v24 = 0LL;
  v30 = 0LL;
  v21 = 0LL;
  v20[0] = 0;
  if ( (unsigned __int8)HalpIsPartitionCpuManager(a1, a2) )
  {
    if ( qword_140C4A200 )
    {
      _RAX = 1073741830LL;
      __asm { cpuid }
      if ( (_RAX & 0x100) != 0 )
      {
        Timer = HalpFindTimer(3, 32, 24576, 3840, 0);
        v8 = (__int64)Timer;
        if ( Timer )
        {
          if ( (int)HalpTimerInitialize(Timer) >= 0 )
          {
            *(_DWORD *)(v8 + 184) |= 4u;
            HalpHypervisorHpet = v8;
            v9 = HalpTimerTestHypervisorTimer(v8, v20);
            HalpHypervisorHpet = 0LL;
            if ( v9 >= 0 )
            {
              v11 = 0;
              v12 = *(unsigned int **)(v8 + 72);
              v13 = 1;
              v14 = 0;
              if ( v20[0] )
              {
                HalpHvBuildDeviceId(v10, *(_QWORD *)(v8 + 288) + 8LL, 0LL, &v24);
              }
              else
              {
                v16 = *(_DWORD *)(v8 + 224);
                if ( (v16 & 0x200) != 0 )
                {
                  if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(v8 + 88), &v21) < 0 )
                    return;
                  v11 = *((_BYTE *)v12 + 4);
                }
                else if ( (v16 & 0x100) != 0 )
                {
                  v17 = *(_DWORD *)(v8 + 84);
                  if ( v17 >= 8 )
                  {
                    LODWORD(v21) = 45057;
                    v17 -= 8;
                  }
                  else
                  {
                    LODWORD(v21) = 45056;
                  }
                  HIDWORD(v21) = v17;
                }
                v22 = *(_DWORD *)(v8 + 96);
                v23 = *(_DWORD *)(v8 + 92);
                HalpInterruptApplyOverrides((unsigned int *)&v21, &v23, &v22);
                v13 = v22;
                v14 = v23;
                v24 = 0x8000000000000000uLL;
                LOBYTE(v24) = v21;
              }
              LOBYTE(v15) = v11;
              if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, __int64, __int128 *))qword_140C4A200)(
                          *((_QWORD *)v12 + 3),
                          *v12,
                          v24,
                          v15,
                          &v30) >= 0 )
              {
                if ( v20[0] )
                {
                  *(_DWORD *)(v8 + 236) = 0;
                  *(_DWORD *)(v8 + 232) = DWORD2(v30);
                  *(_QWORD *)(v8 + 240) = HIDWORD(v30);
                  v18 = *(_DWORD *)(v8 + 184) | 0x10;
LABEL_26:
                  HalpHypervisorHpet = v8;
                  *(_DWORD *)(v8 + 184) = v18 | 0x40;
                  HalpTimerEnableHypervisorTimer();
                  return;
                }
                v25[4] = -1;
                v27 = *((_QWORD *)&v30 + 1);
                v25[1] = 0;
                v26 = 8LL;
                v28 = 0LL;
                v29 = 251LL;
                v25[0] = v14;
                v25[2] = v13;
                v25[3] = 0;
                v25[5] = 1;
                v19 = HalpInterruptLookupController(v21);
                if ( !v19 )
                {
                  HalpInterruptLastProblem = 17;
                  return;
                }
                if ( (int)HalpInterruptSetRemappedLineStateInternal(v19, &v21, v25) >= 0 )
                {
                  v18 = *(_DWORD *)(v8 + 184) & 0xFFFFFFEF;
                  goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
  }
}
