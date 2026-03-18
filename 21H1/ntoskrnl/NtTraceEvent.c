/*
 * XREFs of NtTraceEvent @ 0x1402D5FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     EtwpTraceMessageVa @ 0x1402D68C0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x1402D6EF8 (EtwpOpenLogger.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AA58C (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x1405A04E0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x1405F26BC (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     EtwpSetMark @ 0x140932B3C (EtwpSetMark.c)
 */

__int64 __fastcall NtTraceEvent(unsigned __int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // r15
  unsigned __int16 v7; // r14
  unsigned int v8; // eax
  int v9; // r13d
  NTSTATUS v10; // r15d
  unsigned __int8 *v11; // r14
  unsigned __int64 v12; // rcx
  PVOID v13; // r8
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // edx
  int v18; // edx
  __int64 v20; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  __int64 v22; // r10
  __int64 v23; // rsi
  unsigned int v24; // edi
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // edi
  int v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // r14d
  unsigned __int64 v41; // rax
  unsigned int v42; // ebx
  __int64 CurrentServerSiloGlobals; // rax
  __int64 v44; // rdx
  struct _KTHREAD *v45; // rax
  int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  unsigned __int8 v51; // [rsp+80h] [rbp-138h] BYREF
  unsigned __int8 v52; // [rsp+81h] [rbp-137h] BYREF
  char v53; // [rsp+82h] [rbp-136h]
  unsigned __int64 v54; // [rsp+88h] [rbp-130h]
  int v55; // [rsp+90h] [rbp-128h]
  int v56; // [rsp+94h] [rbp-124h]
  unsigned __int64 v57; // [rsp+98h] [rbp-120h]
  unsigned __int8 v59; // [rsp+A2h] [rbp-116h]
  __int16 v60; // [rsp+A4h] [rbp-114h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-110h]
  int v62; // [rsp+B0h] [rbp-108h]
  int v63; // [rsp+B4h] [rbp-104h]
  __int64 v64; // [rsp+B8h] [rbp-100h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-F8h]
  PVOID Object; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-E0h]
  __int64 v69; // [rsp+E0h] [rbp-D8h]
  int v70; // [rsp+F0h] [rbp-C8h]
  int v71; // [rsp+F4h] [rbp-C4h]
  int v72; // [rsp+F8h] [rbp-C0h]
  unsigned __int64 v73; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+118h] [rbp-A0h]
  __int64 v75; // [rsp+120h] [rbp-98h]
  struct _KTHREAD *v76; // [rsp+128h] [rbp-90h]
  unsigned __int64 v77; // [rsp+130h] [rbp-88h] BYREF
  int v78; // [rsp+138h] [rbp-80h]
  int v79; // [rsp+13Ch] [rbp-7Ch]
  __int128 v80; // [rsp+140h] [rbp-78h] BYREF
  __int128 v81; // [rsp+150h] [rbp-68h] BYREF
  __int128 v82; // [rsp+160h] [rbp-58h]

  v5 = a3;
  v7 = a1;
  v8 = a2 & 0xFF00;
  switch ( v8 )
  {
    case 0x300u:
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->PreviousMode )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v57 = *(_QWORD *)(a4 + 88);
      v74 = v57;
      LODWORD(v54) = *(_DWORD *)(a4 + 84);
      v72 = v54;
      v9 = *(unsigned __int16 *)(a4 + 82);
      v75 = *(unsigned __int16 *)(a4 + 82);
      v56 = *(_DWORD *)(a4 + 112);
      v71 = v56;
      CurrentThread = *(struct _KTHREAD **)(a4 + 48);
      v76 = CurrentThread;
      v51 = *(_BYTE *)(a4 + 44);
      v59 = v51;
      v64 = 0LL;
      if ( *(_BYTE *)(a4 + 80) )
        v64 = a4 + 96;
      Object = 0LL;
      v10 = ObReferenceObjectByHandle((HANDLE)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
      if ( v10 >= 0 )
      {
        v67 = 0LL;
        v11 = (unsigned __int8 *)Object;
        v12 = *((_QWORD *)Object + 4);
        v61 = v12;
        v13 = (PVOID)*((_QWORD *)Object + 5);
        Object = v13;
        v14 = (unsigned int)a2 >> 31;
        v81 = 0LL;
        v82 = 0LL;
        v15 = *((_QWORD *)v11 + 13);
        v16 = v15 + 28;
        if ( !v15 )
          v16 = 0LL;
        v17 = v11[100];
        if ( (_BYTE)v17 )
        {
          v10 = EtwpWriteUserEvent(
                  v12,
                  v17,
                  (unsigned __int16)v14,
                  v9,
                  v56,
                  a4,
                  v64,
                  v51,
                  (__int64)CurrentThread,
                  v54,
                  v57,
                  (__int64)&v81,
                  0LL,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v67);
          v12 = v61;
          v13 = Object;
        }
        v18 = v11[101];
        if ( (_BYTE)v18 )
        {
          v10 = EtwpWriteUserEvent(
                  v12,
                  v18,
                  (unsigned __int16)v14,
                  v9,
                  v56,
                  a4,
                  v64,
                  v51,
                  (__int64)CurrentThread,
                  v54,
                  v57,
                  (__int64)&v81,
                  (__int64)v13,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v67);
          v12 = v61;
        }
        if ( *(_QWORD *)(v12 + 400) )
        {
          v81 = 0LL;
          v82 = 0LL;
          v37 = v11[102];
          if ( (_BYTE)v37 )
          {
            v10 = EtwpWriteUserEvent(
                    *(_QWORD *)(v12 + 400),
                    v37,
                    (unsigned __int16)v14,
                    0,
                    v56,
                    a4,
                    v64,
                    v51,
                    (__int64)CurrentThread,
                    v54,
                    v57,
                    (__int64)&v81,
                    0LL,
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v67);
            v12 = v61;
          }
          v50 = v11[103];
          if ( (_BYTE)v50 )
            v10 = EtwpWriteUserEvent(
                    *(_QWORD *)(v12 + 400),
                    v50,
                    (unsigned __int16)v14,
                    0,
                    v56,
                    a4,
                    v64,
                    v51,
                    (__int64)CurrentThread,
                    v54,
                    v57,
                    (__int64)&v81,
                    *((_QWORD *)Object + 50),
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v67);
        }
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      }
      return (unsigned int)v10;
    case 0x200u:
      v61 = a1;
      v57 = 0LL;
      if ( a3 == 40 )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v54 = a4;
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v54 + 40 > 0x7FFFFFFF0000LL || v54 + 40 < v54 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v55 = *(_DWORD *)(v54 + 24);
          if ( a2 < 0 )
          {
            LODWORD(v57) = *(_DWORD *)(v54 + 32);
            v55 |= 0x80u;
          }
          else
          {
            v57 = *(_QWORD *)(v54 + 32);
          }
          v20 = *(unsigned int *)(v54 + 28);
          v56 = v20;
          if ( (unsigned int)v20 <= 0x10000 )
          {
            if ( (_DWORD)v20 && (v57 + v20 > 0x7FFFFFFF0000LL || v57 + v20 < v57) )
              MEMORY[0x7FFFFFFF0000] = 0;
            HIDWORD(v61) = v20;
            return EtwpTraceMessageVa(v61, v55 | 0x40u, (int)v54 + 8, *(unsigned __int16 *)(v54 + 4), v57, 1);
          }
          v10 = -1073741811;
          v70 = -1073741811;
          return (unsigned int)v10;
        }
        return 3221225659LL;
      }
      return 3221225485LL;
    case 0x600u:
      v52 = 0;
      v23 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
      v24 = v7;
      if ( v7 == 0xFFFF || !v7 )
        v24 = *(unsigned __int8 *)(v23 + 4208);
      if ( v24 < *(_DWORD *)(v23 + 16)
        && (v25 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
            (v26 = EtwpOpenLogger(v24, v23, v25, &v52)) != 0) )
      {
        if ( (*(_DWORD *)(v26 + 12) & 0x2000000) != 0 )
        {
          v44 = 32LL * *(unsigned __int8 *)(v26 + 834) + v23 + 4260;
          if ( v44 && (*(_DWORD *)(v44 + 4) & 0x28) != 0 )
            LOBYTE(v27) = 1;
          else
            v27 = 0;
          v10 = EtwpSetMark(v26, a4, v5, v27, v25);
        }
        else
        {
          v10 = -1073741811;
        }
        EtwpCloseLogger(v24, v23, v52);
      }
      else
      {
        return (unsigned int)-1073741816;
      }
      return (unsigned int)v10;
  }
  if ( v8 <= 0x600 )
  {
    switch ( v8 )
    {
      case 0x100u:
        return (unsigned int)EtwTraceEvent(
                               a1,
                               a4,
                               48LL,
                               ((a2 >> 31) & 0xFFF60000) - 1072431104,
                               KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v38 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        v39 = v7;
        v40 = 0;
        if ( (_WORD)v39 != 0xFFFF )
          v40 = v39;
        if ( v40 < *(_DWORD *)(v38 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return 3221225621LL;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v41 = a4 + v5 + 32;
            if ( v41 > 0x7FFFFFFF0000LL || v41 < a4 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v73 = a4 + 32;
            v60 = *(_WORD *)(a4 + 6);
            v77 = a4 + 32;
            v78 = v5;
            v79 = 0;
            v42 = (unsigned int)KeGetCurrentThread();
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            EtwpLogSystemEventUnsafe(
              *(_QWORD *)(CurrentServerSiloGlobals + 864),
              (unsigned int)&v77,
              v42,
              v40,
              1,
              v60,
              a2 & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x500u:
        CycleTime = KeGetCurrentThread()[1].CycleTime;
        v22 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        if ( *(_DWORD *)(v22 + 4072) == (_DWORD)CycleTime )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          return (unsigned int)EtwpWriteUserEvent(
                                 (int)v22 + 24,
                                 *(unsigned __int8 *)(v22 + 4064),
                                 0,
                                 0,
                                 *(_DWORD *)(a4 + 112),
                                 a4,
                                 0LL,
                                 *(_BYTE *)(a4 + 44),
                                 *(_QWORD *)(a4 + 48),
                                 *(_DWORD *)(a4 + 84),
                                 *(_QWORD *)(a4 + 88),
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
  if ( v8 != 1792 )
  {
    if ( v8 == 2048 )
      return (unsigned int)EtwTraceEvent(
                             a1,
                             a4,
                             72LL,
                             ((a2 >> 31) & 0xFFF60000) - 1072365568,
                             KeGetCurrentThread()->PreviousMode);
    if ( v8 == 2304 )
    {
      if ( a2 == 2304 && a3 && a4 )
        return (unsigned int)EtwTraceRaw(
                               a1,
                               a4,
                               a3,
                               (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10]);
      return 3221225485LL;
    }
    return (unsigned int)-1073741811;
  }
  v80 = 0LL;
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
  v68 = *(_QWORD *)(a4 + 88);
  v62 = *(_DWORD *)(a4 + 84);
  v63 = *(_DWORD *)(a4 + 112);
  v69 = *(_QWORD *)(a4 + 48);
  v53 = *(_BYTE *)(a4 + 44);
  v80 = *(_OWORD *)a1;
  v28 = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(v28 + 864), &v80, 0LL);
  v30 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u, 0LL);
      if ( v10 >= 0 )
      {
        v51 = 0;
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v30 + 408, 0LL);
        *(_QWORD *)(v30 + 416) = KeGetCurrentThread();
        LOBYTE(v32) = 1;
        EtwpUpdateEnableMask(v30, 0, 0, v32, (__int64)&v51);
        *(_QWORD *)(v30 + 416) = 0LL;
        ExReleasePushLockEx(v30 + 408, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v33, v34, v35);
        v36 = (unsigned int)a2 >> 31;
        v10 = EtwpWriteUserEvent(
                v30,
                v51,
                (unsigned __int16)v36,
                0,
                v63,
                a4,
                0LL,
                v53,
                v69,
                v62,
                v68,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
        if ( *(_QWORD *)(v30 + 400) )
        {
          v51 = 0;
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v30 + 408, 0LL);
          *(_QWORD *)(v30 + 416) = KeGetCurrentThread();
          LOBYTE(v46) = 1;
          EtwpUpdateEnableMask(*(_QWORD *)(v30 + 400), 0, 1, v46, (__int64)&v51);
          *(_QWORD *)(v30 + 416) = 0LL;
          ExReleasePushLockEx(v30 + 408, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48, v49);
          v10 = EtwpWriteUserEvent(
                  *(_QWORD *)(v30 + 400),
                  v51,
                  (unsigned __int16)v36,
                  0,
                  v63,
                  a4,
                  0LL,
                  v53,
                  v69,
                  v62,
                  v68,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
        }
      }
      EtwpUnreferenceGuidEntry(v30);
      return (unsigned int)v10;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return 3221226242LL;
}
