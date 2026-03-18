/*
 * XREFs of PopHiberCheckResume @ 0x14099B6B0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1404050D0 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx2 @ 0x1403833E0 (MmMapMemoryDumpMdlEx2.c)
 *     HalInitializeOnResume @ 0x14038C450 (HalInitializeOnResume.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EFC4C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x1404F02C0 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F41A0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F6348 (HvlNotifyAcpiReenabled.c)
 *     PopCheckpointSystemSleep @ 0x140996484 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rbp
  char v1; // bl
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  _OWORD v17[20]; // [rsp+20h] [rbp-158h] BYREF

  memset(v17, 0, 0x138uLL);
  v0 = qword_140C23340;
  v1 = 0;
  v2 = *(_QWORD *)(qword_140C23340 + 200);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25);
    ((void (__fastcall *)(_QWORD))off_140C00838[0])(0LL);
    PoResumeFromHibernate = 1;
    v3 = __rdtsc();
    ((void (__fastcall *)(__int64))off_140C006C0[0])(5LL);
    ((void (__fastcall *)(__int64))off_140C00838[0])(1LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1, v4, v5, v6);
      off_140C007A8[0]();
    }
    ((void (__fastcall *)(__int64))off_140C007C0)(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    if ( *(_QWORD *)(v2 + 928) )
    {
      v13 = *(_QWORD *)(v0 + 264);
      v14 = *(_OWORD *)(v2 + 928);
      DWORD2(v17[0]) = 80;
      v15 = *(_OWORD *)(v2 + 944);
      v16 = *(_QWORD *)(v13 + 8);
      *(_QWORD *)&v17[2] = 0LL;
      *((_QWORD *)&v17[2] + 1) = 0x4000LL;
      v17[3] = v14;
      v17[4] = v15;
      MmMapMemoryDumpMdlEx2(v16, v7, (__int64)v17, 1);
      memset(*(void **)(*(_QWORD *)(v0 + 264) + 8LL), 0, 0x4000uLL);
    }
    v8 = &qword_140C23858;
    v9 = 3LL;
    qword_140C19698 = *(_QWORD *)(v2 + 904);
    v10 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v8 = *v10;
      *((_OWORD *)v8 + 1) = v10[1];
      *((_OWORD *)v8 + 2) = v10[2];
      *((_OWORD *)v8 + 3) = v10[3];
      *((_OWORD *)v8 + 4) = v10[4];
      *((_OWORD *)v8 + 5) = v10[5];
      *((_OWORD *)v8 + 6) = v10[6];
      v8 += 16;
      v11 = v10[7];
      v10 += 8;
      *((_OWORD *)v8 - 1) = v11;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v8 = *v10;
    *((_OWORD *)v8 + 1) = v10[1];
    *((_OWORD *)v8 + 2) = v10[2];
    *((_OWORD *)v8 + 3) = v10[3];
    *((_OWORD *)v8 + 4) = v10[4];
    *((_OWORD *)v8 + 5) = v10[5];
    *((_OWORD *)v8 + 6) = v10[6];
    v8[14] = *((_QWORD *)v10 + 14);
    *(_BYTE *)(v0 + 4) = 0;
    qword_140C23928 = v3;
    qword_140C238B8 = v3 - qword_140C238C0;
    if ( (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}
