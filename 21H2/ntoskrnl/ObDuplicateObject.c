/*
 * XREFs of ObDuplicateObject @ 0x1406E4910
 * Callers:
 *     PspPropagateHandle @ 0x14069C7DC (PspPropagateHandle.c)
 *     PspCopyAndFixupParameters @ 0x1406A2264 (PspCopyAndFixupParameters.c)
 *     NtDuplicateObject @ 0x1406AC000 (NtDuplicateObject.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14072A970 (IoConvertFileHandleToKernelHandle.c)
 *     CmpCreateEmptyHiveClone @ 0x140872FA8 (CmpCreateEmptyHiveClone.c)
 *     DbgkpOpenHandles @ 0x140884D94 (DbgkpOpenHandles.c)
 * Callees:
 *     ObpFilterOperation @ 0x14021474C (ObpFilterOperation.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E27D0 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x1405E38B0 (ExCreateHandleEx.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1405E3B38 (ObpPreInterceptHandleDuplicate.c)
 *     ObpGrantAccess @ 0x1405EA53C (ObpGrantAccess.c)
 *     ObDereferenceProcessHandleTable @ 0x1405FB710 (ObDereferenceProcessHandleTable.c)
 *     SeAuditHandleCreation @ 0x14060FF18 (SeAuditHandleCreation.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
 *     ObpIncrementHandleCount @ 0x1408DD1EC (ObpIncrementHandleCount.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408DDF9C (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14091DC2C (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x140935CCC (EtwTraceDuplicateHandle.c)
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
  struct _EX_RUNDOWN_REF *v14; // rbx
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
  struct _EX_RUNDOWN_REF *v31; // r14
  __int64 v32; // r14
  PRKPROCESS v33; // rbx
  int v34; // edi
  __int64 v36; // rbx
  void *v37; // r8
  char v38; // al
  struct _EX_RUNDOWN_REF *v39; // r14
  unsigned int v40; // ebx
  struct _EX_RUNDOWN_REF *v41; // r14
  void **v42; // rdx
  char v43; // al
  __int64 v44; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v45; // [rsp+40h] [rbp-C0h]
  char v46; // [rsp+41h] [rbp-BFh]
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-B0h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h]
  _QWORD v57[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  struct _ACCESS_STATE v60; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v61[224]; // [rsp+180h] [rbp+80h] BYREF

  Handle = a2;
  PROCESS = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v61, 0, sizeof(v61));
  v55 = 0LL;
  memset(&v60, 0, sizeof(v60));
  v53 = 0LL;
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
  v14 = (struct _EX_RUNDOWN_REF *)PROCESS;
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
  v49 = ObpReferenceProcessObjectByHandle(
          (unsigned __int64)Handle,
          (__int64)PROCESS,
          v16,
          a8,
          0x6E48624Fu,
          &Object,
          &v55,
          &v53);
  if ( (v49 & 0x80000000) != 0 )
  {
    ObDereferenceProcessHandleTable(v14);
    return v49;
  }
  else
  {
    v17 = v55;
    if ( (v55 & 4) == 0 )
      LODWORD(v53) = 0;
    if ( a3 )
    {
      v18 = ObReferenceProcessHandleTable(a3);
      v58 = v18;
      if ( v18 )
      {
        v45 = v18 == ObpKernelHandleTable;
        v19 = HIDWORD(v55);
        if ( v13 )
        {
          v12 = HIDWORD(v55);
          AccessMask = HIDWORD(v55);
        }
        v20 = a7;
        if ( (a7 & 4) != 0 )
          v21 = v17;
        else
          v21 = v17 & 0xC | v10;
        v22 = v21 | 8;
        if ( (a7 & 8) == 0 )
          v22 = v21;
        v51 = v22;
        v23 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v54 = (__int64)Object - 48;
        v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v23];
        v56 = v24;
        if ( (v12 & 0xF0000000) != 0 )
        {
          RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v24 + 76));
          v12 = AccessMask;
        }
        v25 = v12 & (*(_DWORD *)(v24 + 92) | 0x1000000);
        ClientToken = 0LL;
        v47 = v25;
        v27 = 0LL;
        v46 = 0;
        if ( (~v19 & v25) != 0 )
        {
          if ( (v17 & 8) != 0
            || (v36 = v56,
                *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, __int64, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v56 + 152) != SeDefaultObjectMethod) )
          {
            v28 = v51;
            v29 = -1073741790;
            goto LABEL_29;
          }
          if ( KeGetCurrentThread()->ApcState.Process != a3 )
          {
            KeStackAttachProcess(a3, &ApcState);
            v46 = 1;
          }
          SeCreateAccessState((int)&v60, (int)v61, v47, v36 + 76);
          v28 = v51;
          v27 = &v60;
          LODWORD(v44) = v51;
          v29 = ObpGrantAccess(2, Object, &v60, a8, v44, (ACCESS_MASK *)&v47);
          if ( v29 < 0 )
          {
LABEL_27:
            if ( v46 )
              KeUnstackDetachProcess(&ApcState);
LABEL_29:
            v30 = (v20 & 1) == 0;
            v31 = (struct _EX_RUNDOWN_REF *)PROCESS;
            if ( !v30 )
            {
              KeStackAttachProcess(PROCESS, &ApcState);
              NtClose(Handle);
              KeUnstackDetachProcess(&ApcState);
            }
            if ( v29 < 0 )
            {
              if ( v27 )
LABEL_66:
                SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v27);
            }
            else
            {
              if ( v27 )
              {
                v28 = v51;
                if ( v27->GenerateOnClose )
                {
                  v28 = v51 | 4;
                  LODWORD(v53) = *((_DWORD *)v27->AuxData + 7);
                }
              }
              v57[1] = v57;
              v57[0] = v57;
              if ( !ObpFilterOperation(v56) )
              {
LABEL_34:
                v32 = ExCreateHandleEx(v58, v54, v47, v28, &v53);
                if ( v32 )
                {
                  if ( v27 )
                  {
                    v37 = 0LL;
                    v38 = *(_BYTE *)(v54 + 26);
                    if ( (v38 & 0x20) != 0 )
                    {
                      v42 = (void **)(v54 - ObpInfoMaskToOffset[v38 & 0x3F]);
                      if ( v42 )
                        v37 = *v42;
                    }
                    SeAuditHandleCreation((__int64)v27, (void *)v32, v37);
                  }
                  if ( (v28 & 4) != 0 )
                  {
                    if ( v27 )
                    {
                      ClientToken = (__int64)v27->SubjectSecurityContext.ClientToken;
                      if ( !ClientToken )
                        ClientToken = (__int64)v27->SubjectSecurityContext.PrimaryToken;
                    }
                    v43 = SeAuditingWithTokenForSubcategory(124, ClientToken);
                    v33 = PROCESS;
                    if ( v43 )
                      SeAuditHandleDuplication(Handle, v32, PROCESS, a3);
                    goto LABEL_38;
                  }
                }
                else
                {
                  ObpDecrementHandleCount(a3, v54);
                  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
                  v29 = -1073741670;
                }
                v33 = PROCESS;
LABEL_38:
                if ( v45 )
                  v32 |= 0xFFFFFFFF80000000uLL;
                if ( a4 )
                  *a4 = v32;
                if ( v27 )
                  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v27);
                ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v33);
                ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a3);
                v34 = (int)Object;
                if ( (_QWORD *)v57[0] != v57 )
                  ObpPostInterceptHandleDuplicate((_DWORD)Object, v45, v29, v47, (__int64)v57);
                if ( (xmmword_140CFC490 & 0x40) != 0 && v29 >= 0 )
                  EtwTraceDuplicateHandle(
                    (_DWORD)Handle,
                    v32,
                    v34,
                    v33[1].Header.WaitListHead.Flink,
                    a3[1].Header.WaitListHead.Flink,
                    v56);
                return (unsigned int)v29;
              }
              v49 = v47;
              v29 = ObpPreInterceptHandleDuplicate(
                      (__int64)Object,
                      v45,
                      (int *)&v49,
                      (__int64)v31,
                      (__int64)a3,
                      (__int64)v57);
              if ( v29 >= 0 )
              {
                if ( !v45 )
                  v47 = v49;
                goto LABEL_34;
              }
              ObpDecrementHandleCount(a3, v54);
              if ( v27 )
                goto LABEL_66;
            }
            ObDereferenceProcessHandleTable(v31);
            ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a3);
            ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
            return (unsigned int)v29;
          }
        }
        else
        {
          v28 = v51;
        }
        v29 = ObpIncrementHandleCount(2, (unsigned int)&v47, (_DWORD)a3, (_DWORD)Object, a8, v28);
        goto LABEL_27;
      }
      v41 = (struct _EX_RUNDOWN_REF *)PROCESS;
      if ( (v11 & 1) != 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        NtClose(Handle);
        KeUnstackDetachProcess(&ApcState);
      }
      ObDereferenceProcessHandleTable(v41);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return 3221225738LL;
    }
    v39 = (struct _EX_RUNDOWN_REF *)PROCESS;
    if ( (v11 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KeUnstackDetachProcess(&ApcState);
      v40 = v49;
    }
    else
    {
      v40 = -1073741811;
    }
    ObDereferenceProcessHandleTable(v39);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v40;
  }
}
