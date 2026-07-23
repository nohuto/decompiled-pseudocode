/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x1407851B8
 * Callers:
 *     BiConvertElementToRegistryData @ 0x140784D3C (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14096FCC0 (BiConvertNtFilePathToBootEnvironment.c)
 * Callees:
 *     strcpy_s @ 0x1403D7EE0 (strcpy_s.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140785664 (BiGetPartitionVhdFilePath.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14078596C (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14096FCC0 (BiConvertNtFilePathToBootEnvironment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 BiConvertNtDeviceToBootEnvironment(const WCHAR *a1, unsigned int a2, unsigned int a3, ...)
{
  int v4; // edx
  _QWORD *v5; // r15
  char *v7; // rdi
  int v8; // edx
  int v9; // edx
  int PartitionDevice; // ebx
  __int64 result; // rax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rbx
  char *v18; // rax
  char *v19; // r9
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned int v23; // r12d
  unsigned int v24; // ebx
  __int64 v25; // r14
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // ecx
  void *PartitionVhdFilePath; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  char *v32; // rax
  unsigned int v33; // ebx
  __int64 v34; // rdx
  char *v35; // rax
  unsigned int v36; // eax
  char *v37; // rax
  __int64 v38; // rax
  unsigned int *v39; // rbx
  unsigned int v40; // esi
  char *v41; // rax
  void *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // esi
  char *v45; // rax
  char *PoolWithTag; // rax
  void *Src; // [rsp+30h] [rbp-10h] BYREF
  char *v48; // [rsp+38h] [rbp-8h]
  PVOID P; // [rsp+98h] [rbp+58h] BYREF
  va_list Pa; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Pa, a3);
  P = va_arg(va1, PVOID);
  v4 = *(_DWORD *)a1;
  v5 = P;
  Src = 0LL;
  v48 = 0LL;
  v7 = 0LL;
  v8 = v4 - 1;
  if ( !v8 )
  {
    if ( a2 < 0x14 )
      goto LABEL_10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_DWORD *)v7 = 5;
      *((_DWORD *)v7 + 2) = 72;
      goto LABEL_6;
    }
    goto LABEL_74;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a2 >= 0x16 )
    {
      if ( (unsigned __int8)BiIsVolumePartitionInformationRetained(a1 + 10) )
      {
        v7 = v48;
        PartitionDevice = BiCreatePartitionDevice(a1 + 10);
        if ( PartitionDevice < 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_10:
    PartitionDevice = -1073741811;
    goto LABEL_9;
  }
  v12 = v9 - 1;
  if ( !v12 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v43 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v43 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                        (char *)a1 + v43,
                        a2 - (unsigned int)v43,
                        a1 + 12,
                        a3,
                        (PVOID *)Pa);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v39 = (unsigned int *)P;
    v44 = *((_DWORD *)P + 1) + 20;
    v45 = (char *)ExAllocatePoolWithTag(PagedPool, v44, 0x4B444342u);
    v7 = v45;
    if ( v45 )
    {
      memset(v45, 0, v44);
      *(_DWORD *)v7 = 0;
      v42 = v7 + 20;
      *((_DWORD *)v7 + 2) = v44;
      *((_DWORD *)v7 + 4) = 5;
      goto LABEL_68;
    }
    goto LABEL_73;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v38 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v38 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                        (char *)a1 + v38,
                        a2 - (unsigned int)v38,
                        a1 + 12,
                        a3,
                        (PVOID *)Pa);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v39 = (unsigned int *)P;
    v40 = *((_DWORD *)P + 1) + 40;
    v41 = (char *)ExAllocatePoolWithTag(PagedPool, v40, 0x4B444342u);
    v7 = v41;
    if ( v41 )
    {
      memset(v41, 0, v40);
      *(_DWORD *)v7 = 0;
      v42 = v7 + 40;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = v40;
      *((_DWORD *)v7 + 4) = 3;
LABEL_68:
      memmove(v42, v39, v39[1]);
      ExFreePoolWithTag(v39, 0x4B444342u);
      goto LABEL_6;
    }
LABEL_73:
    ExFreePoolWithTag(v39, 0x4B444342u);
LABEL_74:
    PartitionDevice = -1073741670;
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2 < 0x20 )
      goto LABEL_10;
    v36 = *((_DWORD *)a1 + 7);
    if ( v36 > 0x100000 )
      goto LABEL_10;
    v37 = (char *)ExAllocatePoolWithTag(PagedPool, v36, 0x4B444342u);
    v7 = v37;
    if ( v37 )
    {
      memmove(v37, a1 + 10, *((unsigned int *)a1 + 7));
      goto LABEL_6;
    }
    goto LABEL_74;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a2 < 0x24 )
      goto LABEL_10;
    v35 = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = v35;
    if ( v35 )
    {
      memset(v35, 0, 0x48uLL);
      *(_DWORD *)v7 = 7;
      *((_DWORD *)v7 + 2) = 72;
      *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
      *((_OWORD *)v7 + 2) = *(_OWORD *)(a1 + 10);
      goto LABEL_6;
    }
    goto LABEL_74;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 || a2 < 0x15 )
      goto LABEL_10;
    v17 = -1LL;
    do
      ++v17;
    while ( *((_BYTE *)a1 + v17 + 20) );
    v18 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v17 + 21), 0x4B444342u);
    v7 = v18;
    if ( v18 )
    {
      memset(v18, 0, (unsigned int)(v17 + 21));
      *(_QWORD *)v7 = 9LL;
      *((_DWORD *)v7 + 2) = v17 + 21;
      *((_DWORD *)v7 + 4) = v17 + 1;
      strcpy_s(v7 + 20, (unsigned int)(v17 + 1), (const char *)a1 + 20);
LABEL_23:
      v5 = P;
LABEL_6:
      PartitionDevice = 0;
      goto LABEL_7;
    }
LABEL_47:
    v5 = P;
    PartitionDevice = -1073741670;
    goto LABEL_7;
  }
  if ( a2 < 0x22 )
    goto LABEL_10;
  v21 = *((unsigned int *)a1 + 6);
  if ( a2 <= (unsigned int)v21 )
    goto LABEL_10;
  v22 = 30;
  v23 = 0;
  if ( !(_DWORD)v21 )
  {
LABEL_40:
    v30 = -1LL;
    if ( *((_DWORD *)a1 + 5) == 1 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( a1[v31 + 16] );
      v22 += 2 * v31;
    }
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x4B444342u);
    v7 = v32;
    if ( v32 )
    {
      memset(v32, 0, v22);
      *(_DWORD *)v7 = 8;
      *((_DWORD *)v7 + 2) = v22;
      if ( *((_DWORD *)a1 + 5) )
      {
        *((_DWORD *)v7 + 4) = 1;
        v34 = -1LL;
        do
          ++v34;
        while ( a1[v34 + 16] );
        wcscpy_s((wchar_t *)v7 + 14, v34 + 1, a1 + 16);
        do
          ++v30;
        while ( a1[v30 + 16] );
        v33 = 2 * v30 + 30;
      }
      else
      {
        *((_DWORD *)v7 + 4) = 0;
        v33 = 30;
        *((_DWORD *)v7 + 5) = *((_DWORD *)a1 + 7);
      }
      if ( Src )
      {
        v19 = &v7[v33];
        *(_DWORD *)v19 = 0;
        v20 = *((_DWORD *)Src + 2);
        *((_DWORD *)v19 + 4) = 6;
        *((_DWORD *)v19 + 2) = v23 + v20;
        memmove(&v19[v23], Src, *((unsigned int *)Src + 2));
        *((_DWORD *)v7 + 6) = v33;
      }
      goto LABEL_23;
    }
    goto LABEL_47;
  }
  v24 = a2 - v21;
  v25 = (__int64)a1 + v21;
  if ( *(_DWORD *)((char *)a1 + v21) != 3 || v24 < 0x2E )
    goto LABEL_10;
  v26 = *(unsigned int *)(v25 + 20);
  v27 = v24 - v26;
  v28 = *(_DWORD *)(v26 + v25);
  if ( v28 == 2 )
  {
    if ( v27 < 0x16 )
      goto LABEL_10;
    PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)(v26 + v25 + 20));
    if ( PartitionVhdFilePath )
    {
      ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
LABEL_11:
      PartitionDevice = -1073741637;
      goto LABEL_7;
    }
  }
  else if ( v28 != 6 && (v28 != 8 || v27 < 0x22) && (v28 != 1 || v27 < 0x14) )
  {
    goto LABEL_10;
  }
  PartitionDevice = BiConvertNtDeviceToBootEnvironment(v25, v24, 0LL, &Src);
  if ( PartitionDevice >= 0 )
  {
    v23 = 40;
    v22 = *((_DWORD *)Src + 2) + 70;
    goto LABEL_40;
  }
LABEL_7:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_9:
  result = (unsigned int)PartitionDevice;
  *v5 = v7;
  return result;
}
