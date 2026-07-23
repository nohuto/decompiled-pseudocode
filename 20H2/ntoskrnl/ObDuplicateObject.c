/*
 * XREFs of ObDuplicateObject @ 0x140677E70
 * Callers:
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     NtDuplicateObject @ 0x1405FACE0 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x140690BC8 (PspPropagateHandle.c)
 *     PspCopyAndFixupParameters @ 0x1406ADE04 (PspCopyAndFixupParameters.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140726970 (IoConvertFileHandleToKernelHandle.c)
 *     CmpCreateEmptyHiveClone @ 0x140875598 (CmpCreateEmptyHiveClone.c)
 *     DbgkpOpenHandles @ 0x140887694 (DbgkpOpenHandles.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     ObpFilterOperation @ 0x140245E6C (ObpFilterOperation.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1405E08CC (ObpGrantAccess.c)
 *     SeCreateAccessState @ 0x1405FDD40 (SeCreateAccessState.c)
 *     RtlMapGenericMask @ 0x1406002F0 (RtlMapGenericMask.c)
 *     SeDeleteAccessState @ 0x140601D90 (SeDeleteAccessState.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     ExCreateHandleEx @ 0x140657360 (ExCreateHandleEx.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406A5D30 (ObpReferenceProcessObjectByHandle.c)
 *     ObDereferenceProcessHandleTable @ 0x1406C1760 (ObDereferenceProcessHandleTable.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406C5114 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1406D3078 (SeAuditHandleCreation.c)
 *     ObpIncrementHandleCount @ 0x1408DF8CC (ObpIncrementHandleCount.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408E067C (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14092030C (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x14093832C (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        struct _KPROCESS *a1,
        void *a2,
        PEPROCESS a3,
        __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v10; // edi
  char v11; // r15
  ACCESS_MASK v12; // r13d
  int v13; // r14d
  PRKPROCESS v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rax
  int v19; // r15d
  char v20; // r14
  int v21; // edi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  __int64 ClientToken; // r13
  struct _ACCESS_STATE *v27; // rdi
  int v28; // ebx
  int v29; // r15d
  bool v30; // zf
  PRKPROCESS v31; // r14
  __int64 v32; // r14
  PRKPROCESS v33; // rbx
  int v34; // edi
  __int64 v36; // rbx
  PRKPROCESS v37; // r14
  unsigned int v38; // ebx
  PRKPROCESS v39; // r14
  char v40; // al
  __int64 v41; // [rsp+20h] [rbp-E0h]
  bool v42; // [rsp+40h] [rbp-C0h]
  char v43; // [rsp+41h] [rbp-BFh]
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h]
  _QWORD v54[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  struct _ACCESS_STATE v57; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v58[224]; // [rsp+180h] [rbp+80h] BYREF

  Handle = a2;
  PROCESS = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v58, 0, sizeof(v58));
  v52 = 0LL;
  memset(&v57, 0, sizeof(v57));
  v50 = 0LL;
  Object = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
    a3 = PsInitialSystemProcess;
  v10 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v11 = a7;
  v12 = AccessMask;
  v13 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v14 = PROCESS;
  v15 = PROCESS->SecureState.SecureHandle & 1;
  if ( a3 )
  {
    if ( (PROCESS->SecureState.SecureHandle & 1) != 0 )
      LOBYTE(v15) = 1;
    if ( !(_BYTE)v15 && (a3->SecureState.SecureHandle & 1) == 0 )
      goto LABEL_10;
    if ( PROCESS == KeGetCurrentThread()->ApcState.Process && a3 == KeGetCurrentThread()->ApcState.Process )
    {
      v12 = AccessMask;
      goto LABEL_10;
    }
    return 3221225506LL;
  }
  if ( (PROCESS->SecureState.SecureHandle & 1) != 0 )
    LOBYTE(v15) = 1;
  if ( (_BYTE)v15 )
    return 3221225506LL;
LABEL_10:
  v16 = ObReferenceProcessHandleTable(PROCESS);
  if ( !v16 )
    return 3221225738LL;
  v46 = ObpReferenceProcessObjectByHandle(
          (_DWORD)Handle,
          (_DWORD)PROCESS,
          v16,
          a8,
          1850237519,
          (__int64)&Object,
          (__int64)&v52,
          (__int64)&v50);
  if ( v46 < 0 )
  {
    ObDereferenceProcessHandleTable(v14);
    return (unsigned int)v46;
  }
  else
  {
    v17 = v52;
    if ( (v52 & 4) == 0 )
      LODWORD(v50) = 0;
    if ( a3 )
    {
      v18 = ObReferenceProcessHandleTable(a3);
      v55 = v18;
      if ( v18 )
      {
        v42 = v18 == ObpKernelHandleTable;
        v19 = HIDWORD(v52);
        if ( v13 )
        {
          v12 = HIDWORD(v52);
          AccessMask = HIDWORD(v52);
        }
        v20 = a7;
        if ( (a7 & 4) != 0 )
          v21 = v17;
        else
          v21 = v17 & 0xC | v10;
        v22 = v21 | 8;
        if ( (a7 & 8) == 0 )
          v22 = v21;
        v48 = v22;
        v23 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v51 = (__int64)Object - 48;
        v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v23];
        v53 = v24;
        if ( (v12 & 0xF0000000) != 0 )
        {
          RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v24 + 76));
          v12 = AccessMask;
        }
        v25 = v12 & (*(_DWORD *)(v24 + 92) | 0x1000000);
        ClientToken = 0LL;
        v44 = v25;
        v27 = 0LL;
        v43 = 0;
        if ( (~v19 & v25) != 0 )
        {
          if ( (v17 & 8) != 0
            || (v36 = v53,
                *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, __int64, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v53 + 152) != SeDefaultObjectMethod) )
          {
            v28 = v48;
            v29 = -1073741790;
            goto LABEL_29;
          }
          if ( KeGetCurrentThread()->ApcState.Process != a3 )
          {
            KeStackAttachProcess(a3, &ApcState);
            v43 = 1;
          }
          SeCreateAccessState((int)&v57, (int)v58, v44, v36 + 76);
          v28 = v48;
          v27 = &v57;
          LODWORD(v41) = v48;
          v29 = ObpGrantAccess(2, Object, &v57, a8, v41, (ACCESS_MASK *)&v44);
          if ( v29 < 0 )
          {
LABEL_27:
            if ( v43 )
              KeUnstackDetachProcess(&ApcState);
LABEL_29:
            v30 = (v20 & 1) == 0;
            v31 = PROCESS;
            if ( !v30 )
            {
              KeStackAttachProcess(PROCESS, &ApcState);
              NtClose(Handle);
              KeUnstackDetachProcess(&ApcState);
            }
            if ( v29 < 0 )
            {
              if ( v27 )
LABEL_65:
                SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v27);
            }
            else
            {
              if ( v27 )
              {
                v28 = v48;
                if ( v27->GenerateOnClose )
                {
                  v28 = v48 | 4;
                  LODWORD(v50) = *((_DWORD *)v27->AuxData + 7);
                }
              }
              v54[1] = v54;
              v54[0] = v54;
              if ( !ObpFilterOperation(v53) )
              {
LABEL_34:
                v32 = ExCreateHandleEx(v55, v51, v44, v28, &v50);
                if ( v32 )
                {
                  if ( v27 )
                    SeAuditHandleCreation((__int64)v27);
                  if ( (v28 & 4) != 0 )
                  {
                    if ( v27 )
                    {
                      ClientToken = (__int64)v27->SubjectSecurityContext.ClientToken;
                      if ( !ClientToken )
                        ClientToken = (__int64)v27->SubjectSecurityContext.PrimaryToken;
                    }
                    v40 = SeAuditingWithTokenForSubcategory(123, ClientToken);
                    v33 = PROCESS;
                    if ( v40 )
                      SeAuditHandleDuplication(Handle, v32, PROCESS, a3);
                    goto LABEL_39;
                  }
                }
                else
                {
                  ObpDecrementHandleCount(a3, v51);
                  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
                  v29 = -1073741670;
                }
                v33 = PROCESS;
LABEL_39:
                if ( v42 )
                  v32 |= 0xFFFFFFFF80000000uLL;
                if ( a4 )
                  *a4 = v32;
                if ( v27 )
                  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v27);
                ObDereferenceProcessHandleTable(v33);
                ObDereferenceProcessHandleTable(a3);
                v34 = (int)Object;
                if ( (_QWORD *)v54[0] != v54 )
                  ObpPostInterceptHandleDuplicate((_DWORD)Object, v42, v29, v44, (__int64)v54);
                if ( (xmmword_140CFC490 & 0x40) != 0 && v29 >= 0 )
                  EtwTraceDuplicateHandle(
                    (_DWORD)Handle,
                    v32,
                    v34,
                    v33[1].Header.WaitListHead.Flink,
                    a3[1].Header.WaitListHead.Flink,
                    v53);
                return (unsigned int)v29;
              }
              v46 = v44;
              v29 = ObpPreInterceptHandleDuplicate(
                      (_DWORD)Object,
                      v42,
                      (unsigned int)&v46,
                      (_DWORD)v31,
                      (__int64)a3,
                      (__int64)v54);
              if ( v29 >= 0 )
              {
                if ( !v42 )
                  v44 = v46;
                goto LABEL_34;
              }
              ObpDecrementHandleCount(a3, v51);
              if ( v27 )
                goto LABEL_65;
            }
            ObDereferenceProcessHandleTable(v31);
            ObDereferenceProcessHandleTable(a3);
            ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
            return (unsigned int)v29;
          }
        }
        else
        {
          v28 = v48;
        }
        v29 = ObpIncrementHandleCount(2, (unsigned int)&v44, (_DWORD)a3, (_DWORD)Object, a8, v28);
        goto LABEL_27;
      }
      v39 = PROCESS;
      if ( (v11 & 1) != 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        NtClose(Handle);
        KeUnstackDetachProcess(&ApcState);
      }
      ObDereferenceProcessHandleTable(v39);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return 3221225738LL;
    }
    v37 = PROCESS;
    if ( (v11 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KeUnstackDetachProcess(&ApcState);
      v38 = v46;
    }
    else
    {
      v38 = -1073741811;
    }
    ObDereferenceProcessHandleTable(v37);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v38;
  }
}
