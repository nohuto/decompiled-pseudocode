/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C0037400
 * Callers:
 *     RIMRegisterForInput @ 0x1C0037390 (RIMRegisterForInput.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016AA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     CreateKernelSemaphore @ 0x1C0021520 (CreateKernelSemaphore.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0047D2C (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C0048EA8 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C0049880 (RIMCheckPressureDefaultSetting.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C004F990 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C009EE88 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C00A3620 (rimConvertUserToKernelEventHandle.c)
 *     RawInputManagerObjectCreate @ 0x1C00A3C50 (RawInputManagerObjectCreate.c)
 *     rimCheckForRegistrationConflicts @ 0x1C00A4174 (rimCheckForRegistrationConflicts.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C01618C8 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C017ABB0 (RIMDiscoverSpecificDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct _KSEMAPHORE *KernelSemaphore; // r14
  unsigned int v20; // esi
  __int64 *v21; // r12
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rcx
  int v25; // r12d
  int v26; // eax
  bool v27; // sf
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // r12
  char *v32; // r14
  unsigned int v33; // r8d
  char *v34; // rdx
  GUID **v35; // rcx
  char *v36; // r9
  _DWORD *v37; // r10
  signed __int64 v38; // r11
  signed __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _UNICODE_STRING *v42; // rbx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // r10d
  _DWORD *v49; // r8
  BOOL v50; // ecx
  __int64 v51; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v53; // r8
  _BYTE **v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  char *v57; // rbx
  _QWORD *v58; // rdx
  void *v59; // rdx
  char *v60; // rbx
  __int64 v61; // r12
  int TableContext; // [rsp+20h] [rbp-118h]
  char v63; // [rsp+40h] [rbp-F8h]
  int v64; // [rsp+44h] [rbp-F4h]
  unsigned int v65; // [rsp+4Ch] [rbp-ECh]
  int v66; // [rsp+50h] [rbp-E8h]
  HANDLE v67; // [rsp+58h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  BOOL v69; // [rsp+68h] [rbp-D0h]
  HANDLE *v70; // [rsp+70h] [rbp-C8h]
  HANDLE v71; // [rsp+78h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-A8h] BYREF
  unsigned int v74; // [rsp+A0h] [rbp-98h]
  struct _UNICODE_STRING *v75; // [rsp+A8h] [rbp-90h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-88h]
  struct _KSEMAPHORE *v77; // [rsp+B8h] [rbp-80h]
  HANDLE Handle; // [rsp+C0h] [rbp-78h] BYREF
  HANDLE v79; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-68h]
  struct _UNICODE_STRING *v81; // [rsp+D8h] [rbp-60h]
  __int64 v82; // [rsp+E0h] [rbp-58h]
  char v83; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v84; // [rsp+F0h] [rbp-48h]

  v80 = a4;
  v65 = a3;
  v14 = a2;
  v75 = a2;
  v81 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  Object = a6;
  v82 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v70 = a14;
  Handle = (HANDLE)-1LL;
  v79 = (HANDLE)-1LL;
  v71 = (HANDLE)-1LL;
  v67 = (HANDLE)-1LL;
  v84 = 0LL;
  v69 = a13 != 0;
  v63 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 11, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    a3 = v65;
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
      v63 = 1;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v77 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v20 = 0;
    v21 = (__int64 *)&v83;
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
        v25 = rimConvertUserToKernelTimerHandle(v82, &v79);
        if ( *(_QWORD *)&SourceString.Length )
          v26 = rimConvertUserToKernelTimerHandle(*(_QWORD *)&SourceString.Length, &v71);
        else
          v26 = 0;
        v27 = v23 < 0;
        if ( v23 >= 0 )
        {
          if ( v25 >= 0 && v26 >= 0 )
          {
            KeEnterCriticalRegion();
            v23 = RawInputManagerObjectCreate(a13 != 0, v28, v29, v30, &v67);
            KeLeaveCriticalRegion();
            v31 = 3LL;
            if ( v23 < 0 )
              goto LABEL_99;
            Object = 0LL;
            v23 = RawInputManagerObjectResolveHandle(v67, 3LL, 1LL, &Object);
            v64 = v23;
            if ( v23 < 0 )
              goto LABEL_99;
            v32 = (char *)Object;
            *((_QWORD *)Object + 9) = v67;
            *((_WORD *)v32 + 40) = 0;
            v32[82] = 0;
            *((_DWORD *)v32 + 21) = a1;
            *((_QWORD *)v32 + 15) = a5;
            *((_QWORD *)v32 + 13) = 0LL;
            *((_QWORD *)v32 + 14) = 0LL;
            *((_QWORD *)v32 + 71) = 0LL;
            *((_QWORD *)v32 + 72) = 0LL;
            *((_QWORD *)v32 + 53) = 0LL;
            *((_DWORD *)v32 + 102) = 0;
            *((_QWORD *)v32 + 52) = 0LL;
            *((_QWORD *)v32 + 55) = v32 + 432;
            *((_QWORD *)v32 + 54) = v32 + 432;
            *((_OWORD *)v32 + 28) = 0LL;
            *((_OWORD *)v32 + 29) = 0LL;
            *((_QWORD *)v32 + 57) = v32 + 448;
            *((_QWORD *)v32 + 56) = v32 + 448;
            *((_OWORD *)v32 + 30) = 0LL;
            *((_OWORD *)v32 + 31) = 0LL;
            RIMCheckPressureDefaultSetting(v32);
            *((_DWORD *)v32 + 216) = a13 == 0;
            *((_QWORD *)v32 + 109) = v77;
            *((_DWORD *)v32 + 220) = 0;
            v77 = 0LL;
            v33 = 0;
            v34 = &v83;
            v35 = &off_1C020C1A0;
            v36 = v32 + 248;
            v37 = v32 + 296;
            v38 = v32 - (char *)&off_1C020C1A0;
            v39 = v32 - &v83;
            do
            {
              *(_OWORD *)((char *)v35 + v38 + 128) = *(_OWORD *)v35;
              *(_OWORD *)((char *)v35 + v38 + 144) = *((_OWORD *)v35 + 1);
              *(_QWORD *)&v34[v39 + 224] = 0LL;
              *(_QWORD *)&v34[v39 + 312] = *(_QWORD *)v34;
              *v37 = 0;
              *(_QWORD *)v34 = 0LL;
              *((_DWORD *)v36 + 2) = v33;
              *(_QWORD *)v36 = v32;
              ++v33;
              ++v37;
              v35 += 4;
              v34 += 8;
              v36 += 16;
            }
            while ( v33 <= 2 );
            *((_QWORD *)v32 + 42) = v79;
            *((_QWORD *)v32 + 43) = v71;
            *((_DWORD *)v32 + 88) = a9;
            *((_QWORD *)v32 + 45) = 0LL;
            *((_QWORD *)v32 + 46) = 0LL;
            *((_QWORD *)v32 + 47) = 0LL;
            if ( a9 && v71 != (HANDLE)-1LL )
            {
              *((_QWORD *)v32 + 45) = gliQpcFreq.QuadPart * a9 / 1000;
              *((_QWORD *)v32 + 46) = gliQpcFreq.QuadPart * 20 * a9 / 1000;
            }
            *((_QWORD *)v32 + 50) = a10;
            *((_QWORD *)v32 + 48) = Handle;
            v32[392] = v63;
            v32[393] = 0;
            v32[584] = 0;
            *((_QWORD *)v32 + 89) = 0LL;
            *((_QWORD *)v32 + 88) = 500 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v32 + 92) = 5000 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v32 + 79) = a11;
            *((_QWORD *)v32 + 80) = a12;
            v32[512] = 0;
            RawInputManagerObject::bTouchInputAllowed = 1;
            v32[513] = 0;
            KeQueryPerformanceCounter((PLARGE_INTEGER)v32 + 65);
            *((_QWORD *)v32 + 66) = 1LL;
            *((_QWORD *)v32 + 76) = 0LL;
            *((_QWORD *)v32 + 68) = v32 + 536;
            *((_QWORD *)v32 + 67) = v32 + 536;
            *((_QWORD *)v32 + 70) = v32 + 552;
            *((_QWORD *)v32 + 69) = v32 + 552;
            *((_QWORD *)v32 + 75) = v32 + 592;
            *((_QWORD *)v32 + 74) = v32 + 592;
            *((_QWORD *)v32 + 78) = v32 + 616;
            *((_QWORD *)v32 + 77) = v32 + 616;
            *((_QWORD *)v32 + 112) = v32 + 888;
            *((_QWORD *)v32 + 111) = v32 + 888;
            RtlInitializeGenericTableAvl(
              (PRTL_AVL_TABLE)(v32 + 744),
              rimUserMemAllocNodeCompare,
              rimUserMemAllocNodeAlloc,
              DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
              0LL);
            v41 = v65;
            *((_DWORD *)v32 + 22) = v65;
            v42 = v75;
            if ( !v65 )
            {
LABEL_60:
              v50 = a13 != 0;
              goto LABEL_61;
            }
            if ( v75 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
              v41 = v65;
            }
            *(_QWORD *)&SourceString.Length = v41;
            v43 = 4 * v41;
            if ( v43 > 0xFFFFFFFF )
            {
              v23 = -1073741811;
            }
            else
            {
              LODWORD(v75) = v43;
              v44 = Win32AllocPool((unsigned int)v43, 1885435218LL);
              *((_QWORD *)v32 + 12) = v44;
              if ( v44 )
              {
                if ( !a13 )
                {
                  v45 = 0LL;
                  v46 = *(_QWORD *)&SourceString.Length;
                  v47 = v80;
                  do
                  {
                    *(_DWORD *)(v45 + *((_QWORD *)v32 + 12)) = *(_DWORD *)(v45 + v47);
                    v45 += 4LL;
                    --v46;
                  }
                  while ( v46 );
                  goto LABEL_60;
                }
                v48 = 0;
                v74 = 0;
                while ( v48 < v65 )
                {
                  v49 = (_DWORD *)(v80 + 4LL * v48);
                  if ( (unsigned __int64)v49 >= MmUserProbeAddress )
                    v49 = (_DWORD *)MmUserProbeAddress;
                  *(_DWORD *)(*((_QWORD *)v32 + 12) + 4LL * v48++) = *v49;
                  v74 = v48;
                }
                v50 = a13 != 0;
LABEL_61:
                if ( !v42 )
                {
                  if ( v23 >= 0 && !v32[392] )
                    RIMDiscoverDevicesOfInputType(v32);
                  RIMIDEAdoptOrphanedRimDevs(v32);
                  goto LABEL_94;
                }
                SourceString = 0LL;
                p_DestinationString = 0LL;
                DestinationString = 0LL;
                if ( !v50 )
                {
                  p_DestinationString = v42;
                  goto LABEL_81;
                }
                if ( (unsigned __int64)v42 >= MmUserProbeAddress )
                  v42 = (struct _UNICODE_STRING *)MmUserProbeAddress;
                v51 = *(unsigned int *)&v42->Length;
                v66 = *(_DWORD *)&v42->Length;
                *(_DWORD *)&SourceString.Length = *(_DWORD *)&v42->Length;
                Buffer = v42->Buffer;
                SourceString.Buffer = Buffer;
                if ( ((unsigned __int8)Buffer & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v53 = (ULONG64)Buffer + (unsigned __int16)v51 + 2;
                v54 = (_BYTE **)MmUserProbeAddress;
                if ( v53 >= MmUserProbeAddress || (unsigned __int16)v51 > HIWORD(v66) )
                {
LABEL_72:
                  if ( (v51 & 1) != 0 )
                    goto LABEL_73;
                }
                else
                {
                  if ( (v51 & 1) == 0 )
                  {
                    if ( v53 <= (unsigned __int64)Buffer )
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
                      v23 = v64;
                    }
                    else
                    {
                      v23 = -1073741801;
                    }
                    v32 = (char *)Object;
LABEL_81:
                    if ( v23 >= 0 )
                    {
                      RIMLockExclusive(v32 + 104);
                      v23 = RIMDiscoverSpecificDevice(v32);
                      CInpPushLock::UnLockExclusive((CInpPushLock *)(v32 + 104));
                      if ( v23 < 0 )
                      {
                        if ( *((_QWORD *)v32 + 12) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v55);
                        v56 = *((_QWORD *)v32 + 52);
                        if ( v56 )
                        {
                          Win32FreePool(v56);
                          *((_QWORD *)v32 + 52) = 0LL;
                        }
                        *((_QWORD *)v32 + 42) = -1LL;
                        *((_QWORD *)v32 + 43) = -1LL;
                        *((_QWORD *)v32 + 48) = -1LL;
                      }
                    }
                    if ( DestinationString.Buffer )
                      Win32FreePool(DestinationString.Buffer);
LABEL_94:
                    InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v32);
                    ObfDereferenceObject(v32);
                    KernelSemaphore = v77;
LABEL_99:
                    v57 = &v83;
                    if ( v23 < 0 )
                    {
                      do
                      {
                        if ( *(_QWORD *)v57 )
                          Win32FreePool(*(_QWORD *)v57);
                        v57 += 8;
                        --v31;
                      }
                      while ( v31 );
                      if ( KernelSemaphore )
                        Win32FreePool(KernelSemaphore);
                      if ( Handle != (HANDLE)-1LL )
                        ZwClose(Handle);
                      if ( v79 != (HANDLE)-1LL )
                        ZwClose(v79);
                      if ( v71 != (HANDLE)-1LL )
                        ZwClose(v71);
                      if ( v67 != (HANDLE)-1LL )
                        ObCloseHandle(v67, 1);
LABEL_123:
                      v59 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
                    }
                    else
                    {
                      do
                      {
                        if ( *(_QWORD *)v57 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
                        v57 += 8;
                        --v31;
                      }
                      while ( v31 );
                      if ( KernelSemaphore )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
                      if ( !a13 )
                      {
                        *v70 = v67;
                        goto LABEL_123;
                      }
                      v58 = v70;
                      if ( (unsigned __int64)v70 >= MmUserProbeAddress )
                        v58 = (_QWORD *)MmUserProbeAddress;
                      *v58 = v67;
                      v59 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v59) = 4;
                      WPP_RECORDER_SF_d(
                        (_DWORD)gRimLog,
                        (_DWORD)v59,
                        1,
                        20,
                        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                        v23);
                    }
                    return (unsigned int)v23;
                  }
LABEL_73:
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v51);
                  v54 = (_BYTE **)MmUserProbeAddress;
                }
                **v54 = 0;
                goto LABEL_75;
              }
              v23 = -1073741801;
            }
            v64 = v23;
            goto LABEL_60;
          }
          v27 = v23 < 0;
        }
        if ( !v27 )
          v23 = v25;
        v31 = 3LL;
        goto LABEL_99;
      }
    }
    v60 = &v83;
    v61 = 3LL;
    do
    {
      if ( *(_QWORD *)v60 )
        Win32FreePool(*(_QWORD *)v60);
      v60 += 8;
      --v61;
    }
    while ( v61 );
    Win32FreePool(KernelSemaphore);
  }
  return 3221225495LL;
}
