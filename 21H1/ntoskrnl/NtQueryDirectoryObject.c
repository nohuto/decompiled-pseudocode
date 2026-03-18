/*
 * XREFs of NtQueryDirectoryObject @ 0x140612FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     ObpLockDirectoryShared @ 0x14025B128 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x14025B2D4 (ObpUnlockDirectory.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryDirectoryObject(
        HANDLE Handle,
        char *Address,
        SIZE_T Length,
        char a4,
        char a5,
        int *a6,
        unsigned int *a7)
{
  size_t v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  int v10; // r12d
  const void **PoolWithQuotaTag; // rax
  const void **v12; // r14
  NTSTATUS v13; // ebx
  unsigned int v14; // r14d
  int v15; // edi
  int v16; // esi
  unsigned int v17; // ecx
  _QWORD *v18; // r13
  _QWORD *v19; // rbx
  unsigned int v20; // esi
  int v21; // r15d
  int v22; // eax
  const void **v23; // rdx
  int v24; // eax
  char *v25; // rbx
  const void **v26; // rsi
  char *v27; // rbx
  char *v28; // rbx
  struct _DMA_ADAPTER *v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned __int16 v34; // r9
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // [rsp+30h] [rbp-A8h]
  int v40; // [rsp+30h] [rbp-A8h]
  int v41; // [rsp+38h] [rbp-A0h]
  __int64 v42; // [rsp+38h] [rbp-A0h]
  unsigned int v43; // [rsp+40h] [rbp-98h]
  const void **v44; // [rsp+48h] [rbp-90h]
  const void **Src; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  int v47; // [rsp+60h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  __int128 v49; // [rsp+78h] [rbp-60h] BYREF
  __int64 v50; // [rsp+88h] [rbp-50h]
  __int64 v51; // [rsp+90h] [rbp-48h]
  int v52; // [rsp+98h] [rbp-40h]
  int v53; // [rsp+9Ch] [rbp-3Ch]
  unsigned int Size; // [rsp+F0h] [rbp+18h]

  Size = Length;
  v7 = (unsigned int)Length;
  DestinationString = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v53 = 0;
  v49 = 0LL;
  v52 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, (unsigned int)Length, 2u);
    v36 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v36 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v36 = *(_DWORD *)v36;
    if ( a7 )
    {
      v37 = (__int64)a7;
      if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
        v37 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v37 = *(_DWORD *)v37;
    }
    if ( a5 )
    {
      v10 = 0;
      v47 = 0;
    }
    else
    {
      v10 = *a6;
      v47 = *a6;
    }
  }
  else if ( a5 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *a6;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return 3221225485LL;
  PoolWithQuotaTag = (const void **)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v12 = PoolWithQuotaTag;
  Src = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  memset(PoolWithQuotaTag, 0, v7);
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v13;
  }
  else
  {
    v44 = v12;
    v14 = 32;
    v15 = 0;
    v39 = 0;
    v16 = -2147483622;
    v41 = -2147483622;
    ObpLockDirectoryShared((__int64)&v49, Object);
    v17 = 0;
    v43 = 0;
    v18 = Object;
    do
    {
      v19 = (_QWORD *)*v18;
      if ( *v18 )
      {
        while ( 1 )
        {
          v20 = v14;
          v21 = v15;
          v22 = v15++;
          if ( v10 == v22 )
          {
            v31 = v19[1] - 48LL;
            v42 = v31;
            if ( (*(_BYTE *)(v31 + 26) & 2) == 0 || (v32 = ObpInfoMaskToOffset[*(_BYTE *)(v31 + 26) & 3], v31 == v32) )
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
              v31 = v42;
            }
            else
            {
              DestinationString = *(UNICODE_STRING *)(v31 - v32 + 8);
            }
            v33 = (unsigned __int8)ObHeaderCookie;
            v34 = DestinationString.Length;
            v14 += DestinationString.Length
                 + 36
                 + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v31 + 24) ^ BYTE1(v31) ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie]
                                       + 16);
            if ( v14 > Size )
            {
              v15 = v21;
              v38 = -1073741789;
              if ( !a4 )
                v38 = 261;
              v41 = v38;
              if ( !a4 )
                v14 = v20;
              v16 = v38;
              goto LABEL_13;
            }
            *(_WORD *)v44 = DestinationString.Length;
            *((_WORD *)v44 + 1) = v34 + 2;
            v44[1] = DestinationString.Buffer;
            *((_WORD *)v44 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v31 + 24) ^ BYTE1(v31) ^ (unsigned __int64)v33]
                                           + 16);
            *((_WORD *)v44 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v31 + 24) ^ BYTE1(v31) ^ (unsigned __int64)v33]
                                           + 16)
                                + 2;
            v44[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v31 + 24) ^ BYTE1(v31) ^ (unsigned __int64)v33]
                                    + 24);
            v16 = 0;
            v41 = 0;
            v23 = v44 + 4;
            v44 += 4;
            v24 = ++v39;
            if ( a4 )
              goto LABEL_14;
            ++v10;
          }
          v19 = (_QWORD *)*v19;
          if ( !v19 )
          {
            v17 = v43;
            v16 = v41;
            break;
          }
        }
      }
      v43 = ++v17;
      ++v18;
    }
    while ( v17 < 0x25 );
LABEL_13:
    v23 = v44;
    v24 = v39;
LABEL_14:
    if ( v16 >= 0 )
    {
      *(_OWORD *)v23 = 0LL;
      *((_OWORD *)v23 + 1) = 0LL;
      v25 = (char *)(v23 + 4);
      if ( v24 )
      {
        v26 = Src + 3;
        do
        {
          v40 = v24 - 1;
          memmove(v25, *(v26 - 2), *((unsigned __int16 *)v26 - 12));
          *(v26 - 2) = &Address[v25 - (char *)Src];
          v27 = &v25[*((unsigned __int16 *)v26 - 12)];
          *(_WORD *)v27 = 0;
          v27 += 2;
          memmove(v27, *v26, *((unsigned __int16 *)v26 - 4));
          *v26 = &Address[v27 - (char *)Src];
          v28 = &v27[*((unsigned __int16 *)v26 - 4)];
          *(_WORD *)v28 = 0;
          v25 = v28 + 2;
          v26 += 4;
          v24 = v40;
        }
        while ( v40 );
        v16 = v41;
      }
    }
    v29 = (struct _DMA_ADAPTER *)Object;
    ObpUnlockDirectory((__int64)Object, (__int64)&v49);
    v30 = Size;
    if ( v14 <= Size )
      v30 = v14;
    memmove(Address, Src, v30);
    if ( a7 )
      *a7 = v14;
    if ( v16 >= 0 )
      *a6 = v15;
    HalPutDmaAdapter(v29);
    ExFreePoolWithTag(Src, 0);
    return (unsigned int)v16;
  }
}
