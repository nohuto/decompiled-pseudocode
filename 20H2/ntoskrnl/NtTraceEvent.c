/*
 * XREFs of NtTraceEvent @ 0x140244D40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpTraceMessageVa @ 0x140245640 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140245C78 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x140379D38 (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A9378 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x1405A4670 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A4B18 (EtwTraceRaw.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F4A40 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 *     EtwpUpdateEnableMask @ 0x140669514 (EtwpUpdateEnableMask.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     EtwpSetMark @ 0x140939C0C (EtwpSetMark.c)
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
  _QWORD *v28; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rax
  int v32; // r9d
  ULONG v33; // edi
  int v34; // edx
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r14d
  char *v38; // rax
  unsigned int v39; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v41; // rdx
  struct _KTHREAD *v42; // rax
  int v43; // r9d
  int v44; // edx
  unsigned __int8 v45; // [rsp+80h] [rbp-138h] BYREF
  unsigned __int8 v46; // [rsp+81h] [rbp-137h] BYREF
  char v47; // [rsp+82h] [rbp-136h]
  char *v48; // [rsp+88h] [rbp-130h]
  int v49; // [rsp+90h] [rbp-128h]
  int v50; // [rsp+94h] [rbp-124h]
  unsigned __int64 v51; // [rsp+98h] [rbp-120h]
  unsigned __int8 v53; // [rsp+A2h] [rbp-116h]
  __int16 v54; // [rsp+A4h] [rbp-114h]
  _QWORD *v55; // [rsp+A8h] [rbp-110h]
  int v56; // [rsp+B0h] [rbp-108h]
  int v57; // [rsp+B4h] [rbp-104h]
  __int64 v58; // [rsp+B8h] [rbp-100h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-F8h]
  PVOID Object; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-E0h]
  __int64 v63; // [rsp+E0h] [rbp-D8h]
  int v64; // [rsp+F0h] [rbp-C8h]
  int v65; // [rsp+F4h] [rbp-C4h]
  int v66; // [rsp+F8h] [rbp-C0h]
  char *v67; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+118h] [rbp-A0h]
  __int64 v69; // [rsp+120h] [rbp-98h]
  struct _KTHREAD *v70; // [rsp+128h] [rbp-90h]
  char *v71; // [rsp+130h] [rbp-88h] BYREF
  int v72; // [rsp+138h] [rbp-80h]
  int v73; // [rsp+13Ch] [rbp-7Ch]
  __int128 v74; // [rsp+140h] [rbp-78h] BYREF
  __int128 v75; // [rsp+150h] [rbp-68h] BYREF
  __int128 v76; // [rsp+160h] [rbp-58h]

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
      v51 = *((_QWORD *)Fields + 11);
      v68 = v51;
      LODWORD(v48) = *((_DWORD *)Fields + 21);
      v66 = (int)v48;
      v9 = *((unsigned __int16 *)Fields + 41);
      v69 = *((unsigned __int16 *)Fields + 41);
      v50 = *((_DWORD *)Fields + 28);
      v65 = v50;
      CurrentThread = (struct _KTHREAD *)*((_QWORD *)Fields + 6);
      v70 = CurrentThread;
      v45 = *((_BYTE *)Fields + 44);
      v53 = v45;
      v58 = 0LL;
      if ( *((_BYTE *)Fields + 80) )
        v58 = (__int64)Fields + 96;
      Object = 0LL;
      v10 = ObReferenceObjectByHandle(TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
      if ( v10 >= 0 )
      {
        v61 = 0LL;
        v11 = (unsigned __int8 *)Object;
        v12 = (_QWORD *)*((_QWORD *)Object + 4);
        v55 = v12;
        v13 = (PVOID)*((_QWORD *)Object + 5);
        Object = v13;
        v14 = Flags >> 31;
        v75 = 0LL;
        v76 = 0LL;
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
                  v50,
                  (__int64)Fields,
                  v58,
                  v45,
                  (__int64)CurrentThread,
                  (_DWORD)v48,
                  v51,
                  (__int64)&v75,
                  0LL,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v61);
          v12 = v55;
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
                  v50,
                  (__int64)Fields,
                  v58,
                  v45,
                  (__int64)CurrentThread,
                  (_DWORD)v48,
                  v51,
                  (__int64)&v75,
                  (__int64)v13,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v61);
          v12 = v55;
        }
        if ( v12[50] )
        {
          v75 = 0LL;
          v76 = 0LL;
          v34 = v11[102];
          if ( (_BYTE)v34 )
          {
            v10 = EtwpWriteUserEvent(
                    v12[50],
                    v34,
                    (unsigned __int16)v14,
                    0,
                    v50,
                    (__int64)Fields,
                    v58,
                    v45,
                    (__int64)CurrentThread,
                    (_DWORD)v48,
                    v51,
                    (__int64)&v75,
                    0LL,
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v61);
            v12 = v55;
          }
          v44 = v11[103];
          if ( (_BYTE)v44 )
            v10 = EtwpWriteUserEvent(
                    v12[50],
                    v44,
                    (unsigned __int16)v14,
                    0,
                    v50,
                    (__int64)Fields,
                    v58,
                    v45,
                    (__int64)CurrentThread,
                    (_DWORD)v48,
                    v51,
                    (__int64)&v75,
                    *((_QWORD *)Object + 50),
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v61);
        }
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      }
      return v10;
    case 0x200u:
      v55 = TraceHandle;
      v51 = 0LL;
      if ( FieldSize == 40 )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v48 = (char *)Fields;
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v48 + 40) > 0x7FFFFFFF0000LL || v48 + 40 < v48 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v49 = *((_DWORD *)v48 + 6);
          if ( (Flags & 0x80000000) != 0 )
          {
            LODWORD(v51) = *((_DWORD *)v48 + 8);
            v49 |= 0x80u;
          }
          else
          {
            v51 = *((_QWORD *)v48 + 4);
          }
          v20 = *((unsigned int *)v48 + 7);
          v50 = v20;
          if ( (unsigned int)v20 <= 0x10000 )
          {
            if ( (_DWORD)v20 && (v51 + v20 > 0x7FFFFFFF0000LL || v51 + v20 < v51) )
              MEMORY[0x7FFFFFFF0000] = 0;
            HIDWORD(v55) = v20;
            return EtwpTraceMessageVa((_DWORD)v55, v49 | 0x40u, (int)v48 + 8, *((unsigned __int16 *)v48 + 2), v51, 1);
          }
          v10 = -1073741811;
          v64 = -1073741811;
          return v10;
        }
        return -1073741637;
      }
      return -1073741811;
    case 0x600u:
      v46 = 0;
      v23 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
      v24 = v7;
      if ( v7 == 0xFFFF || !v7 )
        v24 = *(unsigned __int8 *)(v23 + 4208);
      if ( v24 >= *(_DWORD *)(v23 + 16) )
        return -1073741816;
      v25 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
      v26 = EtwpOpenLogger(v24, v23, v25, &v46);
      if ( !v26 )
        return -1073741816;
      if ( (*(_DWORD *)(v26 + 12) & 0x2000000) != 0 )
      {
        v41 = 32LL * *(unsigned __int8 *)(v26 + 834) + v23 + 4260;
        if ( v41 && (*(_DWORD *)(v41 + 4) & 0x28) != 0 )
          LOBYTE(v27) = 1;
        else
          v27 = 0;
        v10 = EtwpSetMark(v26, (int)Fields, v5, v27, v25);
      }
      else
      {
        v10 = -1073741811;
      }
      EtwpCloseLogger(v24, v23, v46);
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
        v35 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
        v36 = v7;
        v37 = 0;
        if ( (_WORD)v36 != 0xFFFF )
          v37 = v36;
        if ( v37 < *(_DWORD *)(v35 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return -1073741675;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v38 = (char *)Fields + v5 + 32;
            if ( (unsigned __int64)v38 > 0x7FFFFFFF0000LL || v38 < Fields )
              MEMORY[0x7FFFFFFF0000] = 0;
            v67 = (char *)Fields + 32;
            v54 = *((_WORD *)Fields + 3);
            v71 = (char *)Fields + 32;
            v72 = v5;
            v73 = 0;
            v39 = (unsigned int)KeGetCurrentThread();
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            EtwpLogSystemEventUnsafe(
              CurrentServerSiloGlobals[108],
              (unsigned int)&v71,
              v39,
              v37,
              1,
              v54,
              Flags & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x500u:
        CycleTime = KeGetCurrentThread()[1].CycleTime;
        v22 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
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
  v74 = 0LL;
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
  v62 = *((_QWORD *)Fields + 11);
  v56 = *((_DWORD *)Fields + 21);
  v57 = *((_DWORD *)Fields + 28);
  v63 = *((_QWORD *)Fields + 6);
  v47 = *((_BYTE *)Fields + 44);
  v74 = *(_OWORD *)TraceHandle;
  v28 = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v28[108], &v74, 0LL);
  v30 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u, 0LL);
      if ( v10 >= 0 )
      {
        v45 = 0;
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v30 + 408, 0LL);
        *(_QWORD *)(v30 + 416) = KeGetCurrentThread();
        LOBYTE(v32) = 1;
        EtwpUpdateEnableMask(v30, 0, 0, v32, (__int64)&v45);
        *(_QWORD *)(v30 + 416) = 0LL;
        ExReleasePushLockEx(v30 + 408, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v33 = Flags >> 31;
        v10 = EtwpWriteUserEvent(
                v30,
                v45,
                (unsigned __int16)v33,
                0,
                v57,
                (__int64)Fields,
                0LL,
                v47,
                v63,
                v56,
                v62,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
        if ( *(_QWORD *)(v30 + 400) )
        {
          v45 = 0;
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v30 + 408, 0LL);
          *(_QWORD *)(v30 + 416) = KeGetCurrentThread();
          LOBYTE(v43) = 1;
          EtwpUpdateEnableMask(*(_QWORD *)(v30 + 400), 0, 1, v43, (__int64)&v45);
          *(_QWORD *)(v30 + 416) = 0LL;
          ExReleasePushLockEx(v30 + 408, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v10 = EtwpWriteUserEvent(
                  *(_QWORD *)(v30 + 400),
                  v45,
                  (unsigned __int16)v33,
                  0,
                  v57,
                  (__int64)Fields,
                  0LL,
                  v47,
                  v63,
                  v56,
                  v62,
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
