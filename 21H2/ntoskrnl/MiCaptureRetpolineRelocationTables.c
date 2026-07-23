/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x1406C12A0
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5590 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     MiIsRetpolineEnabled @ 0x1402A3834 (MiIsRetpolineEnabled.c)
 *     RtlValidateRetpolineRelocation @ 0x1402A3BBC (RtlValidateRetpolineRelocation.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiFreeImageRetpolineContext @ 0x1406C1A4C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        char *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  char *v7; // r15
  PVOID v8; // rax
  unsigned int *v9; // rdi
  ULONG v10; // r14d
  int v11; // ebx
  unsigned int v12; // eax
  ULONG v13; // esi
  unsigned int *v14; // r13
  __int64 v15; // r12
  _QWORD **v16; // rbx
  _QWORD *Pool; // rax
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-40h]
  ULONG pulResult; // [rsp+90h] [rbp+18h] BYREF

  v5 = a4;
  v6 = a2;
  v7 = a1;
  v22 = 0LL;
  pulResult = 0;
  v20 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, (PULONG)&v21);
  v9 = a5;
  if ( v8 )
  {
    v12 = (_DWORD)v8 - (_DWORD)v7;
    *a5 = v12;
    if ( v12 > (unsigned int)v6 )
      goto LABEL_10;
  }
  else
  {
    *a5 = 0;
  }
  if ( v5 + 8 >= v5 && v5 + 8 <= v6 )
  {
    v21 = *(_QWORD *)&v7[v5];
    v10 = HIDWORD(v21) + v5 + 8;
    if ( v10 >= (unsigned int)v5 && v10 <= (unsigned int)v6 )
    {
      if ( (_DWORD)v21 != 1 )
      {
        v11 = -1073741637;
LABEL_35:
        MiFreeImageRetpolineContext(v9);
        return (unsigned int)v11;
      }
      v13 = v5 + 8;
      while ( 1 )
      {
        if ( v13 >= v10 )
        {
          v11 = 0;
          goto LABEL_34;
        }
        if ( (unsigned __int64)v13 + 12 > v10 )
          break;
        v14 = (unsigned int *)&v7[v13];
        v22 = v14;
        v21 = *(_QWORD *)v14;
        v15 = v14[2];
        if ( RtlULongAdd(v13, 0xCu, &pulResult) < 0 )
          break;
        if ( RtlULongAdd(pulResult, v15, &pulResult) < 0 )
          break;
        v13 = pulResult;
        if ( pulResult > v10 )
          break;
        if ( v21 == 3 )
        {
          v16 = (_QWORD **)(v9 + 2);
          goto LABEL_26;
        }
        if ( v21 == 4 )
        {
          if ( !MiIsRetpolineEnabled() )
            goto LABEL_24;
          v16 = (_QWORD **)(v9 + 4);
        }
        else
        {
          if ( v21 != 5 || !MiIsRetpolineEnabled() )
          {
LABEL_24:
            v16 = 0LL;
            goto LABEL_26;
          }
          v16 = (_QWORD **)(v9 + 6);
        }
LABEL_26:
        if ( v16 )
        {
          if ( *v16 )
            break;
          Pool = MiAllocatePool(256, v15 + 12, 0x7252694Du);
          *v16 = Pool;
          if ( !Pool )
          {
            v11 = -1073741670;
            goto LABEL_35;
          }
          memmove(Pool, v14, v15 + 12);
          v18 = (__int64)*v16;
          *(_QWORD *)v18 = v21;
          *(_DWORD *)(v18 + 8) = v15;
          v11 = RtlValidateRetpolineRelocation(*v16, a2, &v20);
          if ( v11 < 0 )
            goto LABEL_34;
          v9[1] += v20;
          v7 = a1;
        }
      }
    }
LABEL_10:
    v11 = -1073741701;
    goto LABEL_35;
  }
  v11 = -1073741701;
LABEL_34:
  if ( v11 < 0 )
    goto LABEL_35;
  return (unsigned int)v11;
}
