/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x1C000C7F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C000D548 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall EditionCreateWindowStationEntryPoint(
        ULONG64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v8; // r13d
  ULONG64 v11; // rdi
  int v12; // eax
  const unsigned __int16 *v13; // rdi
  unsigned __int64 v14; // r14
  ULONG64 v15; // rdx
  _BYTE **v16; // rcx
  _OWORD *v17; // rcx
  _OWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  unsigned int *v23; // rdx
  ULONG64 v24; // rdx
  int ProcessLuid; // edi
  char v26; // r14
  __int64 v27; // rcx
  WCHAR *v28; // r8
  ULONG64 v29; // rdx
  _BYTE **v30; // rax
  USHORT Length; // ax
  int v32; // eax
  ULONG64 v33; // rcx
  int v34; // eax
  int v35; // r15d
  NTSTATUS v36; // ecx
  __int64 v37; // rdi
  int v38; // edx
  __int64 ThreadWin32Thread; // rax
  ULONG v40; // eax
  NTSTATUS Status; // [rsp+54h] [rbp-694h]
  int v43; // [rsp+60h] [rbp-688h]
  int v44; // [rsp+60h] [rbp-688h]
  __int64 v45; // [rsp+68h] [rbp-680h] BYREF
  _DWORD *v46; // [rsp+70h] [rbp-678h]
  PVOID BaseAddress; // [rsp+78h] [rbp-670h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-668h] BYREF
  int v49; // [rsp+90h] [rbp-658h]
  int v50; // [rsp+98h] [rbp-650h]
  int v51; // [rsp+A0h] [rbp-648h]
  __int64 v52; // [rsp+A8h] [rbp-640h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-638h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-630h] BYREF
  __m128i v55; // [rsp+C8h] [rbp-620h]
  __int128 v56; // [rsp+D8h] [rbp-610h]
  __int64 v57; // [rsp+E8h] [rbp-600h]
  __int128 v58; // [rsp+F0h] [rbp-5F8h]
  __int128 v59; // [rsp+100h] [rbp-5E8h] BYREF
  __int64 v60; // [rsp+110h] [rbp-5D8h]
  __int128 v61; // [rsp+118h] [rbp-5D0h]
  __int64 v62; // [rsp+128h] [rbp-5C0h]
  __int128 v63; // [rsp+138h] [rbp-5B0h]
  __m128i v64; // [rsp+148h] [rbp-5A0h]
  __int128 v65; // [rsp+158h] [rbp-590h]
  _BYTE v66[792]; // [rsp+168h] [rbp-580h] BYREF
  __int64 v67; // [rsp+480h] [rbp-268h] BYREF
  int v68; // [rsp+488h] [rbp-260h]
  unsigned __int16 v69[16]; // [rsp+490h] [rbp-258h] BYREF
  WCHAR SourceString[256]; // [rsp+4B0h] [rbp-238h] BYREF

  v49 = a4;
  v8 = a3;
  v50 = a2;
  v57 = a3;
  v51 = a4;
  v11 = a7;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v52 = 0LL;
  DestinationString = 0LL;
  v58 = 0LL;
  v46 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v45 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_DWORD *)v11;
  v43 = *(_DWORD *)v11;
  LODWORD(v58) = *(_DWORD *)v11;
  v13 = *(const unsigned __int16 **)(v11 + 8);
  *((_QWORD *)&v58 + 1) = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int16)v12;
  v15 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v43) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_10:
      ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
      v16 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v15 > (unsigned __int64)v13 )
      goto LABEL_12;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v16 = 0;
LABEL_12:
  RtlStringCchCopyNW(v69, 9uLL, v13, v14 >> 1);
  v46 = (_DWORD *)Win32AllocPoolWithQuota(792LL, 1702064981LL);
  if ( !v46 )
  {
    v45 = 0LL;
    UserSetLastError(8LL);
    goto LABEL_62;
  }
  v17 = (_OWORD *)a6;
  if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
    v17 = (_OWORD *)MmUserProbeAddress;
  v18 = v66;
  v19 = 6LL;
  v20 = 6LL;
  do
  {
    *v18 = *v17;
    v18[1] = v17[1];
    v18[2] = v17[2];
    v18[3] = v17[3];
    v18[4] = v17[4];
    v18[5] = v17[5];
    v18[6] = v17[6];
    v18 += 8;
    *(v18 - 1) = v17[7];
    v17 += 8;
    --v20;
  }
  while ( v20 );
  *v18 = *v17;
  *((_QWORD *)v18 + 2) = *((_QWORD *)v17 + 2);
  v21 = v46;
  v22 = v66;
  do
  {
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    v21[6] = v22[6];
    v21 += 8;
    *(v21 - 1) = v22[7];
    v22 += 8;
    --v19;
  }
  while ( v19 );
  *v21 = *v22;
  *((_QWORD *)v21 + 2) = *((_QWORD *)v22 + 2);
  if ( *v46 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v63 = *(_OWORD *)a1;
    v64 = *(__m128i *)(a1 + 16);
    v65 = *(_OWORD *)(a1 + 32);
    v54 = v63;
    v55 = v64;
    v56 = v65;
    v55.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v64, 8)) & 0xFFFFFDFF;
    v23 = (unsigned int *)v64.m128i_i64[0];
    if ( __PAIR128__(v64.m128i_u64[0], *((unsigned __int64 *)&v63 + 1)) == 0 )
    {
      ProcessLuid = GetProcessLuid(0LL, &v52, 0LL, 128LL);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(
          SourceString,
          0x100uLL,
          L"%ws\\Service-0x%x-%x$",
          szWindowStationDirectory,
          HIDWORD(v52),
          v52);
        RtlInitUnicodeString(&DestinationString, SourceString);
        v55.m128i_i64[0] = (__int64)&DestinationString;
      }
      v26 = 0;
      goto LABEL_46;
    }
    if ( v64.m128i_i64[0] >= MmUserProbeAddress )
      v23 = (unsigned int *)MmUserProbeAddress;
    v27 = *v23;
    v44 = *v23;
    *(_DWORD *)&DestinationString.Length = *v23;
    v28 = (WCHAR *)*((_QWORD *)v23 + 1);
    DestinationString.Buffer = v28;
    if ( ((unsigned __int8)v28 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = (ULONG64)v28 + (unsigned __int16)v27 + 2;
    v30 = (_BYTE **)MmUserProbeAddress;
    if ( v29 < MmUserProbeAddress && (unsigned __int16)v27 <= HIWORD(v44) )
    {
      if ( (v27 & 1) != 0 )
        goto LABEL_39;
      if ( v29 > (unsigned __int64)v28 )
      {
LABEL_41:
        Length = 522;
        if ( DestinationString.Length < 0x20Au )
          Length = DestinationString.Length;
        DestinationString.Length = Length;
        RegionSize = Length;
        v32 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        ProcessLuid = v32;
        if ( v32 < 0 )
          ExRaiseStatus(v32);
        memmove(BaseAddress, DestinationString.Buffer, DestinationString.Length);
        DestinationString.Buffer = (PWSTR)BaseAddress;
        v55.m128i_i64[0] = (__int64)&DestinationString;
        v26 = 1;
LABEL_46:
        if ( ProcessLuid >= 0 )
        {
          v33 = *((_QWORD *)&v56 + 1);
          if ( *((_QWORD *)&v56 + 1) )
          {
            v24 = *((_QWORD *)&v56 + 1) + 12LL;
            if ( (unsigned __int64)(*((_QWORD *)&v56 + 1) + 12LL) < *((_QWORD *)&v56 + 1) || v24 > MmUserProbeAddress )
              v33 = MmUserProbeAddress;
            v34 = *(_DWORD *)(v33 + 8);
            v67 = *(_QWORD *)v33;
            v68 = v34;
            *((_QWORD *)&v56 + 1) = &v67;
          }
          if ( (_QWORD)v56 )
          {
            LOBYTE(v24) = 1;
            ProcessLuid = SeCaptureSecurityDescriptor(v56, v24);
            *(_QWORD *)&v56 = 0LL;
          }
        }
        v35 = v49;
        if ( ProcessLuid >= 0 )
        {
          v37 = (__int64)v46;
          PushW32ThreadLock(v46, &v59, Win32FreePool);
          LOBYTE(v38) = v26;
          Status = xxxCreateWindowStation(
                     (unsigned int)&v54,
                     v38,
                     a2,
                     v8,
                     v35,
                     a5,
                     v37,
                     (__int64)v69,
                     a8,
                     (__int64)&v45);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)(ThreadWin32Thread + 16) = v59;
          v36 = Status;
          if ( Status >= 0 )
            goto LABEL_58;
        }
        else
        {
          v36 = ProcessLuid;
        }
        v45 = 0LL;
        v40 = RtlNtStatusToDosError(v36);
        UserSetLastError(v40);
        goto LABEL_58;
      }
    }
    if ( (v27 & 1) == 0 )
    {
LABEL_40:
      **v30 = 0;
      goto LABEL_41;
    }
LABEL_39:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v29, v28, 128LL);
    v30 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_40;
  }
  v45 = 0LL;
  UserSetLastError(87LL);
LABEL_58:
  if ( v46 )
    Win32FreePool(v46);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_62:
  UserSessionSwitchLeaveCrit();
  return v45;
}
