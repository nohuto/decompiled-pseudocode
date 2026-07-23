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

NTSTATUS __cdecl NtTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  __int64 v5; // r15
  unsigned __int16 v7; // r14
  ULONG v8; // eax
  int v9; // r13d
  int v10; // r15d
  unsigned __int8 *v11; // r14
  _QWORD *v12; // rcx
  PVOID v13; // r8
  ULONG v14; // edi
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
  ULONG v36; // edi
  int v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // r14d
  char *v41; // rax
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
  char *v54; // [rsp+88h] [rbp-130h]
  int v55; // [rsp+90h] [rbp-128h]
  int v56; // [rsp+94h] [rbp-124h]
  unsigned __int64 v57; // [rsp+98h] [rbp-120h]
  unsigned __int8 v59; // [rsp+A2h] [rbp-116h]
  __int16 v60; // [rsp+A4h] [rbp-114h]
  _QWORD *v61; // [rsp+A8h] [rbp-110h]
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
  char *v73; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+118h] [rbp-A0h]
  __int64 v75; // [rsp+120h] [rbp-98h]
  struct _KTHREAD *v76; // [rsp+128h] [rbp-90h]
  char *v77; // [rsp+130h] [rbp-88h] BYREF
  int v78; // [rsp+138h] [rbp-80h]
  int v79; // [rsp+13Ch] [rbp-7Ch]
  __int128 v80; // [rsp+140h] [rbp-78h] BYREF
  __int128 v81; // [rsp+150h] [rbp-68h] BYREF
  __int128 v82; // [rsp+160h] [rbp-58h]

  v5 = FieldSize;
  v7 = (unsigned __int16)TraceHandle;
  v8 = Flags & 0xFF00;
  switch ( v8 )
  {
    case 0x300u:
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->PreviousMode )
      {
        if ( ((unsigned __int8)Fields & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v57 = *((_QWORD *)Fields + 11);
      v74 = v57;
      LODWORD(v54) = *((_DWORD *)Fields + 21);
      v72 = (int)v54;
      v9 = *((unsigned __int16 *)Fields + 41);
      v75 = *((unsigned __int16 *)Fields + 41);
      v56 = *((_DWORD *)Fields + 28);
      v71 = v56;
      CurrentThread = (struct _KTHREAD *)*((_QWORD *)Fields + 6);
      v76 = CurrentThread;
      v51 = *((_BYTE *)Fields + 44);
      v59 = v51;
      v64 = 0LL;
      if ( *((_BYTE *)Fields + 80) )
        v64 = (__int64)Fields + 96;
      Object = 0LL;
      v10 = ObReferenceObjectByHandle(TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
      if ( v10 >= 0 )
      {
        v67 = 0LL;
        v11 = (unsigned __int8 *)Object;
        v12 = (_QWORD *)*((_QWORD *)Object + 4);
        v61 = v12;
        v13 = (PVOID)*((_QWORD *)Object + 5);
        Object = v13;
        v14 = Flags >> 31;
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
                  (_DWORD)v12,
                  v17,
                  (unsigned __int16)v14,
                  v9,
                  v56,
                  (__int64)Fields,
                  v64,
                  v51,
                  (__int64)CurrentThread,
                  (_DWORD)v54,
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
                  (_DWORD)v12,
                  v18,
                  (unsigned __int16)v14,
                  v9,
                  v56,
                  (__int64)Fields,
                  v64,
                  v51,
                  (__int64)CurrentThread,
                  (_DWORD)v54,
                  v57,
                  (__int64)&v81,
                  (__int64)v13,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v67);
          v12 = v61;
        }
        if ( v12[50] )
        {
          v81 = 0LL;
          v82 = 0LL;
          v37 = v11[102];
          if ( (_BYTE)v37 )
          {
            v10 = EtwpWriteUserEvent(
                    v12[50],
                    v37,
                    (unsigned __int16)v14,
                    0,
                    v56,
                    (__int64)Fields,
                    v64,
                    v51,
                    (__int64)CurrentThread,
                    (_DWORD)v54,
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
                    v12[50],
                    v50,
                    (unsigned __int16)v14,
                    0,
                    v56,
                    (__int64)Fields,
                    v64,
                    v51,
                    (__int64)CurrentThread,
                    (_DWORD)v54,
                    v57,
                    (__int64)&v81,
                    *((_QWORD *)Object + 50),
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v67);
        }
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      }
      return v10;
    case 0x200u:
      v61 = TraceHandle;
      v57 = 0LL;
      if ( FieldSize == 40 )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v54 = (char *)Fields;
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v54 + 40) > 0x7FFFFFFF0000LL || v54 + 40 < v54 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v55 = *((_DWORD *)v54 + 6);
          if ( (Flags & 0x80000000) != 0 )
          {
            LODWORD(v57) = *((_DWORD *)v54 + 8);
            v55 |= 0x80u;
          }
          else
          {
            v57 = *((_QWORD *)v54 + 4);
          }
          v20 = *((unsigned int *)v54 + 7);
          v56 = v20;
          if ( (unsigned int)v20 <= 0x10000 )
          {
            if ( (_DWORD)v20 && (v57 + v20 > 0x7FFFFFFF0000LL || v57 + v20 < v57) )
              MEMORY[0x7FFFFFFF0000] = 0;
            HIDWORD(v61) = v20;
            return EtwpTraceMessageVa((_DWORD)v61, v55 | 0x40u, (int)v54 + 8, *((unsigned __int16 *)v54 + 2), v57, 1);
          }
          v10 = -1073741811;
          v70 = -1073741811;
          return v10;
        }
        return -1073741637;
      }
      return -1073741811;
    case 0x600u:
      v52 = 0;
      v23 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
      v24 = v7;
      if ( v7 == 0xFFFF || !v7 )
        v24 = *(unsigned __int8 *)(v23 + 4208);
      if ( v24 >= *(_DWORD *)(v23 + 16) )
        return -1073741816;
      v25 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
      v26 = EtwpOpenLogger(v24, v23, v25, &v52);
      if ( !v26 )
        return -1073741816;
      if ( (*(_DWORD *)(v26 + 12) & 0x2000000) != 0 )
      {
        v44 = 32LL * *(unsigned __int8 *)(v26 + 834) + v23 + 4260;
        if ( v44 && (*(_DWORD *)(v44 + 4) & 0x28) != 0 )
          LOBYTE(v27) = 1;
        else
          v27 = 0;
        v10 = EtwpSetMark(v26, (int)Fields, v5, v27, v25);
      }
      else
      {
        v10 = -1073741811;
      }
      EtwpCloseLogger(v24, v23, v52);
      return v10;
  }
  if ( v8 <= 0x600 )
  {
    switch ( v8 )
    {
      case 0x100u:
        return EtwTraceEvent(
                 TraceHandle,
                 Fields,
                 48LL,
                 (((int)Flags >> 31) & 0xFFF60000) - 1072431104,
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
            return -1073741675;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v41 = (char *)Fields + v5 + 32;
            if ( (unsigned __int64)v41 > 0x7FFFFFFF0000LL || v41 < Fields )
              MEMORY[0x7FFFFFFF0000] = 0;
            v73 = (char *)Fields + 32;
            v60 = *((_WORD *)Fields + 3);
            v77 = (char *)Fields + 32;
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
              Flags & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x500u:
        CycleTime = KeGetCurrentThread()[1].CycleTime;
        v22 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        if ( *(_DWORD *)(v22 + 4072) == (_DWORD)CycleTime )
        {
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
            MEMORY[0x7FFFFFFF0000] = 0;
          return EtwpWriteUserEvent(
                   (int)v22 + 24,
                   *(unsigned __int8 *)(v22 + 4064),
                   0,
                   0,
                   *((_DWORD *)Fields + 28),
                   (__int64)Fields,
                   0LL,
                   *((_BYTE *)Fields + 44),
                   *((_QWORD *)Fields + 6),
                   *((_DWORD *)Fields + 21),
                   *((_QWORD *)Fields + 11),
                   0LL,
                   0LL,
                   0,
                   0LL,
                   0LL);
        }
        return -1073741790;
    }
    return -1073741811;
  }
  if ( v8 != 1792 )
  {
    if ( v8 == 2048 )
      return EtwTraceEvent(
               TraceHandle,
               Fields,
               72LL,
               (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
               KeGetCurrentThread()->PreviousMode);
    if ( v8 == 2304 )
    {
      if ( Flags == 2304 && FieldSize && Fields )
        return EtwTraceRaw(
                 TraceHandle,
                 Fields,
                 FieldSize,
                 (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10]);
      return -1073741811;
    }
    return -1073741811;
  }
  v80 = 0LL;
  if ( !TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)Fields & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)TraceHandle + 16 > 0x7FFFFFFF0000LL || (char *)TraceHandle + 16 < TraceHandle )
    MEMORY[0x7FFFFFFF0000] = 0;
  v68 = *((_QWORD *)Fields + 11);
  v62 = *((_DWORD *)Fields + 21);
  v63 = *((_DWORD *)Fields + 28);
  v69 = *((_QWORD *)Fields + 6);
  v53 = *((_BYTE *)Fields + 44);
  v80 = *(_OWORD *)TraceHandle;
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
        v36 = Flags >> 31;
        v10 = EtwpWriteUserEvent(
                v30,
                v51,
                (unsigned __int16)v36,
                0,
                v63,
                (__int64)Fields,
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
                  (__int64)Fields,
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
      return v10;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return -1073741054;
}
