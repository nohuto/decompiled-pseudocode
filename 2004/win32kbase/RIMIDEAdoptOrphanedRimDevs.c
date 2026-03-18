/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C0055690
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMRemoveHoldingFrame @ 0x1C005DBE8 (RIMRemoveHoldingFrame.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0154834 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C016BC8C (RIMIDEIsCompatibleDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rsi
  __int64 v6; // rbx
  PVOID **v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  PVOID ***v13; // r12
  _QWORD *v14; // rbx
  __int64 *v15; // r15
  const struct RIMDEV *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PVOID *v34; // r8
  _QWORD *v35; // rax
  _QWORD *v36; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v37; // [rsp+28h] [rbp-30h]

  RIMLockExclusive(&gObListLock);
  v5 = (__int64 *)gObRimDevList;
  v37 = &v36;
  v36 = &v36;
  while ( v5 != &gObRimDevList )
  {
    v6 = (unsigned __int64)(v5 + 9) & -(__int64)(v5 != (__int64 *)16);
    v7 = *(PVOID ***)(v6 + 0x150);
    if ( v7
      && *((_BYTE *)v7 + 81)
      && (*(_DWORD *)(((unsigned __int64)(v5 + 9) & -(__int64)(v5 != (__int64 *)16)) + 0xB8) & 0x2000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v5 + 9) & -(__int64)(v5 != (__int64 *)16)) + 0xC8) & 4) == 0 )
    {
      if ( v7 == Object )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v2, v3, v4);
      if ( (unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v5 + 9) & -(__int64)(v5 != (__int64 *)16)) )
      {
        v11 = (_QWORD *)(v6 + 120);
        if ( (_QWORD *)*v11 != v11 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v2, v3, v4);
        v12 = v37;
        if ( *v37 != &v36 )
LABEL_47:
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)(v5 + 9) & -(__int64)(v5 != (__int64 *)16)) + 0x80) = v37;
        *v11 = &v36;
        *v12 = v11;
        v37 = (_QWORD **)(v6 + 120);
        *(_DWORD *)(v6 + 200) |= 0x10u;
      }
    }
    v5 = (__int64 *)*v5;
  }
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v8 = v36;
  while ( 1 )
  {
    result = &v36;
    if ( v8 == &v36 )
      return result;
    v13 = (PVOID ***)(v8 + 27);
    v14 = v8;
    v15 = (__int64 *)v8[27];
    v16 = (const struct RIMDEV *)(v8 - 15);
    RIMLockExclusive(v15 + 13);
    v20 = (_QWORD *)*v8;
    v8 = v20;
    if ( (_QWORD *)v20[1] != v14 )
      goto LABEL_47;
    v21 = (_QWORD *)v14[1];
    if ( (_QWORD *)*v21 != v14 )
      goto LABEL_47;
    *v21 = v20;
    v22 = v15 + 53;
    v20[1] = v21;
    v14[1] = v14;
    *v14 = v14;
    while ( 1 )
    {
      v23 = *v22;
      if ( !*v22 )
        break;
      if ( (const struct RIMDEV *)v23 == v16 )
      {
        if ( v14[16] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17, v18, v19);
        *v22 = *(v14 - 10);
        break;
      }
      v22 = (__int64 *)(v23 + 40);
    }
    if ( (v14[8] & 0x200) != 0 )
    {
      v24 = v14 - 2;
      if ( (_QWORD *)*v24 == v24 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17, v18, v19);
      v25 = (_QWORD *)*v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 )
        goto LABEL_47;
      v26 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v26 != v24 )
        goto LABEL_47;
      *v26 = v25;
      v25[1] = v26;
      v24[1] = v24;
      *v24 = v24;
      *((_DWORD *)v14 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v16);
    }
    if ( (*((_DWORD *)v14 + 20) & 0x80u) != 0 )
    {
      v27 = (_QWORD *)(v14[45] + 864LL);
      v28 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 )
        goto LABEL_47;
      v29 = *(_QWORD **)(v14[45] + 872LL);
      if ( (_QWORD *)*v29 != v27 )
        goto LABEL_47;
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v27[1] = v27;
      *v27 = v27;
    }
    RIMRemoveHoldingFrame(v15, v16);
    v15[14] = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v15);
    RIMLockExclusive(Object + 13);
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
    *v13 = Object;
    *(v14 - 10) = Object[53];
    Object[53] = (PVOID *)v16;
    if ( Object[80] || *((_DWORD *)Object + 216) )
      *((_DWORD *)v14 + 16) = v14[8] & 0xFF09FFFF | 0x20000;
    if ( (*((_DWORD *)v14 + 20) & 0x80u) != 0 )
    {
      v34 = Object[55];
      v35 = (_QWORD *)(v14[45] + 864LL);
      if ( *v34 != Object + 54 )
        goto LABEL_47;
      *v35 = Object + 54;
      v35[1] = v34;
      *v34 = v35;
      Object[55] = (PVOID *)v35;
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
  }
}
