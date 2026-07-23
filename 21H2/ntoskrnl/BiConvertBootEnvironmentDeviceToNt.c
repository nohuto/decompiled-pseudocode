/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140782794
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140782794 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x140784F70 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x140785A60 (BiVerifyBootPartition.c)
 * Callees:
 *     strcpy_s @ 0x1403D7EE0 (strcpy_s.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140782794 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140782908 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x140785A60 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14096FC10 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(char *Src, int a2, char a3, wchar_t **a4, unsigned int *a5)
{
  int v6; // ecx
  wchar_t *PoolWithTag; // rbx
  char v8; // r13
  unsigned int v9; // r15d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int NtPartitionPath; // edi
  __int64 v14; // rsi
  void *v15; // r13
  __int64 v16; // rsi
  wchar_t *v17; // rax
  int v19; // ecx
  int v20; // ecx
  wchar_t *v21; // rax
  SIZE_T v22; // r13
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  PVOID v28; // rax
  size_t v29; // r8
  PVOID v30; // rdx
  wchar_t *v31; // rax
  const wchar_t *v32; // r8
  unsigned int v33; // esi
  int v34; // eax
  int v35; // ecx
  bool v36; // zf
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  char *v40; // rsi
  char *v41; // rdi
  __int64 v42; // rsi
  unsigned int v43; // esi
  unsigned int v44; // r13d
  int v45; // eax
  size_t Size; // [rsp+30h] [rbp-30h] BYREF
  size_t v47; // [rsp+38h] [rbp-28h] BYREF
  PVOID v48; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h]
  void *Srca; // [rsp+50h] [rbp-10h] BYREF
  size_t v51; // [rsp+58h] [rbp-8h]
  char v52; // [rsp+A0h] [rbp+40h]

  v6 = *(_DWORD *)Src;
  PoolWithTag = 0LL;
  v51 = 0LL;
  v8 = 0;
  Size = 0LL;
  v9 = 0;
  LODWORD(v47) = 0;
  P = 0LL;
  Srca = 0LL;
  v48 = 0LL;
  v52 = 0;
  if ( v6 )
  {
    v10 = v6 - 2;
    if ( !v10 )
    {
LABEL_5:
      NtPartitionPath = BiVerifyBootPartition((_DWORD)Src, 0, 0, 0, 0LL, (__int64)&v47);
      if ( NtPartitionPath < 0 )
        goto LABEL_86;
      v14 = (unsigned int)v47;
      if ( (a3 & 0x20) != 0 && (_DWORD)v47 )
      {
        NtPartitionPath = -1073741823;
        goto LABEL_58;
      }
      NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
      if ( NtPartitionPath < 0 )
      {
        P = Srca;
LABEL_58:
        if ( !(_DWORD)v14 )
          goto LABEL_85;
        NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&Src[v14], (__int64)&Size);
        if ( NtPartitionPath >= 0 )
        {
          v9 = Size + 34;
          HIDWORD(Size) = Size + 34;
          v33 = Size + 34;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 34), 0x4B444342u);
          v51 = (size_t)PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v33);
            *(_DWORD *)PoolWithTag = 8;
            *((_DWORD *)PoolWithTag + 5) = 0;
            v34 = 301989890;
            if ( a2 )
            {
              if ( a2 == 553648129 )
              {
                v34 = 570425346;
              }
              else if ( a2 == 285212739 )
              {
                v34 = 301989956;
              }
            }
            *((_DWORD *)PoolWithTag + 7) = v34;
            *((_DWORD *)PoolWithTag + 6) = 34;
            memmove(PoolWithTag + 17, v48, (unsigned int)Size);
LABEL_85:
            if ( NtPartitionPath < 0 )
              goto LABEL_86;
LABEL_12:
            *a4 = PoolWithTag;
            *a5 = v9;
LABEL_13:
            v8 = v52;
            goto LABEL_14;
          }
          goto LABEL_64;
        }
LABEL_86:
        if ( NtPartitionPath == -1073741670 )
          goto LABEL_90;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
LABEL_89:
        v45 = BiConvertBootEnvironmentDeviceToUnknown(Src);
        v9 = HIDWORD(Size);
        NtPartitionPath = v45;
        PoolWithTag = (wchar_t *)v51;
LABEL_90:
        if ( NtPartitionPath < 0 )
          goto LABEL_13;
        goto LABEL_12;
      }
      v15 = Srca;
      v16 = -1LL;
      P = Srca;
      v52 = 1;
      do
        ++v16;
      while ( *((_WORD *)Srca + v16) );
      v9 = 2 * v16 + 22;
      v17 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
      PoolWithTag = v17;
      if ( v17 )
      {
        memset(v17, 0, v9);
        *(_DWORD *)PoolWithTag = 2;
        memmove(PoolWithTag + 10, v15, (unsigned int)(2 * v16 + 2));
        NtPartitionPath = 0;
        goto LABEL_12;
      }
LABEL_19:
      NtPartitionPath = -1073741670;
      goto LABEL_13;
    }
    v11 = v10 - 3;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_5;
      v19 = v12 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          v22 = 34LL;
          v23 = -1LL;
          v36 = *((_DWORD *)Src + 4) == 1;
          v9 = 34;
          HIDWORD(Size) = 34;
          if ( v36 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( *(_WORD *)&Src[2 * v24 + 28] );
            v9 = 2 * v24 + 34;
            HIDWORD(Size) = v9;
            v22 = v9;
          }
          v25 = *((unsigned int *)Src + 6);
          if ( (_DWORD)v25 )
          {
            if ( (a3 & 0x20) != 0 )
              goto LABEL_94;
            v26 = BiGetNtPartitionPath(Src, &Srca);
            P = Srca;
            if ( v26 >= 0 )
            {
              v52 = 1;
              v27 = -1LL;
              do
                ++v27;
              while ( *((_WORD *)Srca + v27) );
              LODWORD(v47) = 2 * v27 + 2;
              LODWORD(Size) = 2 * v27 + 22;
              v28 = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B444342u);
              v48 = v28;
              if ( !v28 )
              {
                NtPartitionPath = -1073741670;
LABEL_17:
                ExFreePoolWithTag(P, 0x4B444342u);
                return (unsigned int)NtPartitionPath;
              }
              memset(v28, 0, (unsigned int)Size);
              v29 = (unsigned int)v47;
              v30 = P;
              *(_DWORD *)v48 = 2;
              memmove((char *)v48 + 20, v30, v29);
            }
            if ( !v48 )
            {
LABEL_94:
              if ( (unsigned int)(*((_DWORD *)Src + 2) - v25) < 0x4C )
                goto LABEL_89;
              NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&Src[v25 + 40], (__int64)&Size);
              if ( NtPartitionPath < 0 )
                goto LABEL_86;
            }
            LODWORD(v25) = v22;
            v9 = v22 + Size;
            v22 = (unsigned int)(v22 + Size);
          }
          v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x4B444342u);
          PoolWithTag = v31;
          if ( !v31 )
            goto LABEL_19;
          memset(v31, 0, v22);
          *(_DWORD *)PoolWithTag = 8;
          if ( *((_DWORD *)Src + 4) )
          {
            *((_DWORD *)PoolWithTag + 5) = 1;
            v32 = (const wchar_t *)(Src + 28);
            do
              ++v23;
            while ( v32[v23] );
            wcscpy_s(PoolWithTag + 16, v23 + 1, v32);
          }
          else
          {
            *((_DWORD *)PoolWithTag + 5) = 0;
            *((_DWORD *)PoolWithTag + 7) = *((_DWORD *)Src + 5);
          }
          if ( v48 )
          {
            *((_DWORD *)PoolWithTag + 6) = v25;
            memmove((char *)PoolWithTag + (unsigned int)v25, v48, (unsigned int)Size);
          }
LABEL_26:
          NtPartitionPath = 0;
          goto LABEL_12;
        }
        if ( v20 != 1 )
          goto LABEL_89;
        v9 = *((_DWORD *)Src + 4) + 21;
        v21 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
        PoolWithTag = v21;
        if ( v21 )
        {
          memset(v21, 0, v9);
          *(_DWORD *)PoolWithTag = 9;
          strcpy_s((char *)PoolWithTag + 20, 1uLL, Src + 20);
          goto LABEL_26;
        }
      }
      else
      {
        v9 = 36;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
        if ( PoolWithTag )
        {
          *(_OWORD *)PoolWithTag = 0LL;
          *((_OWORD *)PoolWithTag + 1) = 0LL;
          *((_DWORD *)PoolWithTag + 8) = 0;
          *(_DWORD *)PoolWithTag = 7;
          *(_OWORD *)(PoolWithTag + 10) = *((_OWORD *)Src + 2);
          goto LABEL_26;
        }
      }
    }
    else
    {
      v9 = 20;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
      if ( PoolWithTag )
      {
        *(_OWORD *)PoolWithTag = 0LL;
        *((_DWORD *)PoolWithTag + 4) = 0;
        *(_DWORD *)PoolWithTag = 1;
        goto LABEL_26;
      }
    }
    NtPartitionPath = -1073741670;
    goto LABEL_14;
  }
  v35 = *((_DWORD *)Src + 4);
  if ( v35 != 3 && v35 != 5 )
    goto LABEL_89;
  v36 = v35 == 3;
  v37 = *((unsigned int *)Src + 2);
  v38 = 52LL;
  if ( !v36 )
    v38 = 32LL;
  v39 = 36LL;
  if ( !v36 )
    v39 = 16LL;
  v40 = &Src[v39 + 16];
  if ( v37 < v38 + 12 || *((_DWORD *)v40 + 2) > (unsigned int)(v37 - v38) )
  {
    NtPartitionPath = -1073741811;
    goto LABEL_85;
  }
  NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(v40, (__int64)&Size);
  if ( NtPartitionPath < 0 )
    goto LABEL_86;
  if ( *(_DWORD *)v48 == 3 )
    goto LABEL_89;
  v41 = &v40[*((unsigned int *)v40 + 2)];
  P = v41;
  v42 = -1LL;
  do
    ++v42;
  while ( *(_WORD *)&v41[2 * v42] );
  v43 = 2 * v42 + 2;
  if ( v43 + 32 < 0x20 || v43 + 32 + (unsigned int)Size < v43 + 32 )
    goto LABEL_89;
  v44 = (v43 + 31) & 0xFFFFFFF8;
  v51 = (unsigned int)Size + v44;
  v9 = Size + v44;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v51, 0x4B444342u);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v51);
    memmove(PoolWithTag + 12, v41, v43);
    *((_DWORD *)PoolWithTag + 5) = v44;
    memmove((char *)PoolWithTag + v44, v48, (unsigned int)Size);
    *(_DWORD *)PoolWithTag = 4 - (*((_DWORD *)Src + 4) != 3);
    NtPartitionPath = 0;
    goto LABEL_12;
  }
LABEL_64:
  NtPartitionPath = -1073741670;
  v8 = 0;
LABEL_14:
  if ( v48 )
    ExFreePoolWithTag(v48, 0x4B444342u);
  if ( v8 )
    goto LABEL_17;
  return (unsigned int)NtPartitionPath;
}
