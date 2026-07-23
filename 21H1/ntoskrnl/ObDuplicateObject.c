/*
 * XREFs of ObDuplicateObject @ 0x14061ECE0
 * Callers:
 *     NtDuplicateObject @ 0x14061D820 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x14066E65C (PspPropagateHandle.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     PspCopyAndFixupParameters @ 0x1406FA784 (PspCopyAndFixupParameters.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140716620 (IoConvertFileHandleToKernelHandle.c)
 *     CmpCreateEmptyHiveClone @ 0x14086DF88 (CmpCreateEmptyHiveClone.c)
 *     DbgkpOpenHandles @ 0x140880824 (DbgkpOpenHandles.c)
 * Callees:
 *     ObpFilterOperation @ 0x14025C59C (ObpFilterOperation.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlMapGenericMask @ 0x1405FFDA0 (RtlMapGenericMask.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     ExCreateHandleEx @ 0x14061D9E0 (ExCreateHandleEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14061DC70 (ObpReferenceProcessObjectByHandle.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1406BBB08 (ObpGrantAccess.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CC4E0 (ObDereferenceProcessHandleTable.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406D0AC4 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1406DD13C (SeAuditHandleCreation.c)
 *     ObpIncrementHandleCount @ 0x1408D871C (ObpIncrementHandleCount.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408D94CC (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1409193DC (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x14093124C (EtwTraceDuplicateHandle.c)
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
  PACCESS_TOKEN ClientToken; // r13
  struct _SECURITY_SUBJECT_CONTEXT *v27; // rdi
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
  bool v41; // [rsp+40h] [rbp-C0h]
  char v42; // [rsp+41h] [rbp-BFh]
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-A8h]
  int v47; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  _QWORD v53[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v56[160]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v57[224]; // [rsp+180h] [rbp+80h] BYREF

  Handle = a2;
  PROCESS = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v57, 0, sizeof(v57));
  v51 = 0LL;
  memset(v56, 0, sizeof(v56));
  v49 = 0LL;
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
  v45 = ObpReferenceProcessObjectByHandle(
          (unsigned __int64)Handle,
          (__int64)PROCESS,
          v16,
          a8,
          0x6E48624Fu,
          &Object,
          &v51,
          &v49);
  if ( v45 < 0 )
  {
    ObDereferenceProcessHandleTable(v14);
    return (unsigned int)v45;
  }
  else
  {
    v17 = v51;
    if ( (v51 & 4) == 0 )
      LODWORD(v49) = 0;
    if ( a3 )
    {
      v18 = ObReferenceProcessHandleTable(a3);
      v54 = v18;
      if ( v18 )
      {
        v41 = v18 == ObpKernelHandleTable;
        v19 = HIDWORD(v51);
        if ( v13 )
        {
          v12 = HIDWORD(v51);
          AccessMask = HIDWORD(v51);
        }
        v20 = a7;
        if ( (a7 & 4) != 0 )
          v21 = v17;
        else
          v21 = v17 & 0xC | v10;
        v22 = v21 | 8;
        if ( (a7 & 8) == 0 )
          v22 = v21;
        v47 = v22;
        v23 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v50 = (__int64)Object - 48;
        v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v23];
        v52 = v24;
        if ( (v12 & 0xF0000000) != 0 )
        {
          RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v24 + 76));
          v12 = AccessMask;
        }
        v25 = v12 & (*(_DWORD *)(v24 + 92) | 0x1000000);
        ClientToken = 0LL;
        v43 = v25;
        v27 = 0LL;
        v42 = 0;
        if ( (~v19 & v25) != 0 )
        {
          if ( (v17 & 8) != 0
            || (v36 = v52,
                *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, __int64, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v52 + 152) != SeDefaultObjectMethod) )
          {
            v28 = v47;
            v29 = -1073741790;
            goto LABEL_29;
          }
          if ( KeGetCurrentThread()->ApcState.Process != a3 )
          {
            KeStackAttachProcess(a3, &ApcState);
            v42 = 1;
          }
          SeCreateAccessState((int)v56, (int)v57, v43, v36 + 76);
          v28 = v47;
          v27 = (struct _SECURITY_SUBJECT_CONTEXT *)v56;
          v29 = ObpGrantAccess(2LL, Object, v56, a8, v47, &v43);
          if ( v29 < 0 )
          {
LABEL_27:
            if ( v42 )
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
                SeDeleteAccessState(v27);
            }
            else
            {
              if ( v27 )
              {
                v28 = v47;
                if ( BYTE2(v27->ImpersonationLevel) )
                {
                  v28 = v47 | 4;
                  LODWORD(v49) = *(_DWORD *)(*(_QWORD *)&v27[2].ImpersonationLevel + 28LL);
                }
              }
              v53[1] = v53;
              v53[0] = v53;
              if ( !ObpFilterOperation(v52) )
              {
LABEL_34:
                v32 = ExCreateHandleEx(v54, v50, v43, v28, &v49);
                if ( v32 )
                {
                  if ( v27 )
                    SeAuditHandleCreation((__int64)v27);
                  if ( (v28 & 4) != 0 )
                  {
                    if ( v27 )
                    {
                      ClientToken = v27[1].ClientToken;
                      if ( !ClientToken )
                        ClientToken = v27[1].PrimaryToken;
                    }
                    v40 = SeAuditingWithTokenForSubcategory(123LL, ClientToken);
                    v33 = PROCESS;
                    if ( v40 )
                      SeAuditHandleDuplication(Handle, v32, PROCESS, a3);
                    goto LABEL_39;
                  }
                }
                else
                {
                  ObpDecrementHandleCount((ULONG_PTR)a3);
                  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
                  v29 = -1073741670;
                }
                v33 = PROCESS;
LABEL_39:
                if ( v41 )
                  v32 |= 0xFFFFFFFF80000000uLL;
                if ( a4 )
                  *a4 = v32;
                if ( v27 )
                  SeDeleteAccessState(v27);
                ObDereferenceProcessHandleTable(v33);
                ObDereferenceProcessHandleTable(a3);
                v34 = (int)Object;
                if ( (_QWORD *)v53[0] != v53 )
                  ObpPostInterceptHandleDuplicate((_DWORD)Object, v41, v29, v43, (__int64)v53);
                if ( (xmmword_140CFC490 & 0x40) != 0 && v29 >= 0 )
                  EtwTraceDuplicateHandle(
                    (_DWORD)Handle,
                    v32,
                    v34,
                    v33[1].Header.WaitListHead.Flink,
                    a3[1].Header.WaitListHead.Flink,
                    v52);
                return (unsigned int)v29;
              }
              v45 = v43;
              v29 = ObpPreInterceptHandleDuplicate(
                      (_DWORD)Object,
                      v41,
                      (unsigned int)&v45,
                      (_DWORD)v31,
                      (__int64)a3,
                      (__int64)v53);
              if ( v29 >= 0 )
              {
                if ( !v41 )
                  v43 = v45;
                goto LABEL_34;
              }
              ObpDecrementHandleCount((ULONG_PTR)a3);
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
          v28 = v47;
        }
        v29 = ObpIncrementHandleCount(2, (unsigned int)&v43, (_DWORD)a3, (_DWORD)Object, a8, v28);
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
      v38 = v45;
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
