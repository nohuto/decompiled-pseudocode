/*
 * XREFs of MiCreateDataFileMap @ 0x140685C44
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14021EB7C (MiInsertSubsectionNode.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     FsRtlSetFileSize @ 0x1405E9020 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     MiComputeIdealFirstSubsection @ 0x1408CFECC (MiComputeIdealFirstSubsection.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

int __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        LARGE_INTEGER **a3,
        LARGE_INTEGER a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  LARGE_INTEGER v11; // rbp
  unsigned __int64 v12; // r15
  LARGE_INTEGER *Pool; // rdi
  LARGE_INTEGER *v14; // rsi
  __int64 v15; // rdx
  int v16; // ebx
  LARGE_INTEGER *v17; // r8
  unsigned __int64 v18; // r13
  unsigned int v19; // r14d
  __int16 v20; // cx
  ULONG LowPart; // ecx
  __int16 v22; // r14
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rbx
  __int16 v26; // ax
  __int16 v27; // r14
  __int64 *v28; // rdi
  __int16 v29; // ax
  int v30; // r8d
  bool v31; // zf
  __int16 v32; // cx
  int v33; // eax
  int result; // eax
  LARGE_INTEGER *v35; // rcx
  _QWORD *QuadPart; // rcx
  _QWORD *v37; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+A8h] [rbp+40h]

  FileSize.QuadPart = 0LL;
  v41 = a8 & 1;
  if ( v41 )
  {
    v11 = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v11 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v11 = a4;
      result = FsRtlSetFileSize(FileObject, (__int64 *)&FileSize);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v11.QuadPart <= 0x3FFFFFFFFFF000uLL )
    {
      v12 = (unsigned __int64)(v11.QuadPart + 4095) >> 12;
      Pool = (LARGE_INTEGER *)MiAllocatePool(256, 0x30uLL, 0x6D536D4Du);
      if ( !Pool )
        return -1073741670;
      v14 = (LARGE_INTEGER *)MiAllocatePool(64, 0x128uLL, 0x61436D4Du);
      if ( !v14 )
      {
        v35 = Pool;
        goto LABEL_52;
      }
      v15 = 0LL;
      v16 = a8 & 0x10000;
      if ( v16 && v12 > 0x200 )
        v15 = 8 * MiComputeIdealFirstSubsection(FileObject, 0LL);
      v17 = 0LL;
      FileSize.QuadPart = 0LL;
      v18 = 8 * v12;
      if ( !v15 )
        LODWORD(v15) = v16 != 0 ? 0x200000 : 0x100000;
      while ( 1 )
      {
        v19 = v18;
        if ( v18 >= (unsigned int)v15 )
          v19 = v15;
        if ( v17 )
        {
          v17 = (LARGE_INTEGER *)MiAllocatePool(64, 0x90uLL, 0x63536D4Du);
          if ( !v17 )
          {
            ExFreePoolWithTag(Pool, 0);
            QuadPart = (_QWORD *)v14[18].QuadPart;
            if ( QuadPart )
            {
              do
              {
                v37 = (_QWORD *)QuadPart[2];
                ExFreePoolWithTag(QuadPart, 0);
                QuadPart = v37;
              }
              while ( v37 );
            }
            v35 = v14;
LABEL_52:
            ExFreePoolWithTag(v35, 0);
            return -1073741670;
          }
          *(_QWORD *)(FileSize.QuadPart + 16) = v17;
        }
        else
        {
          v17 = v14 + 16;
        }
        FileSize.QuadPart = (LONGLONG)v17;
        v17[5].HighPart = v19 >> 3;
        v18 -= v19;
        if ( !v18 )
        {
          *(_OWORD *)&Pool->LowPart = 0LL;
          *(_OWORD *)&Pool[2].LowPart = 0LL;
          *a3 = Pool;
          *(_OWORD *)&Pool[4].LowPart = 0LL;
          v14[2].QuadPart = (LONGLONG)&v14[1];
          v14[1].QuadPart = (LONGLONG)&v14[1];
          v14->QuadPart = (LONGLONG)Pool;
          v14[14].QuadPart = 1LL;
          v14[3].QuadPart = 1LL;
          v20 = WORD2(v14[7].QuadPart) ^ *a2;
          v14[13].QuadPart = 0LL;
          WORD2(v14[7].QuadPart) ^= v20 & 0x3FF;
          LowPart = v14[7].LowPart;
          if ( v41 )
            LowPart |= 0x8000u;
          else
            v14[6].QuadPart = 1LL;
          v22 = 6;
          v14[7].LowPart = LowPart ^ (LowPart ^ (a7 << 20)) & 0x3F00000 | 0x82;
          if ( v16 )
          {
            v14[7].LowPart = LowPart ^ (LowPart ^ (a7 << 20)) & 0x3F00000 | 0x40000082;
          }
          else if ( (a6 & 0x10000000) != 0 )
          {
            WORD2(Pool[1].QuadPart) |= 0x8000u;
            v22 = 14;
          }
          else if ( (a6 & 0x40000000) != 0 )
          {
            v22 = 30;
            WORD2(Pool[1].QuadPart) |= 0x4000u;
          }
          v23 = (__int64)&v14[16];
          v24 = BYTE6(Pool[1].QuadPart) & 0xC1;
          Pool->QuadPart = (LONGLONG)v14;
          Pool[3] = v11;
          v25 = 0LL;
          v26 = (WORD2(Pool[1].QuadPart) ^ WORD2(v12)) & 0x3FF;
          Pool[1].LowPart = v12;
          WORD2(Pool[1].QuadPart) ^= v26;
          BYTE6(Pool[1].QuadPart) = (2 * v22) | v24;
          v27 = 2 * v22;
          do
          {
            v28 = (__int64 *)(v23 + 16);
            v29 = *(_WORD *)(v23 + 32) & 1;
            *(_QWORD *)v23 = v14;
            v30 = *(_DWORD *)(v23 + 44);
            *(_DWORD *)(v23 + 36) = v25;
            v31 = *(_QWORD *)(v23 + 16) == 0LL;
            *(_WORD *)(v23 + 32) = v27 | v29 & 0xFFC1 | (WORD2(v25) << 6);
            if ( v31 )
            {
              v32 = *(_WORD *)(v23 + 34);
              *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ (v25 + v30 - v12)) & 0x3FFFFFFF;
              *(_WORD *)(v23 + 34) = (16 * LOWORD(v11.LowPart)) | v32 & 0xF;
              v33 = ((unsigned __int64)v11.QuadPart >> 12) - v25;
            }
            else
            {
              v33 = v30;
            }
            *(_DWORD *)(v23 + 40) = v33;
            v25 += *(unsigned int *)(v23 + 44);
            *(_QWORD *)(v23 + 88) = v23 + 80;
            *(_QWORD *)(v23 + 80) = v23 + 80;
            MiInsertSubsectionNode((__int64)v14, v23, 0LL);
            v23 = *v28;
          }
          while ( *v28 );
          return 0;
        }
        LODWORD(v15) = v16 != 0 ? 0x200000 : 0x100000;
        if ( v19 >= (unsigned int)v15 )
          LODWORD(v15) = v19;
      }
    }
    return -1073741760;
  }
  return result;
}
