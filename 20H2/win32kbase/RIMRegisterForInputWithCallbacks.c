/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C0006400
 * Callers:
 *     RIMRegisterForInput @ 0x1C0006390 (RIMRegisterForInput.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C0009110 (CreateKernelSemaphore.c)
 *     rimCheckForRegistrationConflicts @ 0x1C0022CA8 (rimCheckForRegistrationConflicts.c)
 *     RawInputManagerObjectCreate @ 0x1C0022E7C (RawInputManagerObjectCreate.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0023360 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0023ED8 (rimConvertUserToKernelEventHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0026058 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00B5898 (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C00B6858 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C00B7284 (RIMCheckPressureDefaultSetting.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00BDAD0 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C0159018 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0172450 (RIMDiscoverSpecificDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        HANDLE *a14)
{
  struct _UNICODE_STRING *v14; // rsi
  int v16; // edx
  int v17; // r9d
  __int64 KernelSemaphore; // r14
  unsigned int v20; // esi
  __int64 *v21; // r12
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r12d
  int v29; // eax
  bool v30; // sf
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // r12
  char *v35; // r14
  unsigned int v36; // r8d
  char *v37; // rdx
  GUID **v38; // rcx
  char *v39; // r9
  _DWORD *v40; // r10
  signed __int64 v41; // r11
  signed __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  struct _UNICODE_STRING *v48; // rbx
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned int v53; // r10d
  _DWORD *v54; // r8
  BOOL v55; // ecx
  __int64 v56; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v58; // r8
  _BYTE **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  char *v65; // rbx
  _QWORD *v66; // rdx
  void *v67; // rdx
  char *v68; // rbx
  __int64 v69; // r12
  int TableContext; // [rsp+20h] [rbp-118h]
  char v71; // [rsp+40h] [rbp-F8h]
  int v72; // [rsp+44h] [rbp-F4h]
  unsigned int v73; // [rsp+4Ch] [rbp-ECh]
  int v74; // [rsp+50h] [rbp-E8h]
  HANDLE v75; // [rsp+58h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  BOOL v77; // [rsp+68h] [rbp-D0h]
  HANDLE *v78; // [rsp+70h] [rbp-C8h]
  HANDLE v79; // [rsp+78h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-A8h] BYREF
  unsigned int v82; // [rsp+A0h] [rbp-98h]
  struct _UNICODE_STRING *v83; // [rsp+A8h] [rbp-90h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-88h]
  __int64 v85; // [rsp+B8h] [rbp-80h]
  HANDLE Handle; // [rsp+C0h] [rbp-78h] BYREF
  HANDLE v87; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-68h]
  struct _UNICODE_STRING *v89; // [rsp+D8h] [rbp-60h]
  __int64 v90; // [rsp+E0h] [rbp-58h]
  char v91; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v92; // [rsp+F0h] [rbp-48h]

  v88 = a4;
  v73 = a3;
  v14 = a2;
  v83 = a2;
  v89 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  Object = a6;
  v90 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v78 = a14;
  Handle = (HANDLE)-1LL;
  v87 = (HANDLE)-1LL;
  v79 = (HANDLE)-1LL;
  v75 = (HANDLE)-1LL;
  v92 = 0LL;
  v77 = a13 != 0;
  v71 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 11, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    a3 = v73;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, (_DWORD)a2, 1, 12, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v17 = 13;
LABEL_19:
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    return 3221225485LL;
  }
  if ( v14 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      WPP_RECORDER_SF_qDd(a1, (_DWORD)a2, a3, a4, TableContext, (char)v14, a1, a3);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v17 = 15;
      goto LABEL_19;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        16,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        a1,
        a3);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v17 = 17;
      goto LABEL_19;
    }
    if ( a13 )
    {
      if ( (unsigned __int8)rimCheckForRegistrationConflicts(a1) )
        return 3221225506LL;
      v71 = 1;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v85 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v20 = 0;
    v21 = (__int64 *)&v91;
    while ( 1 )
    {
      v22 = Win32AllocPoolNonPaged(104LL, 1668301138LL);
      *v21 = v22;
      if ( !v22 )
        break;
      ++v20;
      ++v21;
      if ( v20 > 2 )
      {
        v23 = rimConvertUserToKernelEventHandle(Object, &Handle);
        v28 = rimConvertUserToKernelTimerHandle(v90, &v87);
        if ( *(_QWORD *)&SourceString.Length )
          v29 = rimConvertUserToKernelTimerHandle(*(_QWORD *)&SourceString.Length, &v79);
        else
          v29 = 0;
        v30 = v23 < 0;
        if ( v23 >= 0 )
        {
          if ( v28 >= 0 && v29 >= 0 )
          {
            KeEnterCriticalRegion();
            v23 = RawInputManagerObjectCreate(a13 != 0, v31, v32, v33, &v75);
            KeLeaveCriticalRegion();
            v34 = 3LL;
            if ( v23 < 0 )
              goto LABEL_99;
            Object = 0LL;
            v23 = RawInputManagerObjectResolveHandle(v75, 3LL, 1LL, &Object);
            v72 = v23;
            if ( v23 < 0 )
              goto LABEL_99;
            v35 = (char *)Object;
            *((_QWORD *)Object + 9) = v75;
            *((_WORD *)v35 + 40) = 0;
            v35[82] = 0;
            *((_DWORD *)v35 + 21) = a1;
            *((_QWORD *)v35 + 15) = a5;
            *((_QWORD *)v35 + 13) = 0LL;
            *((_QWORD *)v35 + 14) = 0LL;
            *((_QWORD *)v35 + 71) = 0LL;
            *((_QWORD *)v35 + 72) = 0LL;
            *((_QWORD *)v35 + 53) = 0LL;
            *((_DWORD *)v35 + 102) = 0;
            *((_QWORD *)v35 + 52) = 0LL;
            *((_QWORD *)v35 + 55) = v35 + 432;
            *((_QWORD *)v35 + 54) = v35 + 432;
            *((_OWORD *)v35 + 28) = 0LL;
            *((_OWORD *)v35 + 29) = 0LL;
            *((_QWORD *)v35 + 57) = v35 + 448;
            *((_QWORD *)v35 + 56) = v35 + 448;
            *((_OWORD *)v35 + 30) = 0LL;
            *((_OWORD *)v35 + 31) = 0LL;
            RIMCheckPressureDefaultSetting(v35);
            *((_DWORD *)v35 + 216) = a13 == 0;
            *((_QWORD *)v35 + 109) = v85;
            *((_DWORD *)v35 + 220) = 0;
            v85 = 0LL;
            v36 = 0;
            v37 = &v91;
            v38 = &off_1C0204190;
            v39 = v35 + 248;
            v40 = v35 + 296;
            v41 = v35 - (char *)&off_1C0204190;
            v42 = v35 - &v91;
            do
            {
              *(_OWORD *)((char *)v38 + v41 + 128) = *(_OWORD *)v38;
              *(_OWORD *)((char *)v38 + v41 + 144) = *((_OWORD *)v38 + 1);
              *(_QWORD *)&v37[v42 + 224] = 0LL;
              *(_QWORD *)&v37[v42 + 312] = *(_QWORD *)v37;
              *v40 = 0;
              *(_QWORD *)v37 = 0LL;
              *((_DWORD *)v39 + 2) = v36;
              *(_QWORD *)v39 = v35;
              ++v36;
              ++v40;
              v38 += 4;
              v37 += 8;
              v39 += 16;
            }
            while ( v36 <= 2 );
            *((_QWORD *)v35 + 42) = v87;
            *((_QWORD *)v35 + 43) = v79;
            *((_DWORD *)v35 + 88) = a9;
            *((_QWORD *)v35 + 45) = 0LL;
            *((_QWORD *)v35 + 46) = 0LL;
            *((_QWORD *)v35 + 47) = 0LL;
            if ( a9 && v79 != (HANDLE)-1LL )
            {
              *((_QWORD *)v35 + 45) = gliQpcFreq.QuadPart * a9 / 1000;
              *((_QWORD *)v35 + 46) = gliQpcFreq.QuadPart * 20 * a9 / 1000;
            }
            *((_QWORD *)v35 + 50) = a10;
            *((_QWORD *)v35 + 48) = Handle;
            v35[392] = v71;
            v35[393] = 0;
            v35[584] = 0;
            *((_QWORD *)v35 + 89) = 0LL;
            *((_QWORD *)v35 + 88) = 500 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v35 + 92) = 5000 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v35 + 79) = a11;
            *((_QWORD *)v35 + 80) = a12;
            v35[512] = 0;
            RawInputManagerObject::bTouchInputAllowed = 1;
            v35[513] = 0;
            KeQueryPerformanceCounter((PLARGE_INTEGER)v35 + 65);
            *((_QWORD *)v35 + 66) = 1LL;
            *((_QWORD *)v35 + 76) = 0LL;
            *((_QWORD *)v35 + 68) = v35 + 536;
            *((_QWORD *)v35 + 67) = v35 + 536;
            *((_QWORD *)v35 + 70) = v35 + 552;
            *((_QWORD *)v35 + 69) = v35 + 552;
            *((_QWORD *)v35 + 75) = v35 + 592;
            *((_QWORD *)v35 + 74) = v35 + 592;
            *((_QWORD *)v35 + 78) = v35 + 616;
            *((_QWORD *)v35 + 77) = v35 + 616;
            *((_QWORD *)v35 + 112) = v35 + 888;
            *((_QWORD *)v35 + 111) = v35 + 888;
            RtlInitializeGenericTableAvl(
              (PRTL_AVL_TABLE)(v35 + 744),
              rimUserMemAllocNodeCompare,
              rimUserMemAllocNodeAlloc,
              DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
              0LL);
            v47 = v73;
            *((_DWORD *)v35 + 22) = v73;
            v48 = v83;
            if ( !v73 )
            {
LABEL_60:
              v55 = a13 != 0;
              goto LABEL_61;
            }
            if ( v83 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
              v47 = v73;
            }
            *(_QWORD *)&SourceString.Length = v47;
            v49 = 4 * v47;
            if ( v49 > 0xFFFFFFFF )
            {
              v23 = -1073741811;
            }
            else
            {
              LODWORD(v83) = v49;
              v50 = Win32AllocPool((unsigned int)v49, 1885435218LL);
              *((_QWORD *)v35 + 12) = v50;
              if ( v50 )
              {
                if ( !a13 )
                {
                  v51 = 0LL;
                  v52 = *(_QWORD *)&SourceString.Length;
                  v46 = v88;
                  do
                  {
                    *(_DWORD *)(v51 + *((_QWORD *)v35 + 12)) = *(_DWORD *)(v51 + v46);
                    v51 += 4LL;
                    --v52;
                  }
                  while ( v52 );
                  goto LABEL_60;
                }
                v53 = 0;
                v82 = 0;
                while ( v53 < v73 )
                {
                  v46 = v53;
                  v54 = (_DWORD *)(v88 + 4LL * v53);
                  if ( (unsigned __int64)v54 >= MmUserProbeAddress )
                    v54 = (_DWORD *)MmUserProbeAddress;
                  *(_DWORD *)(*((_QWORD *)v35 + 12) + 4LL * v53++) = *v54;
                  v82 = v53;
                }
                v55 = a13 != 0;
LABEL_61:
                if ( !v48 )
                {
                  if ( v23 >= 0 && !v35[392] )
                    RIMDiscoverDevicesOfInputType(v35);
                  RIMIDEAdoptOrphanedRimDevs(v35);
                  goto LABEL_94;
                }
                SourceString = 0LL;
                p_DestinationString = 0LL;
                DestinationString = 0LL;
                if ( !v55 )
                {
                  p_DestinationString = v48;
                  goto LABEL_81;
                }
                if ( (unsigned __int64)v48 >= MmUserProbeAddress )
                  v48 = (struct _UNICODE_STRING *)MmUserProbeAddress;
                v56 = *(unsigned int *)&v48->Length;
                v74 = *(_DWORD *)&v48->Length;
                *(_DWORD *)&SourceString.Length = *(_DWORD *)&v48->Length;
                Buffer = v48->Buffer;
                SourceString.Buffer = Buffer;
                if ( ((unsigned __int8)Buffer & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v58 = (ULONG64)Buffer + (unsigned __int16)v56 + 2;
                v59 = (_BYTE **)MmUserProbeAddress;
                if ( v58 >= MmUserProbeAddress || (unsigned __int16)v56 > HIWORD(v74) )
                {
LABEL_72:
                  if ( (v56 & 1) != 0 )
                    goto LABEL_73;
                }
                else
                {
                  if ( (v56 & 1) == 0 )
                  {
                    if ( v58 <= (unsigned __int64)Buffer )
                      goto LABEL_72;
LABEL_75:
                    if ( SourceString.Length )
                    {
                      DestinationString.MaximumLength = SourceString.Length;
                      DestinationString.Length = SourceString.Length;
                      DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 1886221394LL);
                      if ( DestinationString.Buffer )
                      {
                        RtlCopyUnicodeString(&DestinationString, &SourceString);
                        p_DestinationString = &DestinationString;
                      }
                      v23 = v72;
                    }
                    else
                    {
                      v23 = -1073741801;
                    }
                    v35 = (char *)Object;
LABEL_81:
                    if ( v23 >= 0 )
                    {
                      RIMLockExclusive(v35 + 104);
                      v23 = RIMDiscoverSpecificDevice(v35);
                      CInpPushLock::UnLockExclusive((CInpPushLock *)(v35 + 104));
                      if ( v23 < 0 )
                      {
                        if ( *((_QWORD *)v35 + 12) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v62, v63);
                        v64 = *((_QWORD *)v35 + 52);
                        if ( v64 )
                        {
                          Win32FreePool(v64);
                          *((_QWORD *)v35 + 52) = 0LL;
                        }
                        *((_QWORD *)v35 + 42) = -1LL;
                        *((_QWORD *)v35 + 43) = -1LL;
                        *((_QWORD *)v35 + 48) = -1LL;
                      }
                    }
                    if ( DestinationString.Buffer )
                      Win32FreePool(DestinationString.Buffer);
LABEL_94:
                    InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v35);
                    ObfDereferenceObject(v35);
                    KernelSemaphore = v85;
LABEL_99:
                    v65 = &v91;
                    if ( v23 < 0 )
                    {
                      do
                      {
                        if ( *(_QWORD *)v65 )
                          Win32FreePool(*(_QWORD *)v65);
                        v65 += 8;
                        --v34;
                      }
                      while ( v34 );
                      if ( KernelSemaphore )
                        Win32FreePool(KernelSemaphore);
                      if ( Handle != (HANDLE)-1LL )
                        ZwClose(Handle);
                      if ( v87 != (HANDLE)-1LL )
                        ZwClose(v87);
                      if ( v79 != (HANDLE)-1LL )
                        ZwClose(v79);
                      if ( v75 != (HANDLE)-1LL )
                        ObCloseHandle(v75, 1);
LABEL_123:
                      v67 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
                    }
                    else
                    {
                      do
                      {
                        if ( *(_QWORD *)v65 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
                        v65 += 8;
                        --v34;
                      }
                      while ( v34 );
                      if ( KernelSemaphore )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
                      if ( !a13 )
                      {
                        *v78 = v75;
                        goto LABEL_123;
                      }
                      v66 = v78;
                      if ( (unsigned __int64)v78 >= MmUserProbeAddress )
                        v66 = (_QWORD *)MmUserProbeAddress;
                      *v66 = v75;
                      v67 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v67) = 4;
                      WPP_RECORDER_SF_d(
                        (_DWORD)gRimLog,
                        (_DWORD)v67,
                        1,
                        20,
                        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                        v23);
                    }
                    return (unsigned int)v23;
                  }
LABEL_73:
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, Buffer, v58, v46);
                  v59 = (_BYTE **)MmUserProbeAddress;
                }
                **v59 = 0;
                goto LABEL_75;
              }
              v23 = -1073741801;
            }
            v72 = v23;
            goto LABEL_60;
          }
          v30 = v23 < 0;
        }
        if ( !v30 )
          v23 = v28;
        v34 = 3LL;
        goto LABEL_99;
      }
    }
    v68 = &v91;
    v69 = 3LL;
    do
    {
      if ( *(_QWORD *)v68 )
        Win32FreePool(*(_QWORD *)v68);
      v68 += 8;
      --v69;
    }
    while ( v69 );
    Win32FreePool(KernelSemaphore);
  }
  return 3221225495LL;
}
