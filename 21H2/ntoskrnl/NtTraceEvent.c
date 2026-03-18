/*
 * XREFs of NtTraceEvent @ 0x1402FE320
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x14022A8D0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x14022AFF8 (EtwpOpenLogger.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AB658 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x140460192 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x140630ACC (EtwTraceRaw.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 *     EtwpUpdateEnableMask @ 0x14079488C (EtwpUpdateEnableMask.c)
 *     EtwpFindGuidEntryByGuid @ 0x1407968D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 *     EtwpSetMark @ 0x1409E386C (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtTraceEvent(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // r13d
  NTSTATUS v9; // esi
  unsigned __int8 *v10; // r14
  _QWORD *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // edx
  int v17; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // edx
  unsigned __int16 v23; // r10
  __int64 v24; // r14
  __int64 v25; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v27; // rax
  int v28; // r9d
  __int64 CurrentServerSiloGlobals; // rax
  __int64 GuidEntryByGuid; // rax
  _QWORD *v31; // r14
  struct _KTHREAD *v32; // rax
  int v33; // r9d
  unsigned int v34; // edi
  int v35; // edx
  unsigned __int16 v36; // r10
  __int64 v37; // r11
  unsigned int v38; // r9d
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  struct _KTHREAD *v41; // rax
  int v42; // r9d
  int v43; // edx
  unsigned __int8 v44; // [rsp+80h] [rbp-118h] BYREF
  char v45; // [rsp+81h] [rbp-117h]
  unsigned __int64 v46; // [rsp+88h] [rbp-110h]
  int v47; // [rsp+90h] [rbp-108h]
  int v48; // [rsp+94h] [rbp-104h]
  unsigned __int64 v49; // [rsp+98h] [rbp-100h]
  unsigned __int8 v51; // [rsp+A2h] [rbp-F6h]
  __int16 v52; // [rsp+A4h] [rbp-F4h]
  unsigned int v53; // [rsp+A8h] [rbp-F0h]
  int v54; // [rsp+ACh] [rbp-ECh]
  int v55; // [rsp+B0h] [rbp-E8h]
  __int64 v56; // [rsp+B8h] [rbp-E0h]
  __int64 v57; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-C8h]
  __int64 v60; // [rsp+D8h] [rbp-C0h]
  __int64 v61; // [rsp+E0h] [rbp-B8h]
  int v62; // [rsp+F0h] [rbp-A8h]
  int v63; // [rsp+F4h] [rbp-A4h]
  unsigned __int64 v64; // [rsp+108h] [rbp-90h]
  unsigned __int64 v65; // [rsp+110h] [rbp-88h]
  __int64 v66; // [rsp+118h] [rbp-80h]
  __int64 v67; // [rsp+120h] [rbp-78h]
  PVOID Object[2]; // [rsp+128h] [rbp-70h] BYREF
  __int128 v69; // [rsp+138h] [rbp-60h] BYREF
  __int128 v70; // [rsp+148h] [rbp-50h]

  v5 = (unsigned int)a3;
  v6 = a2;
  v7 = a2 & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->PreviousMode )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v49 = *(_QWORD *)(a4 + 88);
    v65 = v49;
    LODWORD(v46) = *(_DWORD *)(a4 + 84);
    v62 = v46;
    v8 = *(unsigned __int16 *)(a4 + 82);
    v66 = *(unsigned __int16 *)(a4 + 82);
    v48 = *(_DWORD *)(a4 + 112);
    v63 = v48;
    v58 = *(_QWORD *)(a4 + 48);
    v67 = v58;
    v44 = *(_BYTE *)(a4 + 44);
    v51 = v44;
    v56 = 0LL;
    if ( *(_BYTE *)(a4 + 80) )
      v56 = a4 + 96;
    Object[0] = 0LL;
    v9 = ObReferenceObjectByHandle((HANDLE)a1, 0x800u, EtwpRegistrationObjectType, 1, Object, 0LL);
    if ( v9 >= 0 )
    {
      v57 = 0LL;
      v10 = (unsigned __int8 *)Object[0];
      v11 = (_QWORD *)*((_QWORD *)Object[0] + 4);
      Object[0] = v11;
      v12 = *((_QWORD *)v10 + 5);
      CurrentThread = (struct _KTHREAD *)v12;
      v13 = v6 >> 31;
      v69 = 0LL;
      v70 = 0LL;
      v14 = *((_QWORD *)v10 + 13);
      v15 = v14 + 28;
      if ( !v14 )
        v15 = 0LL;
      v16 = v10[100];
      if ( (_BYTE)v16 )
      {
        v9 = EtwpWriteUserEvent(
               (_DWORD)v11,
               v16,
               (unsigned __int16)v13,
               v8,
               v48,
               a4,
               v56,
               v44,
               v58,
               v46,
               v49,
               (__int64)&v69,
               0LL,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v57);
        v11 = Object[0];
        v12 = (__int64)CurrentThread;
      }
      v17 = v10[101];
      if ( (_BYTE)v17 )
      {
        v9 = EtwpWriteUserEvent(
               (_DWORD)v11,
               v17,
               (unsigned __int16)v13,
               v8,
               v48,
               a4,
               v56,
               v44,
               v58,
               v46,
               v49,
               (__int64)&v69,
               v12,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v57);
        v11 = Object[0];
      }
      if ( v11[50] )
      {
        v69 = 0LL;
        v70 = 0LL;
        v35 = v10[102];
        if ( (_BYTE)v35 )
        {
          v9 = EtwpWriteUserEvent(
                 v11[50],
                 v35,
                 (unsigned __int16)v13,
                 0,
                 v48,
                 a4,
                 v56,
                 v44,
                 v58,
                 v46,
                 v49,
                 (__int64)&v69,
                 0LL,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v57);
          v11 = Object[0];
        }
        v43 = v10[103];
        if ( (_BYTE)v43 )
          v9 = EtwpWriteUserEvent(
                 v11[50],
                 v43,
                 (unsigned __int16)v13,
                 0,
                 v48,
                 a4,
                 v56,
                 v44,
                 v58,
                 v46,
                 v49,
                 (__int64)&v69,
                 (__int64)CurrentThread->WaitBlock[1].Object,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v57);
      }
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    }
    return (unsigned int)v9;
  }
  if ( v7 == 1536 )
  {
    v44 = 0;
    v24 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2, a3, a4) + 864);
    v25 = v23;
    if ( v23 == 0xFFFF || !v23 )
      v25 = *(unsigned __int8 *)(v24 + 4232);
    if ( (unsigned int)v25 < *(_DWORD *)(v24 + 16)
      && (PreviousMode = KeGetCurrentThread()->PreviousMode, (v27 = EtwpOpenLogger(v25, v24, PreviousMode, &v44)) != 0) )
    {
      if ( (*(_DWORD *)(v27 + 12) & 0x2000000) != 0 )
      {
        v40 = 32LL * *(unsigned __int8 *)(v27 + 818) + v24 + 4284;
        if ( v40 && (*(_DWORD *)(v40 + 4) & 0x28) != 0 )
          LOBYTE(v28) = 1;
        else
          v28 = 0;
        v9 = EtwpSetMark(v27, a4, v5, v28, PreviousMode);
        v53 = v9;
      }
      else
      {
        v9 = -1073741811;
        v53 = -1073741811;
      }
      if ( v44 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 448) + 8 * v25), 1u);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return v53;
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
    return (unsigned int)v9;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x200u:
        Object[0] = (PVOID)a1;
        v49 = 0LL;
        if ( (_DWORD)a3 == 40 )
        {
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            v46 = a4;
            if ( (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v46 + 40 > 0x7FFFFFFF0000LL || v46 + 40 < v46 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v47 = *(_DWORD *)(v46 + 24);
            if ( (int)a2 < 0 )
            {
              LODWORD(v49) = *(_DWORD *)(v46 + 32);
              v47 |= 0x80u;
            }
            else
            {
              v49 = *(_QWORD *)(v46 + 32);
            }
            v19 = *(unsigned int *)(v46 + 28);
            v48 = v19;
            if ( (unsigned int)v19 <= 0x10000 )
            {
              if ( (_DWORD)v19 && (v49 + v19 > 0x7FFFFFFF0000LL || v49 + v19 < v49) )
                MEMORY[0x7FFFFFFF0000] = 0;
              HIDWORD(Object[0]) = v19;
              return EtwpTraceMessageVa(
                       (unsigned __int64)Object[0],
                       v47 | 0x40u,
                       (__int128 *)(v46 + 8),
                       *(_WORD *)(v46 + 4),
                       v49,
                       1u);
            }
            v9 = -1073741811;
            v53 = -1073741811;
            return (unsigned int)v9;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x100u:
        return (unsigned int)EtwTraceEvent(
                               a1,
                               a4,
                               48LL,
                               (((int)a2 >> 31) & 0xFFF60000) - 1072431104,
                               KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v37 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2, a3, a4) + 864);
        v38 = 0;
        if ( v36 != 0xFFFF )
          v38 = v36;
        if ( v38 < *(_DWORD *)(v37 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return 3221225621LL;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v39 = a4 + v5 + 32;
            if ( v39 > 0x7FFFFFFF0000LL || v39 < a4 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v64 = a4 + 32;
            v52 = *(_WORD *)(a4 + 6);
            Object[0] = (PVOID)(a4 + 32);
            Object[1] = (PVOID)(unsigned int)v5;
            EtwpLogSystemEventUnsafe(
              v37,
              (unsigned int)Object,
              (unsigned int)KeGetCurrentThread(),
              v38,
              1,
              v52,
              v6 & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x500u:
        v21 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, KeGetCurrentThread()[1].CycleTime, a3, a4) + 864);
        if ( *(_DWORD *)(v21 + 4072) == v22 )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v20 + 120) > 0x7FFFFFFF0000LL || v20 + 120 < a4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          return (unsigned int)EtwpWriteUserEvent(
                                 (int)v21 + 24,
                                 *(unsigned __int8 *)(v21 + 4064),
                                 0,
                                 0,
                                 *(_DWORD *)(v20 + 112),
                                 a4,
                                 0LL,
                                 *(_BYTE *)(a4 + 44),
                                 *(_QWORD *)(a4 + 48),
                                 *(_DWORD *)(v20 + 84),
                                 *(_QWORD *)(v20 + 88),
                                 0LL,
                                 0LL,
                                 0,
                                 0LL,
                                 0LL);
        }
        return 3221225506LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return (unsigned int)EtwTraceEvent(
                             a1,
                             a4,
                             72LL,
                             (((int)a2 >> 31) & 0xFFF60000) - 1072365568,
                             KeGetCurrentThread()->PreviousMode);
    if ( v7 == 2304 )
    {
      if ( (_DWORD)a2 == 2304 && (_DWORD)a3 && a4 )
        return (unsigned int)EtwTraceRaw(a1, a4, (unsigned int)a3, (unsigned __int8)KeGetCurrentThread()->PreviousMode);
      return 3221225485LL;
    }
    return (unsigned int)-1073741811;
  }
  *(_OWORD *)Object = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a4 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v60 = *(_QWORD *)(a4 + 88);
  v54 = *(_DWORD *)(a4 + 84);
  v55 = *(_DWORD *)(a4 + 112);
  v61 = *(_QWORD *)(a4 + 48);
  v45 = *(_BYTE *)(a4 + 44);
  *(_OWORD *)Object = *(_OWORD *)a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, 0x7FFFFFFF0000LL, a3, a4);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(CurrentServerSiloGlobals + 864), Object, 0LL);
  v31 = (_QWORD *)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v9 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      if ( v9 >= 0 )
      {
        v44 = 0;
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v31 + 51), 0LL);
        v31[52] = KeGetCurrentThread();
        LOBYTE(v33) = 1;
        EtwpUpdateEnableMask((_DWORD)v31, 0, 0, v33, (__int64)&v44);
        v31[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v31 + 51), 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v34 = v6 >> 31;
        v9 = EtwpWriteUserEvent(
               (_DWORD)v31,
               v44,
               (unsigned __int16)v34,
               0,
               v55,
               a4,
               0LL,
               v45,
               v61,
               v54,
               v60,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
        if ( v31[50] )
        {
          v44 = 0;
          v41 = KeGetCurrentThread();
          --v41->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v31 + 51), 0LL);
          v31[52] = KeGetCurrentThread();
          LOBYTE(v42) = 1;
          EtwpUpdateEnableMask(v31[50], 0, 1, v42, (__int64)&v44);
          v31[52] = 0LL;
          ExReleasePushLockEx((ULONG_PTR)(v31 + 51), 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v9 = EtwpWriteUserEvent(
                 v31[50],
                 v44,
                 (unsigned __int16)v34,
                 0,
                 v55,
                 a4,
                 0LL,
                 v45,
                 v61,
                 v54,
                 v60,
                 0LL,
                 0LL,
                 0,
                 0LL,
                 0LL);
        }
      }
      EtwpUnreferenceGuidEntry(v31);
      return (unsigned int)v9;
    }
    EtwpUnreferenceGuidEntry((PVOID)GuidEntryByGuid);
  }
  return 3221226242LL;
}
