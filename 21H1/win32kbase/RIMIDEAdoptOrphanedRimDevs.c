/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C0047D2C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMRemoveHoldingFrame @ 0x1C0056D48 (RIMRemoveHoldingFrame.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015AB84 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C0171FDC (RIMIDEIsCompatibleDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  PVOID **v4; // rcx
  _QWORD *v5; // rsi
  _QWORD *result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  PVOID ***v10; // r12
  _QWORD *v11; // rbx
  __int64 *v12; // r15
  const struct RIMDEV *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  PVOID *v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v28; // [rsp+28h] [rbp-30h]

  RIMLockExclusive(&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v28 = &v27;
  v27 = &v27;
  while ( v2 != &gObRimDevList )
  {
    v3 = (unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16);
    v4 = *(PVOID ***)(v3 + 0x150);
    if ( v4
      && *((_BYTE *)v4 + 81)
      && (*(_DWORD *)(((unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) + 0xB8) & 0x2000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) + 0xC8) & 4) == 0 )
    {
      if ( v4 == Object )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
      if ( (unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) )
      {
        v8 = (_QWORD *)(v3 + 120);
        if ( (_QWORD *)*v8 != v8 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
        v9 = v28;
        if ( *v28 != &v27 )
LABEL_47:
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)(v2 + 9) & -(__int64)(v2 != (__int64 *)16)) + 0x80) = v28;
        *v8 = &v27;
        *v9 = v8;
        v28 = (_QWORD **)(v3 + 120);
        *(_DWORD *)(v3 + 200) |= 0x10u;
      }
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v5 = v27;
  while ( 1 )
  {
    result = &v27;
    if ( v5 == &v27 )
      return result;
    v10 = (PVOID ***)(v5 + 27);
    v11 = v5;
    v12 = (__int64 *)v5[27];
    v13 = (const struct RIMDEV *)(v5 - 15);
    RIMLockExclusive(v12 + 13);
    v14 = (_QWORD *)*v5;
    v5 = v14;
    if ( (_QWORD *)v14[1] != v11 )
      goto LABEL_47;
    v15 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v15 != v11 )
      goto LABEL_47;
    *v15 = v14;
    v16 = v12 + 53;
    v14[1] = v15;
    v11[1] = v11;
    *v11 = v11;
    while ( 1 )
    {
      v17 = *v16;
      if ( !*v16 )
        break;
      if ( (const struct RIMDEV *)v17 == v13 )
      {
        if ( v11[16] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
        *v16 = *(v11 - 10);
        break;
      }
      v16 = (__int64 *)(v17 + 40);
    }
    if ( (v11[8] & 0x200) != 0 )
    {
      v18 = v11 - 2;
      if ( (_QWORD *)*v18 == v18 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
      v19 = (_QWORD *)*v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_47;
      v20 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v20 != v18 )
        goto LABEL_47;
      *v20 = v19;
      v19[1] = v20;
      v18[1] = v18;
      *v18 = v18;
      *((_DWORD *)v11 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v13);
    }
    if ( (*((_DWORD *)v11 + 20) & 0x80u) != 0 )
    {
      v21 = (_QWORD *)(v11[45] + 864LL);
      v22 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 )
        goto LABEL_47;
      v23 = *(_QWORD **)(v11[45] + 872LL);
      if ( (_QWORD *)*v23 != v21 )
        goto LABEL_47;
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      v21[1] = v21;
      *v21 = v21;
    }
    RIMRemoveHoldingFrame(v12, v13);
    v12[14] = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
    RIMLockExclusive(Object + 13);
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
    *v10 = Object;
    *(v11 - 10) = Object[53];
    Object[53] = (PVOID *)v13;
    if ( Object[80] || *((_DWORD *)Object + 216) )
      *((_DWORD *)v11 + 16) = v11[8] & 0xFF09FFFF | 0x20000;
    if ( (*((_DWORD *)v11 + 20) & 0x80u) != 0 )
    {
      v25 = Object[55];
      v26 = (_QWORD *)(v11[45] + 864LL);
      if ( *v25 != Object + 54 )
        goto LABEL_47;
      *v26 = Object + 54;
      v26[1] = v25;
      *v25 = v26;
      Object[55] = (PVOID *)v26;
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
  }
}
