/*
 * XREFs of PiDqIrpQueryCreate @ 0x14062413C
 * Callers:
 *     PiDqDispatch @ 0x140623C70 (PiDqDispatch.c)
 * Callees:
 *     IoClearActivityIdThread @ 0x140252490 (IoClearActivityIdThread.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IoSetActivityIdThread @ 0x1402F9230 (IoSetActivityIdThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x14050DEDC (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140623804 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryValidateQueryData @ 0x140623F70 (PiDqQueryValidateQueryData.c)
 *     PiDqIrpComplete @ 0x1406240D0 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062466C (PiDqQuerySerializeActionQueue.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x1408A1E00 (PnpConvertDevpropcompkeyArrayToString.c)
 *     PiDqConvertObjectTypeToString @ 0x1408A47A0 (PiDqConvertObjectTypeToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x1408A4868 (PiDqConvertQueryFlagsToString.c)
 *     FilterConvertToString @ 0x14097FDF0 (FilterConvertToString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(IRP *a1)
{
  IRP *v1; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // rsi
  char v4; // r14
  struct _LIST_ENTRY *v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  int v8; // eax
  int ValidateQueryData; // edi
  void **v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int Length; // r8d
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v20; // r13
  void *v21; // r12
  unsigned int *v22; // r14
  int v23; // edx
  unsigned int v24; // r8d
  const wchar_t *v25; // rax
  PVOID v26; // rax
  int v27; // eax
  PVOID v28; // rax
  unsigned int v29; // eax
  PVOID v30; // rax
  unsigned int v31; // ecx
  _WORD *v32; // rdx
  PVOID v33; // rax
  int v34; // eax
  PVOID v35; // rax
  PVOID v36; // rax
  int v37; // eax
  int CurrentThreadProcessId; // eax
  __int64 v39; // rdx
  unsigned int v40; // eax
  PVOID PoolWithTag; // rax
  unsigned int v42; // ecx
  PVOID v43; // r8
  _WORD *v44; // rdx
  __int64 v45; // [rsp+20h] [rbp-118h]
  char v46; // [rsp+61h] [rbp-D7h]
  PVOID P; // [rsp+68h] [rbp-D0h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-C4h] BYREF
  SIZE_T v50; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v51; // [rsp+80h] [rbp-B8h]
  unsigned int v52; // [rsp+88h] [rbp-B0h] BYREF
  const wchar_t *v53; // [rsp+90h] [rbp-A8h]
  PVOID v54; // [rsp+98h] [rbp-A0h]
  PVOID v55; // [rsp+A0h] [rbp-98h]
  unsigned int v56; // [rsp+A8h] [rbp-90h] BYREF
  PVOID v57; // [rsp+B0h] [rbp-88h]
  PVOID FsContext2; // [rsp+B8h] [rbp-80h]
  struct _LIST_ENTRY *v59; // [rsp+C0h] [rbp-78h]
  IRP *v60; // [rsp+C8h] [rbp-70h]
  struct _IO_STACK_LOCATION *v61; // [rsp+D0h] [rbp-68h]
  __int64 v62; // [rsp+D8h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-58h]
  __int128 v64; // [rsp+E8h] [rbp-50h] BYREF
  struct _LIST_ENTRY v65; // [rsp+F8h] [rbp-40h] BYREF

  v1 = a1;
  v60 = a1;
  v53 = (const wchar_t *)a1;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v61 = CurrentStackLocation;
  v55 = CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v3 = (__int64)FsContext2;
  v4 = 0;
  v5 = 0LL;
  v59 = 0LL;
  v65 = 0LL;
  v46 = 0;
  v52 = 0;
  v56 = 0;
  v64 = 0LL;
  if ( !FsContext2 )
  {
    ValidateQueryData = -1073741637;
    goto LABEL_17;
  }
  if ( !a1->AssociatedIrp.MasterIrp )
  {
    ValidateQueryData = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v3 + 64;
  ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
  v7 = *(_DWORD *)(v3 + 216);
  if ( (v7 & 8) != 0 )
  {
    ValidateQueryData = -1073741536;
  }
  else if ( (v7 & 0x10) != 0 || (v8 = v7 | 0x10, *(_DWORD *)(v3 + 216) = v8, v4 = 1, (v8 & 4) != 0) )
  {
    ValidateQueryData = -1073741637;
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length >= 0x10 )
    {
      ValidateQueryData = MesDecodeBufferHandleCreate(
                            v1->AssociatedIrp.MasterIrp,
                            CurrentStackLocation->Parameters.Create.Options,
                            v3 + 16);
      if ( ValidateQueryData < 0 )
        goto LABEL_14;
      v10 = (void **)(v3 + 24);
      NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_140003BB0, &off_140C01A50, 0, v3 + 24);
      ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
      if ( ValidateQueryData < 0 )
        goto LABEL_13;
      if ( !(unsigned __int8)PnpIsNullGuid(*v10) )
      {
        v65 = *(struct _LIST_ENTRY *)*v10;
        v5 = IoSetActivityIdThread(&v65);
        v59 = v5;
        v46 = 1;
      }
      if ( (byte_140C1327A & 0x40) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 216) |= 4u;
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      v20 = 0LL;
      v51 = 0LL;
      FsContext2 = 0LL;
      v62 = 0LL;
      v55 = 0LL;
      v21 = 0LL;
      v57 = 0LL;
      v54 = 0LL;
      v22 = (unsigned int *)*v10;
      if ( (int)PiDqConvertObjectTypeToString(v22[4], &v62) < 0 )
      {
LABEL_86:
        if ( v54 )
          ExFreePoolWithTag(v54, 0x58706E50u);
        if ( v21 )
          ExFreePoolWithTag(v21, 0x58706E50u);
        if ( v55 )
          ExFreePoolWithTag(v55, 0x58706E50u);
        if ( v57 )
          ExFreePoolWithTag(v57, 0x58706E50u);
        if ( v20 )
          ExFreePoolWithTag(v20, 0x58706E50u);
        v5 = v59;
        goto LABEL_12;
      }
      v23 = 0;
      v53 = 0LL;
      v24 = v22[5];
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          v25 = L"Instance";
        }
        else
        {
          if ( v24 != 2 )
          {
            v23 = -1073741811;
            goto LABEL_40;
          }
          v25 = L"Instances";
        }
      }
      else
      {
        v25 = L"Type";
      }
      v53 = v25;
LABEL_40:
      if ( v23 < 0 )
        goto LABEL_86;
      if ( v24 == 1 )
      {
        FsContext2 = (PVOID)*((_QWORD *)v22 + 3);
      }
      else if ( v24 == 2 )
      {
        v40 = v22[6];
        if ( v40 <= 2 )
          goto LABEL_86;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v40, 0x58706E50u);
        v54 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_86;
        memmove(PoolWithTag, *((const void **)v22 + 4), 2LL * v22[6]);
        v42 = v22[6] - 2;
        v43 = v54;
        if ( v22[6] != 2 )
        {
          v44 = (char *)v54 + 2 * v42;
          do
          {
            if ( !*v44 )
              *v44 = 32;
            --v44;
            --v42;
          }
          while ( v42 );
        }
        FsContext2 = v43;
      }
      NumberOfBytes = 512;
      v26 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      P = v26;
      if ( !v26 )
      {
        v21 = 0LL;
        goto LABEL_86;
      }
      v27 = PiDqConvertQueryFlagsToString(v22[10], v26, 512LL, &NumberOfBytes);
      if ( v27 == -1073741789 )
      {
        ExFreePoolWithTag(P, 0x58706E50u);
        v28 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x58706E50u);
        P = v28;
        if ( !v28 )
        {
          v21 = 0LL;
          v20 = 0LL;
          goto LABEL_86;
        }
        v27 = PiDqConvertQueryFlagsToString(v22[10], v28, NumberOfBytes, &NumberOfBytes);
      }
      if ( v27 < 0 )
        goto LABEL_84;
      if ( (v22[10] & 4) != 0 )
      {
        v29 = v22[12];
        if ( v29 <= 2 )
          goto LABEL_84;
        v30 = ExAllocatePoolWithTag(PagedPool, 2LL * v29, 0x58706E50u);
        v55 = v30;
        if ( !v30 )
          goto LABEL_84;
        memmove(v30, *((const void **)v22 + 7), 2LL * v22[12]);
        v31 = v22[12] - 2;
        if ( v22[12] != 2 )
        {
          v32 = (char *)v55 + 2 * v31;
          do
          {
            if ( !*v32 )
              *v32 = 32;
            --v32;
            --v31;
          }
          while ( v31 );
        }
      }
      if ( !v22[16] )
        goto LABEL_62;
      NumberOfBytes_4 = 512;
      v33 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      v57 = v33;
      if ( v33 )
      {
        v34 = PnpConvertDevpropcompkeyArrayToString(
                *((_QWORD *)v22 + 9),
                v22[16],
                (_DWORD)v33,
                512,
                (__int64)&NumberOfBytes_4);
        if ( v34 == -1073741789 )
        {
          ExFreePoolWithTag(v57, 0x58706E50u);
          v35 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x58706E50u);
          v57 = v35;
          if ( !v35 )
            goto LABEL_84;
          v34 = PnpConvertDevpropcompkeyArrayToString(
                  *((_QWORD *)v22 + 9),
                  v22[16],
                  (_DWORD)v35,
                  NumberOfBytes_4,
                  (__int64)&NumberOfBytes_4);
        }
        if ( v34 >= 0 )
        {
LABEL_62:
          if ( !v22[20] )
            goto LABEL_68;
          LODWORD(v50) = 512;
          v36 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
          v51 = v36;
          if ( v36 )
          {
            v37 = FilterConvertToString(v22[20], *((_QWORD *)v22 + 11), 512, (_DWORD)v36, (__int64)&v50);
            if ( v37 != -1073741789 )
              goto LABEL_67;
            ExFreePoolWithTag(v51, 0x58706E50u);
            v36 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v50, 0x58706E50u);
            v51 = v36;
            if ( v36 )
            {
              v37 = FilterConvertToString(v22[20], *((_QWORD *)v22 + 11), v50, (_DWORD)v36, (__int64)&v50);
LABEL_67:
              if ( v37 < 0 )
              {
LABEL_83:
                v20 = v51;
                goto LABEL_85;
              }
LABEL_68:
              if ( (byte_140C1327A & 0x40) != 0 )
              {
                CurrentThreadProcessId = PsGetCurrentThreadProcessId();
                v20 = v51;
                v21 = P;
                LODWORD(v45) = CurrentThreadProcessId;
                McTemplateK0pqzzzzzzz_EtwWriteTransfer(
                  v62,
                  v39,
                  (const GUID *)v22,
                  v3,
                  v45,
                  v62,
                  v53,
                  FsContext2,
                  P,
                  v55,
                  v57,
                  v51);
                goto LABEL_86;
              }
              goto LABEL_83;
            }
          }
          v20 = v36;
LABEL_85:
          v21 = P;
          goto LABEL_86;
        }
      }
LABEL_84:
      v20 = 0LL;
      goto LABEL_85;
    }
    ValidateQueryData = -1073741789;
  }
LABEL_14:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  CurrentStackLocation = v61;
  v1 = v60;
  if ( ValidateQueryData >= 0 )
  {
    Length = v61->Parameters.Read.Length;
    if ( Length <= 0x10 )
      v52 = 16;
    else
      ValidateQueryData = PiDqQuerySerializeActionQueue(
                            v3,
                            v60->AssociatedIrp.MasterIrp,
                            Length,
                            (unsigned int)&v52,
                            (__int64)&v56);
  }
LABEL_17:
  if ( v4 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( ValidateQueryData < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, CurrentStackLocation->Parameters.Read.Length, v56, &v64);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    ExReleasePushLockEx(v3 + 64, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  PiDqIrpComplete(v1, ValidateQueryData, v52, &v64);
  if ( v46 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
