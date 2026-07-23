/*
 * XREFs of PipGetPersistentMemory @ 0x14089CAB8
 * Callers:
 *     IoAcquireKsrPersistentMemory @ 0x14089BD20 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BF90 (IoQueryKsrPersistentMemorySize.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C160 (IoReserveKsrPersistentMemory.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PipGetDeviceObjectLocation @ 0x14089C6A4 (PipGetDeviceObjectLocation.c)
 *     PipGetDriverKsrGuid @ 0x14089C8F4 (PipGetDriverKsrGuid.c)
 *     PnpCompareMultiSz @ 0x1408B23E4 (PnpCompareMultiSz.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipGetPersistentMemory(__int64 a1, ULONG_PTR a2, size_t *a3, void *a4, int a5)
{
  unsigned __int64 *v5; // r15
  ULONG_PTR v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  size_t *v18; // rdi
  WCHAR *v19; // r13
  struct _MDL *v20; // r14
  int DriverKsrGuid; // ebx
  unsigned int v22; // eax
  __int64 v23; // rdi
  _DWORD *PoolWithTag; // rax
  unsigned __int64 *v25; // rax
  unsigned int v26; // edi
  unsigned __int64 *v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  struct _MDL *v30; // rax
  struct _MDL *v31; // r9
  ULONG v32; // edi
  unsigned int v33; // edx
  unsigned int i; // r8d
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  void *v39; // r9
  size_t v40; // rax
  int DeviceObjectLocation; // eax
  size_t v42; // rcx
  __int64 v43; // r8
  size_t *v44; // rcx
  char v46; // [rsp+30h] [rbp-61h]
  unsigned int v47; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned int NumberOfBytes; // [rsp+38h] [rbp-59h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+3Ch] [rbp-55h]
  PVOID P; // [rsp+40h] [rbp-51h]
  size_t *v51; // [rsp+48h] [rbp-49h]
  PCWCH String1; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-39h] BYREF
  int v54; // [rsp+5Ch] [rbp-35h]
  __int128 v55; // [rsp+60h] [rbp-31h] BYREF
  void *v56; // [rsp+70h] [rbp-21h]
  ULONG_PTR v57; // [rsp+78h] [rbp-19h]
  __int64 v58; // [rsp+80h] [rbp-11h]
  __int128 v59; // [rsp+88h] [rbp-9h] BYREF

  v5 = 0LL;
  v51 = a3;
  v56 = a4;
  v57 = a2;
  v6 = a2;
  v53 = 0;
  v47 = 0;
  v59 = 0LL;
  if ( a2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v8 || (*(_DWORD *)(v8 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v9 = *(_QWORD *)(v6 + 8);
      if ( v9 )
      {
        IoAddTriageDumpDataBlock(v9, (PVOID)(unsigned int)*(__int16 *)(v9 + 2));
        v10 = (_WORD *)(*(_QWORD *)(v6 + 8) + 56LL);
        if ( *v10 )
        {
          IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 56LL));
        }
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v11 )
      {
        v12 = (unsigned __int16 *)(v11 + 40);
        IoAddTriageDumpDataBlock(v11, (PVOID)0x310);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
        }
        v13 = *(_QWORD *)(v6 + 312);
        v14 = *(_QWORD *)(v13 + 40);
        if ( *(_WORD *)(v14 + 56) )
        {
          IoAddTriageDumpDataBlock(v14 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 56LL));
          v13 = *(_QWORD *)(v6 + 312);
        }
        v15 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL);
        if ( v15 )
        {
          v16 = (_WORD *)(v15 + 56);
          if ( *v16 )
          {
            IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v6, 0LL, 0LL);
    }
  }
  v46 = 0;
  String1 = 0LL;
  v18 = 0LL;
  P = 0LL;
  v19 = 0LL;
  NumberOfBytes = 0;
  v20 = 0LL;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, (__int64)&v59);
  if ( DriverKsrGuid >= 0 )
  {
    v55 = 0LL;
    DriverKsrGuid = KsrEnumeratePersistedMemory(&v59, PipEnumeratePersistedMemory, &v55);
    if ( DriverKsrGuid >= 0 )
    {
      if ( !DWORD2(v55) )
        return (unsigned int)-1073741772;
      *(_QWORD *)&v55 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * DWORD2(v55), 0x61706E50u);
      if ( !(_QWORD)v55 )
        return (unsigned int)-1073741670;
      DriverKsrGuid = KsrEnumeratePersistedMemory(&v59, PipEnumeratePersistedMemory, &v55);
      if ( DriverKsrGuid < 0 )
        return (unsigned int)DriverKsrGuid;
      v22 = 0;
      NumberOfBytes_4 = 0;
      if ( DWORD2(v55) )
      {
        v54 = a5;
        while ( 1 )
        {
          v18 = 0LL;
          v20 = 0LL;
          v5 = 0LL;
          P = 0LL;
          if ( v46 )
            goto LABEL_74;
          v58 = *(_QWORD *)(v55 + 8LL * v22);
          v23 = v58;
          KsrQueryMetadata(&v59, v58, 0LL, 0LL, &NumberOfBytes);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x61706E50u);
          P = PoolWithTag;
          if ( !PoolWithTag )
          {
            DriverKsrGuid = -1073741670;
LABEL_71:
            v18 = 0LL;
            v20 = 0LL;
            v5 = 0LL;
            goto LABEL_74;
          }
          *PoolWithTag = 0;
          DriverKsrGuid = KsrQueryMetadata(&v59, v23, PoolWithTag, NumberOfBytes, &NumberOfBytes);
          if ( DriverKsrGuid < 0 )
            goto LABEL_71;
          DriverKsrGuid = KsrClaimPersistedMemory(&v59, v23, 0LL, 0LL, 0, &v47);
          if ( DriverKsrGuid == -1073741789 )
            DriverKsrGuid = 0;
          if ( DriverKsrGuid < 0 )
            goto LABEL_71;
          v25 = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v47, 0x61706E50u);
          v5 = v25;
          if ( !v25 )
          {
            DriverKsrGuid = -1073741670;
LABEL_69:
            v18 = 0LL;
            v20 = 0LL;
            goto LABEL_74;
          }
          DriverKsrGuid = KsrClaimPersistedMemory(&v59, v23, v25, v47, 0, &v47);
          if ( DriverKsrGuid < 0 )
            goto LABEL_69;
          v26 = 0;
          if ( v47 )
          {
            v27 = v5;
            v28 = v47;
            do
            {
              v29 = *v27++;
              v26 += v29 >> 40;
              --v28;
            }
            while ( v28 );
            v6 = v57;
          }
          v30 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v26 + 48, 0x61706E50u);
          v20 = v30;
          if ( !v30 )
          {
            v18 = 0LL;
            goto LABEL_74;
          }
          v30->Next = 0LL;
          v31 = v30 + 1;
          v32 = v26 << 12;
          v33 = 0;
          v30->StartVa = 0LL;
          v30->ByteOffset = 0;
          v30->Size = 8 * ((v32 >> 12) + 6);
          v30->ByteCount = v32;
          v30->MdlFlags = 2;
          for ( i = v47; v33 < i; ++v33 )
          {
            v35 = v5[v33];
            v36 = v35 >> 40;
            v37 = v35 & 0xFFFFFFFFFFLL;
            if ( (_DWORD)v36 )
            {
              v38 = (unsigned int)v36;
              do
              {
                v31->Next = (struct _MDL *)v37;
                v31 = (struct _MDL *)((char *)v31 + 8);
                ++v37;
                --v38;
              }
              while ( v38 );
              i = v47;
            }
          }
          v18 = (size_t *)MmMapLockedPagesSpecifyCache(v20, 0, MmCached, 0LL, 0, 0x40000010u);
          if ( !v18 )
          {
            DriverKsrGuid = -1073741670;
            goto LABEL_74;
          }
          if ( *(_WORD *)P > 1u )
          {
            DriverKsrGuid = -1073741637;
            goto LABEL_74;
          }
          if ( *((_DWORD *)P + 1) )
          {
            if ( v6 )
            {
              DeviceObjectLocation = PipGetDeviceObjectLocation(v6, &v53, &String1);
              v19 = (WCHAR *)String1;
              DriverKsrGuid = DeviceObjectLocation;
              if ( DeviceObjectLocation < 0 )
                goto LABEL_74;
              if ( (unsigned __int8)PnpCompareMultiSz(String1, (PCWCH)P + 8, 0) )
              {
                v39 = v56;
                v40 = *v18;
                v46 = 1;
                if ( !v56 )
                {
                  v44 = v51;
                  DriverKsrGuid = -1073741789;
                  *v51 = v40;
LABEL_62:
                  if ( v46 )
                    goto LABEL_74;
                  goto LABEL_73;
                }
                goto LABEL_55;
              }
            }
          }
          else if ( !v6 )
          {
            v39 = v56;
            v40 = *v18;
            if ( !v56 )
            {
              *v51 = v40;
LABEL_50:
              DriverKsrGuid = -1073741789;
              goto LABEL_74;
            }
LABEL_55:
            v42 = *v51;
            *v51 = v40;
            if ( v42 < v40 )
              goto LABEL_50;
            memmove(v39, v18 + 1, *v18);
            v46 = 1;
            if ( (v54 & 1) != 0 )
            {
              LOBYTE(v43) = 1;
              KsrFreePersistedMemoryBlock(&v59, v58, v43);
              v46 = 1;
            }
          }
          ++NumberOfBytes_4;
          if ( v19 )
          {
            ExFreePoolWithTag(v19, 0x61706E50u);
            v19 = 0LL;
            String1 = 0LL;
          }
          MmUnmapLockedPages(v18, v20);
          v18 = 0LL;
          ExFreePoolWithTag(v20, 0x61706E50u);
          v20 = 0LL;
          ExFreePoolWithTag(P, 0x61706E50u);
          P = 0LL;
          ExFreePoolWithTag(v5, 0x61706E50u);
          v22 = NumberOfBytes_4;
          v5 = 0LL;
          if ( NumberOfBytes_4 >= DWORD2(v55) )
          {
            v44 = v51;
            goto LABEL_62;
          }
        }
      }
      v44 = v51;
LABEL_73:
      *v44 = 0LL;
      DriverKsrGuid = -1073741772;
LABEL_74:
      if ( v19 )
        ExFreePoolWithTag(v19, 0x61706E50u);
      if ( v18 )
        MmUnmapLockedPages(v18, v20);
      if ( v20 )
        ExFreePoolWithTag(v20, 0x61706E50u);
      if ( P )
        ExFreePoolWithTag(P, 0x61706E50u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x61706E50u);
    }
  }
  return (unsigned int)DriverKsrGuid;
}
