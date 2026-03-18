/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x1406ACDDC
 * Callers:
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14082CB7C (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlValidateRetpolineRelocation @ 0x140235054 (RtlValidateRetpolineRelocation.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     RtlUIntAdd @ 0x1402E1260 (RtlUIntAdd.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiFreeImageRetpolineContext @ 0x14070705C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        char a5,
        unsigned int *a6)
{
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // eax
  UINT v13; // r12d
  UINT v14; // esi
  unsigned int *v15; // r15
  __int64 v16; // r13
  _QWORD **v17; // rbx
  _QWORD *Pool; // rax
  __int64 v19; // rax
  UINT puResult; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-54h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  unsigned int *v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  unsigned int v27; // [rsp+88h] [rbp+10h]
  char v28; // [rsp+A0h] [rbp+28h]

  v27 = a2;
  v8 = a2;
  v9 = a1;
  v24 = 0LL;
  puResult = 0;
  v22 = 0;
  v28 = 0;
  LOBYTE(a2) = 1;
  v10 = RtlImageDirectoryEntryToData(a1, a2, 12, (int)&v23);
  if ( v10 )
  {
    v12 = v10 - v9;
    *a6 = v12;
    if ( v12 > v8 )
    {
LABEL_6:
      v11 = -1073741701;
      goto LABEL_30;
    }
  }
  else
  {
    *a6 = 0;
  }
  if ( *a4 != 1 )
  {
    v11 = -1073741637;
LABEL_30:
    MiFreeImageRetpolineContext(a6);
    return (unsigned int)v11;
  }
  v13 = a4[1] + a3 + 8;
  v14 = a3 + 8;
  while ( v14 < v13 )
  {
    if ( (unsigned __int64)v14 + 12 > v13 )
      goto LABEL_6;
    v15 = (unsigned int *)(v14 + v9);
    v24 = v15;
    v25 = *(_QWORD *)v15;
    v16 = v15[2];
    if ( RtlUIntAdd(v14, 0xCu, &puResult) < 0 )
      goto LABEL_6;
    if ( RtlUIntAdd(puResult, v16, &puResult) < 0 )
      goto LABEL_6;
    v14 = puResult;
    if ( puResult > v13 )
      goto LABEL_6;
    v17 = 0LL;
    if ( v25 == 3 )
    {
      v17 = (_QWORD **)(a6 + 2);
    }
    else if ( v25 == 4 )
    {
      if ( MiIsRetpolineEnabled() )
        v17 = (_QWORD **)(a6 + 4);
    }
    else if ( v25 == 5 && MiIsRetpolineEnabled() )
    {
      v17 = (_QWORD **)(a6 + 6);
    }
    if ( v17 )
    {
      v28 = 1;
      if ( *v17 )
        goto LABEL_6;
      Pool = MiAllocatePool(256, v16 + 12, 0x7252694Du);
      *v17 = Pool;
      if ( !Pool )
      {
        v11 = -1073741670;
        goto LABEL_30;
      }
      memmove(Pool, v15, v16 + 12);
      v19 = (__int64)*v17;
      *(_QWORD *)v19 = v25;
      *(_DWORD *)(v19 + 8) = v16;
      v11 = RtlValidateRetpolineRelocation(*v17, v27, &v22);
      if ( v11 < 0 )
        goto LABEL_30;
      a6[1] += v22;
      v9 = a1;
    }
  }
  if ( !v28 )
  {
    v11 = -1073741637;
    goto LABEL_30;
  }
  return 0;
}
