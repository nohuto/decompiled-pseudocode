/*
 * XREFs of NtQueryDirectoryObject @ 0x1406613C0
 * Callers:
 *     <none>
 * Callees:
 *     ObpLockDirectoryShared @ 0x14020660C (ObpLockDirectoryShared.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ObpUnlockDirectory @ 0x14027EB0C (ObpUnlockDirectory.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryDirectoryObject(
        HANDLE Handle,
        char *Address,
        size_t Size,
        char a4,
        char a5,
        int *a6,
        unsigned int *a7)
{
  size_t v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  const void **PoolWithQuotaTag; // rax
  const void **v15; // r15
  NTSTATUS v16; // ebx
  unsigned int v17; // r15d
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  unsigned int v23; // r12d
  int v24; // r11d
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r10
  unsigned int v29; // r9d
  unsigned __int16 Length; // r8
  unsigned int v31; // edx
  const void **v32; // r11
  int v33; // eax
  char *v34; // rbx
  const void **v35; // rdi
  char *v36; // rbx
  char *v37; // rbx
  struct _DMA_ADAPTER *v38; // rbx
  unsigned int v39; // eax
  int v40; // [rsp+30h] [rbp-A8h]
  int v41; // [rsp+30h] [rbp-A8h]
  int v42; // [rsp+38h] [rbp-A0h]
  unsigned int v43; // [rsp+3Ch] [rbp-9Ch]
  const void **v44; // [rsp+40h] [rbp-98h]
  const void **Src; // [rsp+48h] [rbp-90h]
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  int v47; // [rsp+58h] [rbp-80h]
  int v48; // [rsp+5Ch] [rbp-7Ch]
  _QWORD *v49; // [rsp+60h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  __int128 v51; // [rsp+78h] [rbp-60h] BYREF
  __int64 v52; // [rsp+88h] [rbp-50h]
  __int64 v53; // [rsp+90h] [rbp-48h]
  int v54; // [rsp+98h] [rbp-40h]
  int v55; // [rsp+9Ch] [rbp-3Ch]
  unsigned int v57; // [rsp+F0h] [rbp+18h]

  v57 = Size;
  v7 = (unsigned int)Size;
  DestinationString = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v55 = 0;
  v51 = 0LL;
  v54 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, (unsigned int)Size, 2u);
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a6;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a7;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( a5 )
    {
      v12 = 0;
      v47 = 0;
    }
    else
    {
      v12 = *a6;
      v47 = *a6;
    }
  }
  else if ( a5 )
  {
    v12 = 0;
  }
  else
  {
    v12 = *a6;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return 3221225485LL;
  PoolWithQuotaTag = (const void **)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v15 = PoolWithQuotaTag;
  Src = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  memset(PoolWithQuotaTag, 0, v7);
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v16;
  }
  v44 = v15;
  v17 = 32;
  v42 = 32;
  v18 = 0;
  v40 = 0;
  v19 = -2147483622;
  ObpLockDirectoryShared((__int64)&v51, Object);
  v20 = 0;
  v43 = 0;
  v21 = Object;
  v49 = Object;
  while ( 1 )
  {
    v22 = (_QWORD *)*v21;
    if ( *v21 )
      break;
LABEL_33:
    v43 = ++v20;
    v49 = ++v21;
    if ( v20 >= 0x25 )
      goto LABEL_42;
  }
  while ( 1 )
  {
    v23 = v17;
    v24 = v18;
    v48 = v18;
    v25 = v18++;
    if ( v12 == v25 )
      break;
LABEL_31:
    v22 = (_QWORD *)*v22;
    if ( !v22 )
    {
      v21 = v49;
      v20 = v43;
      goto LABEL_33;
    }
  }
  v26 = v22[1];
  if ( (*(_BYTE *)(v26 - 22) & 2) == 0 || (v27 = ObpInfoMaskToOffset[*(_BYTE *)(v26 - 22) & 3], v26 - 48 == v27) )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v24 = v48;
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)(v26 - 48 - v27 + 8);
  }
  v28 = (unsigned __int8)((unsigned __int16)(v26 - 48) >> 8);
  v29 = (unsigned __int8)ObHeaderCookie;
  Length = DestinationString.Length;
  v31 = DestinationString.Length
      + 36
      + v17
      + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ (unsigned __int8)ObHeaderCookie]
                            + 16);
  if ( v17 > v31 )
  {
    v19 = 261;
    goto LABEL_41;
  }
  if ( v31 <= v57 )
  {
    *(_WORD *)v44 = DestinationString.Length;
    *((_WORD *)v44 + 1) = Length + 2;
    v44[1] = DestinationString.Buffer;
    *((_WORD *)v44 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ v29] + 16);
    *((_WORD *)v44 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ v29] + 16) + 2;
    v44[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ v29] + 24);
    v19 = 0;
    v17 = v31;
    v42 = v31;
    v32 = v44 + 4;
    v44 += 4;
    v33 = ++v40;
    if ( a4 )
      goto LABEL_43;
    ++v12;
    goto LABEL_31;
  }
  v19 = -1073741789;
  if ( !a4 )
    v19 = 261;
  v17 += DestinationString.Length
       + 36
       + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ (unsigned __int8)ObHeaderCookie]
                             + 16);
  if ( !a4 )
    v17 = v23;
  v42 = v17;
LABEL_41:
  v18 = v24;
LABEL_42:
  v32 = v44;
  v33 = v40;
LABEL_43:
  if ( v19 >= 0 )
  {
    *(_OWORD *)v32 = 0LL;
    *((_OWORD *)v32 + 1) = 0LL;
    v34 = (char *)(v32 + 4);
    if ( v33 )
    {
      v35 = Src + 3;
      do
      {
        v41 = v33 - 1;
        memmove(v34, *(v35 - 2), *((unsigned __int16 *)v35 - 12));
        *(v35 - 2) = &Address[v34 - (char *)Src];
        v36 = &v34[*((unsigned __int16 *)v35 - 12)];
        *(_WORD *)v36 = 0;
        v36 += 2;
        memmove(v36, *v35, *((unsigned __int16 *)v35 - 4));
        *v35 = &Address[v36 - (char *)Src];
        v37 = &v36[*((unsigned __int16 *)v35 - 4)];
        *(_WORD *)v37 = 0;
        v34 = v37 + 2;
        v35 += 4;
        v33 = v41;
      }
      while ( v41 );
      v17 = v42;
    }
  }
  v38 = (struct _DMA_ADAPTER *)Object;
  ObpUnlockDirectory((__int64)Object, (__int64)&v51);
  v39 = v57;
  if ( v17 <= v57 )
    v39 = v17;
  memmove(Address, Src, v39);
  if ( a7 )
    *a7 = v17;
  if ( v19 >= 0 )
    *a6 = v18;
  HalPutDmaAdapter(v38);
  ExFreePoolWithTag(Src, 0);
  return (unsigned int)v19;
}
