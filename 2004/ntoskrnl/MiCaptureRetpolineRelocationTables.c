/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x1406D5D00
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14078E730 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     MiIsRetpolineEnabled @ 0x140329398 (MiIsRetpolineEnabled.c)
 *     RtlValidateRetpolineRelocation @ 0x1403294B0 (RtlValidateRetpolineRelocation.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiFreeImageRetpolineContext @ 0x1406D649C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        char *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  char *v7; // r15
  PVOID v8; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int *v13; // r13
  __int64 v14; // r12
  unsigned int v15; // r14d
  _QWORD **v16; // rbx
  int v17; // ebx
  _QWORD *Pool; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned int *v22; // [rsp+30h] [rbp-48h]
  int v25; // [rsp+90h] [rbp+18h] BYREF

  v5 = a4;
  v6 = a2;
  v7 = a1;
  v22 = 0LL;
  v25 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, (PULONG)&v21);
  v9 = a5;
  if ( v8 )
  {
    v10 = (_DWORD)v8 - (_DWORD)v7;
    *a5 = v10;
    if ( v10 > (unsigned int)v6 )
      goto LABEL_31;
  }
  else
  {
    *a5 = 0;
  }
  if ( v5 + 8 >= v5 && v5 + 8 <= v6 )
  {
    v21 = *(_QWORD *)&v7[v5];
    v11 = HIDWORD(v21) + v5 + 8;
    if ( v11 >= (unsigned int)v5 && v11 <= (unsigned int)v6 )
    {
      if ( (_DWORD)v21 != 1 )
      {
        v17 = -1073741637;
        goto LABEL_32;
      }
      v12 = v5 + 8;
      while ( 1 )
      {
        if ( v12 >= v11 )
        {
          v17 = 0;
          goto LABEL_20;
        }
        if ( (unsigned __int64)v12 + 12 > v11 )
          break;
        v13 = (unsigned int *)&v7[v12];
        v22 = v13;
        v21 = *(_QWORD *)v13;
        v14 = v13[2];
        v15 = v14 + v12 + 12;
        if ( v15 < v12 || v15 > v11 )
          break;
        if ( v21 == 3 )
        {
          v16 = (_QWORD **)(v9 + 2);
        }
        else
        {
          if ( v21 == 4 )
          {
            if ( MiIsRetpolineEnabled() )
            {
              v16 = (_QWORD **)(v9 + 4);
              goto LABEL_17;
            }
          }
          else if ( v21 == 5 && MiIsRetpolineEnabled() )
          {
            v16 = (_QWORD **)(v9 + 6);
            goto LABEL_17;
          }
          v16 = 0LL;
        }
LABEL_17:
        if ( v16 )
        {
          if ( *v16 )
            break;
          Pool = MiAllocatePool(256, v14 + 12, 0x7252694Du);
          *v16 = Pool;
          if ( !Pool )
          {
            v17 = -1073741670;
            goto LABEL_32;
          }
          memmove(Pool, v13, v14 + 12);
          v20 = (__int64)*v16;
          *(_QWORD *)v20 = v21;
          *(_DWORD *)(v20 + 8) = v14;
          v17 = RtlValidateRetpolineRelocation(*v16, a2, &v25);
          if ( v17 < 0 )
            goto LABEL_20;
          v9[1] += v25;
          v12 = v15;
          v7 = a1;
        }
        else
        {
          v12 = v15;
        }
      }
    }
LABEL_31:
    v17 = -1073741701;
    goto LABEL_32;
  }
  v17 = -1073741701;
LABEL_20:
  if ( v17 < 0 )
LABEL_32:
    MiFreeImageRetpolineContext(v9);
  return (unsigned int)v17;
}
