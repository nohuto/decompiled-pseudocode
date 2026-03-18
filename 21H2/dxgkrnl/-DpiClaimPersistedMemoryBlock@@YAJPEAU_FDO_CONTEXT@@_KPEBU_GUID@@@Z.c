/*
 * XREFs of ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x1C03931F0
 * Callers:
 *     DpiKsrRestore @ 0x1C03941B0 (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C039431C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C0393650 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2, const struct _GUID *a3)
{
  PVOID PoolWithTag; // r15
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // r12
  int v11; // eax
  unsigned __int64 v12; // r14
  unsigned int v13; // edx
  __int64 v14; // rax
  struct _MDL *v15; // rax
  struct _MDL *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rcx
  unsigned int i; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // r10d
  __int64 v23; // r8
  __int64 v24; // rdx
  _QWORD *MappedSystemVa; // rcx
  int v26; // eax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v29[2]; // [rsp+38h] [rbp-50h] BYREF
  int v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+4Ch] [rbp-3Ch]
  PVOID v32; // [rsp+50h] [rbp-38h]
  unsigned int v34; // [rsp+A8h] [rbp+20h] BYREF

  v34 = 0;
  NumberOfBytes = 0LL;
  PoolWithTag = 0LL;
  KsrQueryMetadata(a3, a2, 0LL, 0LL, &NumberOfBytes);
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64727044u);
  if ( !PoolWithTag )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    goto LABEL_4;
  }
  v9 = KsrQueryMetadata(a3, a2, PoolWithTag, (unsigned int)NumberOfBytes, &NumberOfBytes);
  v7 = v9;
  if ( v9 >= 0 )
  {
LABEL_4:
    v6 = KsrClaimPersistedMemory(a3, a2, 0LL, 0LL, 0, &v34);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 || !v34 )
    {
      v7 = -1073741811;
      v8 = -1073741811LL;
LABEL_8:
      WdLogSingleEntry1(2LL, v8);
      goto LABEL_48;
    }
    v10 = ExAllocatePoolWithTag(PagedPool, 8LL * v34, 0x74727044u);
    if ( !v10 )
    {
      v7 = -1073741801;
      v8 = -1073741801LL;
      goto LABEL_8;
    }
    v11 = KsrClaimPersistedMemory(a3, a2, v10, v34, 1, (char *)&NumberOfBytes + 4);
    v7 = v11;
    if ( v11 < 0 || v34 != HIDWORD(NumberOfBytes) )
    {
      v17 = v11;
      goto LABEL_46;
    }
    v12 = 0LL;
    v13 = 0;
    if ( !v34 )
      goto LABEL_44;
    do
    {
      if ( v7 < 0 )
        break;
      v14 = v13++;
      v12 += v10[v14] >> 40 << 12;
    }
    while ( v13 < v34 );
    if ( !v12 )
    {
LABEL_44:
      v7 = -1073741811;
      v17 = -1073741811LL;
      goto LABEL_46;
    }
    v15 = (struct _MDL *)ExAllocatePoolWithTag((POOL_TYPE)512, v12 + 48, a1 != 0LL ? 1953656900 : 1836216388);
    v16 = v15;
    if ( !v15 )
    {
      v7 = -1073741801;
      v17 = -1073741801LL;
LABEL_46:
      WdLogSingleEntry1(2LL, v17);
      goto LABEL_47;
    }
    v15->Next = 0LL;
    v18 = 0LL;
    v15->StartVa = 0LL;
    v15->ByteOffset = 0;
    v19 = 0LL;
    v15->ByteCount = v12;
    v15->Size = 8 * (((v12 + 4095) >> 12) + 6);
    v15->MdlFlags = 2;
    for ( i = v34; (unsigned int)v19 < i; v19 = (unsigned int)(v19 + 1) )
    {
      if ( v7 < 0 )
        break;
      v21 = v10[v19];
      v22 = 0;
      if ( (v21 & 0xFFFFFF0000000000uLL) != 0 )
      {
        v23 = 0LL;
        do
        {
          ++v22;
          v24 = v23 + (v21 & 0xFFFFFFFFFFLL);
          v23 = v22;
          *((_QWORD *)&v16[1].Next + v18) = v24;
          v18 = (unsigned int)(v18 + 1);
          v21 = v10[v19];
        }
        while ( v22 < v21 >> 40 );
        i = v34;
      }
    }
    if ( a1 )
    {
      v30 = NumberOfBytes;
      v29[0] = 0LL;
      v31 = 0;
      v29[1] = v16;
      v32 = PoolWithTag;
      v26 = DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v29);
      v7 = v26;
      if ( v26 >= 0 )
      {
LABEL_47:
        ExFreePoolWithTag(v10, 0);
LABEL_48:
        if ( !PoolWithTag )
          goto LABEL_50;
        goto LABEL_49;
      }
      WdLogSingleEntry1(2LL, v26);
    }
    else
    {
      if ( qword_1C01309A0 )
      {
        v7 = -1073741823;
      }
      else
      {
        if ( (v16->MdlFlags & 5) != 0 )
          MappedSystemVa = v16->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v16, 0, MmCached, 0LL, 0, 0x40000010u);
        qword_1C01309A0 = (__int64)MappedSystemVa;
        if ( MappedSystemVa )
        {
          if ( *(unsigned int *)MappedSystemVa <= v12 )
          {
            MappedSystemVa[2] = v16;
            v16 = 0LL;
          }
          else
          {
            v7 = -1073741811;
            MmUnmapLockedPages(MappedSystemVa, v16);
            qword_1C01309A0 = 0LL;
          }
        }
        else
        {
          v7 = -1073741823;
          WdLogSingleEntry1(2LL, -1073741823LL);
        }
      }
      if ( !v16 )
        goto LABEL_47;
    }
    MmFreePagesFromMdl(v16);
    ExFreePoolWithTag(v16, 0);
    goto LABEL_47;
  }
  WdLogSingleEntry1(2LL, v9);
LABEL_49:
  ExFreePoolWithTag(PoolWithTag, 0);
LABEL_50:
  if ( qword_1C01309A0 )
    *(_DWORD *)(qword_1C01309A0 + 24) = v7;
  return (unsigned int)v7;
}
