/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180002F20
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180003448 (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800024B0 (memcpy_s.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180002A6C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18000556C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     memset_0 @ 0x180040098 (memset_0.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v3; // rsi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  LPVOID *v35; // rbx
  volatile signed __int32 *v36; // rcx
  rsize_t v37; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // rdi
  char *v43; // rax
  _BYTE *v44; // r8
  char *v45; // rbx
  char **v46; // r15
  __int64 v47; // r14
  rsize_t v48; // r14
  _BYTE *v49; // r8
  char **v50; // r15
  __int64 v51; // r14
  rsize_t v52; // r14
  _BYTE *v53; // r8
  char **v54; // r15
  __int64 v55; // r14
  rsize_t v56; // r14
  _BYTE *v57; // r8
  char **v58; // r15
  __int64 v59; // r14
  rsize_t v60; // r14
  _BYTE *v61; // r8
  char **v62; // r15
  __int64 v63; // r14
  rsize_t v64; // r14
  _BYTE *v65; // r8
  char **v66; // r15
  __int64 v67; // r14
  rsize_t v68; // r14
  char *v69; // rax
  _BYTE *v70; // r8
  _QWORD *v71; // r14
  char *v72; // rbx
  rsize_t v73; // rsi
  void *v74; // rax
  __int64 v75; // [rsp+50h] [rbp+8h]

  v3 = -1LL;
  *(_OWORD *)this = *(_OWORD *)a2;
  v5 = 2LL;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    v75 = 2 * v7 + 2;
  }
  else
  {
    v75 = 2LL;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *((_QWORD *)a2 + 5);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *((_QWORD *)a2 + 6);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *((_QWORD *)a2 + 8);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *((_QWORD *)a2 + 15);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *((_QWORD *)a2 + 13);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *((_QWORD *)a2 + 14);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *((_QWORD *)a2 + 10);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *((_QWORD *)a2 + 11);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = v15 + v18 + v21 + v24 + v27 + v5 + v30;
  v35 = (LPVOID *)((char *)this + 144);
  v36 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  v37 = v75 + v9 + v12 + v34;
  if ( !v36 )
    goto LABEL_56;
  if ( *v36 != 1 || *((_QWORD *)this + 19) < v37 )
  {
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *v35);
    }
    *v35 = 0LL;
    *((_QWORD *)this + 19) = 0LL;
LABEL_56:
    wil::details::shared_buffer::create((LPVOID *)this + 18, 0LL, v37);
  }
  v39 = (__int64)*v35 + 4;
  v40 = v39 & -(__int64)(*v35 != 0LL);
  v41 = v40 + *((_QWORD *)this + 19);
  v42 = v41 & -(__int64)(v40 != 0);
  if ( v40 )
  {
    v43 = (char *)wil::details::WriteResultString<unsigned short const *>(
                    v39 & -(__int64)(*v35 != 0LL),
                    v41 & -(__int64)((v39 & -(__int64)(*v35 != 0LL)) != 0),
                    *((_QWORD *)a2 + 2),
                    (char *)this + 16);
    v44 = (_BYTE *)*((_QWORD *)a2 + 4);
    v45 = v43;
    v46 = (char **)((char *)this + 32);
    if ( v43 == (char *)v42 )
      goto LABEL_67;
    if ( !v44 )
      goto LABEL_67;
    if ( !*v44 )
      goto LABEL_67;
    v47 = -1LL;
    do
      ++v47;
    while ( v44[v47] );
    v48 = v47 + 1;
    if ( v42 - (__int64)v43 >= v48 )
    {
      memcpy_s(v43, v42 - (_QWORD)v43, v44, v48);
      if ( this != (wil::StoredFailureInfo *)-32LL )
        *v46 = v45;
      v45 += v48;
    }
    else
    {
LABEL_67:
      if ( this != (wil::StoredFailureInfo *)-32LL )
        *v46 = 0LL;
    }
    v49 = (_BYTE *)*((_QWORD *)a2 + 5);
    v50 = (char **)((char *)this + 40);
    if ( v45 == (char *)v42 )
      goto LABEL_78;
    if ( !v49 )
      goto LABEL_78;
    if ( !*v49 )
      goto LABEL_78;
    v51 = -1LL;
    do
      ++v51;
    while ( v49[v51] );
    v52 = v51 + 1;
    if ( v42 - (__int64)v45 >= v52 )
    {
      memcpy_s(v45, v42 - (_QWORD)v45, v49, v52);
      if ( this != (wil::StoredFailureInfo *)-40LL )
        *v50 = v45;
      v45 += v52;
    }
    else
    {
LABEL_78:
      if ( this != (wil::StoredFailureInfo *)-40LL )
        *v50 = 0LL;
    }
    v53 = (_BYTE *)*((_QWORD *)a2 + 6);
    v54 = (char **)((char *)this + 48);
    if ( v45 == (char *)v42 )
      goto LABEL_89;
    if ( !v53 )
      goto LABEL_89;
    if ( !*v53 )
      goto LABEL_89;
    v55 = -1LL;
    do
      ++v55;
    while ( v53[v55] );
    v56 = v55 + 1;
    if ( v42 - (__int64)v45 >= v56 )
    {
      memcpy_s(v45, v42 - (_QWORD)v45, v53, v56);
      if ( this != (wil::StoredFailureInfo *)-48LL )
        *v54 = v45;
      v45 += v56;
    }
    else
    {
LABEL_89:
      if ( this != (wil::StoredFailureInfo *)-48LL )
        *v54 = 0LL;
    }
    v57 = (_BYTE *)*((_QWORD *)a2 + 8);
    v58 = (char **)((char *)this + 64);
    if ( v45 == (char *)v42 )
      goto LABEL_100;
    if ( !v57 )
      goto LABEL_100;
    if ( !*v57 )
      goto LABEL_100;
    v59 = -1LL;
    do
      ++v59;
    while ( v57[v59] );
    v60 = v59 + 1;
    if ( v42 - (__int64)v45 >= v60 )
    {
      memcpy_s(v45, v42 - (_QWORD)v45, v57, v60);
      if ( this != (wil::StoredFailureInfo *)-64LL )
        *v58 = v45;
      v45 += v60;
    }
    else
    {
LABEL_100:
      if ( this != (wil::StoredFailureInfo *)-64LL )
        *v58 = 0LL;
    }
    v61 = (_BYTE *)*((_QWORD *)a2 + 15);
    v62 = (char **)((char *)this + 120);
    if ( v45 == (char *)v42 )
      goto LABEL_111;
    if ( !v61 )
      goto LABEL_111;
    if ( !*v61 )
      goto LABEL_111;
    v63 = -1LL;
    do
      ++v63;
    while ( v61[v63] );
    v64 = v63 + 1;
    if ( v42 - (__int64)v45 >= v64 )
    {
      memcpy_s(v45, v42 - (_QWORD)v45, v61, v64);
      if ( this != (wil::StoredFailureInfo *)-120LL )
        *v62 = v45;
      v45 += v64;
    }
    else
    {
LABEL_111:
      if ( this != (wil::StoredFailureInfo *)-120LL )
        *v62 = 0LL;
    }
    v65 = (_BYTE *)*((_QWORD *)a2 + 13);
    v66 = (char **)((char *)this + 104);
    if ( v45 == (char *)v42 )
      goto LABEL_122;
    if ( !v65 )
      goto LABEL_122;
    if ( !*v65 )
      goto LABEL_122;
    v67 = -1LL;
    do
      ++v67;
    while ( v65[v67] );
    v68 = v67 + 1;
    if ( v42 - (__int64)v45 >= v68 )
    {
      memcpy_s(v45, v42 - (_QWORD)v45, v65, v68);
      if ( this != (wil::StoredFailureInfo *)-104LL )
        *v66 = v45;
      v45 += v68;
    }
    else
    {
LABEL_122:
      if ( this != (wil::StoredFailureInfo *)-104LL )
        *v66 = 0LL;
    }
    v69 = (char *)wil::details::WriteResultString<unsigned short const *>(
                    v45,
                    v42,
                    *((_QWORD *)a2 + 14),
                    (char *)this + 112);
    v70 = (_BYTE *)*((_QWORD *)a2 + 10);
    v71 = (_QWORD *)((char *)this + 80);
    v72 = v69;
    if ( v69 == (char *)v42 || !v70 || !*v70 )
      goto LABEL_132;
    do
      ++v3;
    while ( v70[v3] );
    v73 = v3 + 1;
    if ( v42 - (__int64)v69 >= v73 )
    {
      memcpy_s(v69, v42 - (_QWORD)v69, v70, v73);
      if ( this != (wil::StoredFailureInfo *)-80LL )
        *v71 = v72;
      v72 += v73;
    }
    else
    {
LABEL_132:
      if ( this != (wil::StoredFailureInfo *)-80LL )
        *v71 = 0LL;
    }
    v74 = (void *)wil::details::WriteResultString<unsigned short const *>(
                    v72,
                    v42,
                    *((_QWORD *)a2 + 11),
                    (char *)this + 88);
    memset_0(v74, 0, v42 - (_QWORD)v74);
  }
}
