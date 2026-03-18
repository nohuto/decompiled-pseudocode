/*
 * XREFs of SleepstudyHelperInitializeOnce @ 0x1C008A360
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0043B00 (memset.c)
 */

__int64 __fastcall SleepstudyHelperInitializeOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  _OWORD *v3; // rbx
  unsigned int v4; // edi
  _OWORD *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1
  _DWORD *OutputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp+20h] BYREF

  v3 = &SleepstudyHelperRoutineBlock;
  v4 = 0;
  OutputBuffer = 0LL;
  memset(&SleepstudyHelperRoutineBlock, 0, 0x108uLL);
  InputBuffer = 63LL;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, &OutputBuffer, 8u) >= 0 )
  {
    v5 = OutputBuffer;
    if ( *OutputBuffer )
    {
      v6 = 2LL;
      do
      {
        *v3 = *v5;
        v3[1] = v5[1];
        v3[2] = v5[2];
        v3[3] = v5[3];
        v3[4] = v5[4];
        v3[5] = v5[5];
        v3[6] = v5[6];
        v3 += 8;
        v7 = v5[7];
        v5 += 8;
        *(v3 - 1) = v7;
        --v6;
      }
      while ( v6 );
      *(_QWORD *)v3 = *(_QWORD *)v5;
    }
    return 1;
  }
  return v4;
}
