/*
 * XREFs of IopQueryNameInternal @ 0x14068A174
 * Callers:
 *     IopQueryName @ 0x14060CEE0 (IopQueryName.c)
 *     IoQueryFileDosDeviceName @ 0x14068A0D0 (IoQueryFileDosDeviceName.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IopExceptionFilterMode @ 0x140500A24 (IopExceptionFilterMode.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14068A7C0 (IoVolumeDeviceToDosName.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopQueryNameInternal(
        __int64 a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned int NumberOfBytes,
        _DWORD *a6,
        char a7)
{
  __int64 v7; // r8
  UNICODE_STRING *v8; // r12
  char v9; // r13
  ULONG v10; // r14d
  UNICODE_STRING *v11; // rsi
  _DWORD *v12; // rcx
  NTSTATUS NameStringMode; // ebx
  UNICODE_STRING *v14; // rdx
  UNICODE_STRING *v15; // r15
  char v16; // r8
  ULONG Length; // ecx
  __int64 v18; // r10
  char v19; // cl
  _DWORD *v20; // r13
  struct _IRP *v21; // rsi
  NTSTATUS FileInformation; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r14d
  char *v26; // r15
  UNICODE_STRING *PoolWithTagPriority; // rax
  unsigned int v29; // eax
  int v30; // ecx
  __int64 v31; // [rsp+40h] [rbp-68h] BYREF
  char *v32; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  _OWORD v34[5]; // [rsp+58h] [rbp-50h] BYREF
  bool v36; // [rsp+B8h] [rbp+10h]
  char v37; // [rsp+B8h] [rbp+10h]

  v7 = a1;
  LODWORD(v31) = 0;
  v8 = 0LL;
  P = 0LL;
  v36 = 0;
  v9 = 0;
  v34[0] = 0LL;
  v10 = 16;
  if ( NumberOfBytes >= 0x10 )
    v10 = NumberOfBytes;
  if ( a7 == 1 )
  {
    if ( (unsigned int)VfIsVerifierEnabled()
      && ((VfRuleClasses & 0xFFAFFFFF) != 0
       || (VfRuleClasses & 0x200000000LL) != 0
       || (VfRuleClasses & 0x400000000LL) != 0) )
    {
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                                PagedPool,
                                                v10,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    }
    else
    {
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v10, 0x20206F49u);
    }
    v8 = PoolWithTagPriority;
    P = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
    {
      NameStringMode = -1073741670;
      goto LABEL_44;
    }
    v11 = PoolWithTagPriority;
    v7 = a1;
  }
  else
  {
    v11 = (UNICODE_STRING *)v34;
    if ( NumberOfBytes >= 0x10 )
      v11 = a4;
  }
  v12 = *(_DWORD **)(v7 + 8);
  if ( !a3 )
    goto LABEL_47;
  if ( (v12[13] & 0x10) == 0 )
  {
    NameStringMode = IoVolumeDeviceToDosName(v12, v11);
    LODWORD(v31) = v11->Length + 18;
    v7 = a1;
    goto LABEL_9;
  }
  LODWORD(v31) = 20;
  if ( v10 >= 0x14 )
  {
    NameStringMode = 0;
    *(_DWORD *)&v11->Length = 131074;
    v11[1].Length = 92;
    v11->Buffer = &v11[1].Length;
LABEL_9:
    if ( NameStringMode >= 0 )
    {
      v9 = 1;
      goto LABEL_11;
    }
  }
  v12 = *(_DWORD **)(v7 + 8);
LABEL_47:
  NameStringMode = ObQueryNameStringMode((_DWORD)v12, (_DWORD)v11, v10, (unsigned int)&v31, 0);
LABEL_11:
  if ( NameStringMode < 0 )
  {
    if ( NameStringMode != -1073741820 )
      goto LABEL_44;
  }
  else if ( !v9 )
  {
    v36 = v11->Length == 0;
  }
  v14 = a4;
  v15 = a4 + 1;
  v16 = a3;
  if ( a3 && v9 )
  {
    if ( v10 < (unsigned int)v31 )
      Length = v10 - 16;
    else
      Length = v11->Length;
    memmove(&a4[1], v11->Buffer, Length);
    v18 = a1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) == 0 )
    {
      ExFreePoolWithTag(v11->Buffer, 0);
      v14 = a4;
      v16 = a3;
LABEL_20:
      v18 = a1;
      goto LABEL_21;
    }
    v14 = a4;
    v16 = a3;
  }
  else
  {
    if ( a7 != 1 || NumberOfBytes < 0x10 || (unsigned int)v31 > v10 )
      goto LABEL_20;
    a4->Length = v11->Length;
    a4->MaximumLength = v11->MaximumLength;
    memmove(v15, &v11[1], (unsigned int)v31 - 16LL);
    v14 = a4;
    v18 = a1;
    v16 = a3;
  }
LABEL_21:
  if ( v36 )
    LODWORD(v31) = v31 + 2;
  v19 = 0;
  v37 = 0;
  if ( NumberOfBytes < 0x10 || (unsigned int)v31 > v10 )
  {
    v20 = a6;
    *a6 = v31;
    v19 = 1;
    v37 = 1;
  }
  else
  {
    v14->Buffer = &v15->Length;
    v15 = (UNICODE_STRING *)((char *)v15 + v11->Length);
    v20 = a6;
  }
  if ( a7 == 1 )
  {
    v21 = (struct _IRP *)v8;
    if ( !v19 )
      v10 = v10 - v31 + 4;
  }
  else if ( v19 )
  {
    v21 = (struct _IRP *)v34;
    if ( NumberOfBytes >= 0x10 )
      v21 = (struct _IRP *)v14;
  }
  else
  {
    v21 = (struct _IRP *)((char *)&v15[-1].Buffer + 4);
    LODWORD(v32) = HIDWORD(v15[-1].Buffer);
    v10 = (_DWORD)v14 + v10 - ((_DWORD)v15 - 4) - 2;
  }
  if ( (a7 != 1 || v16) && (*(_DWORD *)(v18 + 80) & 2) != 0 )
    FileInformation = IopGetFileInformation((PADAPTER_OBJECT)v18, (__int64)&v31);
  else
    FileInformation = IopQueryXxxInformation((PADAPTER_OBJECT)v18, 9, v10, a7, v21, &v31, 1);
  NameStringMode = FileInformation;
  if ( (FileInformation & 0xC0000000) == 0xC0000000 )
  {
    v29 = FileInformation + 1073741822;
    if ( (unsigned int)(NameStringMode + 1073741822) > 0xE )
      goto LABEL_44;
    v30 = 18435;
    if ( !_bittest(&v30, v29) )
      goto LABEL_44;
    LODWORD(v31) = 4;
    *(_DWORD *)&v21->Type = 0;
    *(&v21->Size + 1) = 92;
    NameStringMode = 0;
    v23 = v31;
  }
  else
  {
    v23 = v31;
    if ( (unsigned int)v31 < 4 )
      v23 = 4;
    LODWORD(v31) = v23;
  }
  if ( v37 )
  {
    *v20 += *(_DWORD *)&v21->Type;
    NameStringMode = NumberOfBytes < 0x10 ? -1073741820 : -2147483643;
  }
  else
  {
    v24 = v23 - 4;
    v25 = *(_DWORD *)&v21->Type;
    if ( v24 <= *(_DWORD *)&v21->Type )
      v25 = v24;
    LODWORD(v31) = (_DWORD)v15 + *(_DWORD *)&v21->Type - (_DWORD)a4;
    if ( *(&v21->Size + 1) == 92 )
    {
      if ( a7 == 1 )
        memmove(v15, &v21->Size + 1, v25);
      else
        *(_DWORD *)&v21->Type = (_DWORD)v32;
      v26 = (char *)v15 + v25;
      v32 = v26;
      *(_WORD *)v26 = 0;
      LODWORD(v31) = v31 + 2;
      *v20 = v31;
      LOWORD(v26) = (_WORD)v26 - (_WORD)a4;
      a4->Length = (_WORD)v26 - 16;
      a4->MaximumLength = (_WORD)v26 - 14;
    }
    else
    {
      NameStringMode = -1073741767;
    }
  }
LABEL_44:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)NameStringMode;
}
