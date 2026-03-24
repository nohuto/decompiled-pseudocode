/*
 * XREFs of ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00B11D8
 * Callers:
 *     VidMmLogInformationToMinidump @ 0x1C0022E80 (VidMmLogInformationToMinidump.c)
 * Callees:
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00B79E4 (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00BB7AC (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 *     ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00C0988 (-WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::LogInformationToMinidump(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _VIDMM_MINIDUMP_HEADER *a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  char *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  _OWORD *v16; // rdx
  char *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm1
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax

  if ( a6 < 0x508 )
    return 0LL;
  v11 = (unsigned __int8 *)a5 + 1288;
  memset((char *)a5 + 4, 0, 0x504uLL);
  v12 = 6LL;
  *(_DWORD *)a5 = 1;
  v13 = (char *)a5 + 8;
  *((_DWORD *)a5 + 1) = *((_DWORD *)this + 926);
  v14 = &VIDMM_GLOBAL::_Config;
  do
  {
    *(_OWORD *)v13 = *v14;
    *((_OWORD *)v13 + 1) = v14[1];
    *((_OWORD *)v13 + 2) = v14[2];
    *((_OWORD *)v13 + 3) = v14[3];
    *((_OWORD *)v13 + 4) = v14[4];
    *((_OWORD *)v13 + 5) = v14[5];
    *((_OWORD *)v13 + 6) = v14[6];
    v13 += 128;
    v15 = v14[7];
    v14 += 8;
    *((_OWORD *)v13 - 1) = v15;
    --v12;
  }
  while ( v12 );
  v16 = &gVidMmLowResourceAccumulated;
  *(_OWORD *)v13 = *v14;
  *((_OWORD *)v13 + 1) = v14[1];
  *((_OWORD *)v13 + 2) = v14[2];
  *((_OWORD *)v13 + 3) = v14[3];
  *((_OWORD *)v13 + 4) = v14[4];
  *((_OWORD *)v13 + 5) = v14[5];
  *((_OWORD *)v13 + 6) = v14[6];
  *((_QWORD *)v13 + 14) = *((_QWORD *)v14 + 14);
  v17 = (char *)a5 + 896;
  v18 = 2LL;
  do
  {
    *(_OWORD *)v17 = *v16;
    *((_OWORD *)v17 + 1) = v16[1];
    *((_OWORD *)v17 + 2) = v16[2];
    *((_OWORD *)v17 + 3) = v16[3];
    *((_OWORD *)v17 + 4) = v16[4];
    *((_OWORD *)v17 + 5) = v16[5];
    *((_OWORD *)v17 + 6) = v16[6];
    v17 += 128;
    v19 = v16[7];
    v16 += 8;
    *((_OWORD *)v17 - 1) = v19;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v17 = *v16;
  *((_OWORD *)v17 + 1) = v16[1];
  *((_OWORD *)v17 + 2) = v16[2];
  *((_OWORD *)v17 + 3) = v16[3];
  *((_OWORD *)v17 + 4) = v16[4];
  *((_OWORD *)v17 + 5) = v16[5];
  *((_OWORD *)v17 + 6) = v16[6];
  *((_QWORD *)v17 + 14) = *((_QWORD *)v16 + 14);
  *((_DWORD *)v17 + 30) = *((_DWORD *)v16 + 30);
  v20 = VIDMM_GLOBAL::WriteSegmentInformationToMinidump(this, a5, v11, a6 - 1288);
  v21 = &v11[v20];
  v22 = a6 - 1288 - v20;
  v23 = 10240LL;
  if ( v22 < 0x2800 )
    v23 = a6 - 1288 - v20;
  v24 = VIDMM_GLOBAL::WritePagingHistoryToMinidump(this, a5, v21, v23);
  return a6
       - (v22
        - v24)
       + VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
           *((VIDMM_DMA_POOL **)this + 79),
           a5,
           &v21[v24],
           v22 - v24,
           a2,
           a3,
           a4);
}
