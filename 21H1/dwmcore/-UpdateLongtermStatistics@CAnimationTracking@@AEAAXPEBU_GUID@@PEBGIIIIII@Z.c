/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800893DC
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DA0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18008B2A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18015B148 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18015B3E8 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  const unsigned __int16 *v10; // r13
  __int64 v13; // r14
  const struct _GUID *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 Data1_low; // rax
  __int64 v18; // rbx
  __int64 v19; // r10
  int v20; // r9d
  __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  char *v28; // rax
  signed __int64 v29; // r8
  int v30; // ecx
  int v31; // edx
  struct _GUID *v32; // rax
  int v33; // ebp
  unsigned __int64 v34; // r14
  unsigned __int16 *v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r9d
  int v40; // r9d
  int v41; // r9d
  int v42; // r9d
  int v43; // r9d
  int v44; // r9d
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v47; // [rsp+60h] [rbp+18h]

  v10 = a3;
  v13 = 0LL;
  if ( !a3 )
  {
    v14 = a2;
    v15 = 2LL;
    v16 = 314159LL;
    do
    {
      Data1_low = LOBYTE(v14->Data1);
      v14 = (const struct _GUID *)((char *)v14 + 8);
      v16 = v14[-1].Data4[7]
          + 37
          * (v14[-1].Data4[6]
           + 37
           * (v14[-1].Data4[5]
            + 37
            * (v14[-1].Data4[4]
             + 37 * (v14[-1].Data4[3] + 37 * (v14[-1].Data4[2] + 37 * (v14[-1].Data4[1] + 37 * (Data1_low + 37 * v16)))))));
      --v15;
    }
    while ( v15 );
    goto LABEL_4;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v24 = 2 * v13;
  v16 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v25 = (unsigned __int64)v24 >> 3;
    v24 -= 8 * ((unsigned __int64)v24 >> 3);
    do
    {
      v26 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v16))))));
      v27 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v16 = v27 + 37 * v26;
      --v25;
    }
    while ( v25 );
  }
  if ( v24 < 1 || v24 > 7 )
    goto LABEL_4;
  v39 = v24 - 1;
  if ( !v39 )
    goto LABEL_89;
  v40 = v39 - 1;
  if ( !v40 )
  {
LABEL_88:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
LABEL_89:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    goto LABEL_4;
  }
  v41 = v40 - 1;
  if ( !v41 )
  {
LABEL_87:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_88;
  }
  v42 = v41 - 1;
  if ( !v42 )
  {
LABEL_86:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_87;
  }
  v43 = v42 - 1;
  if ( !v43 )
  {
LABEL_85:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_86;
  }
  v44 = v43 - 1;
  if ( !v44 )
  {
LABEL_84:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_85;
  }
  if ( v44 == 1 )
  {
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_84;
  }
LABEL_4:
  v18 = 0LL;
  v19 = v16 & (-1LL << (*((_BYTE *)this + 548) & 0x1F));
  while ( 1 )
  {
    if ( v18 )
      goto LABEL_8;
    v20 = *((_DWORD *)this + 137) >> 5;
    if ( !v20 )
      break;
    v18 = *((_QWORD *)this + 69)
        + 8LL
        * ((37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v19)) & (unsigned int)(v20 - 1));
LABEL_8:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v19 == ((-1LL << (*((_BYTE *)this + 548) & 0x1F)) & *(_QWORD *)(v18 + 8)) )
        goto LABEL_10;
    }
    v18 = 0LL;
LABEL_10:
    if ( !v18 )
      break;
    if ( a2 )
    {
      v21 = *(_QWORD *)(v18 + 32) - *(_QWORD *)&a2->Data1;
      if ( !v21 )
        v21 = *(_QWORD *)(v18 + 40) - *(_QWORD *)a2->Data4;
      v22 = v21 == 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v18 + 24) == v13 )
    {
      v28 = *(char **)(v18 + 16);
      v29 = (char *)v10 - v28;
      do
      {
        v30 = *(unsigned __int16 *)&v28[v29];
        v31 = *(unsigned __int16 *)v28 - v30;
        if ( v31 )
          break;
        v28 += 2;
      }
      while ( v30 );
      v22 = v31 == 0;
LABEL_15:
      if ( v22 )
        goto LABEL_16;
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v32 = (struct _GUID *)DefaultHeap::AllocClear(0x98uLL);
    v18 = (__int64)v32;
    if ( !v32 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_DWORD *)v32[7].Data4 = -1;
    v33 = 0;
    *(_QWORD *)&v32[3].Data1 = v16;
    if ( a2 )
    {
      v32[2] = *a2;
    }
    else
    {
      *(_QWORD *)v32[1].Data4 = v13;
      v34 = v13 + 1;
      v35 = (unsigned __int16 *)operator new(saturated_mul(v34, 2uLL));
      *(_QWORD *)(v18 + 16) = v35;
      if ( v35 )
        StringCchCopyW(v35, v34, v10);
      else
        v33 = -2147024882;
    }
    *(_QWORD *)(v18 + 8) = v16;
    v36 = *((_DWORD *)this + 137);
    v47 = v16 & (-1LL << (v36 & 0x1F));
    v37 = *((_QWORD *)this + 69);
    v38 = (37
         * (BYTE6(v47)
          + 37
          * (BYTE5(v47)
           + 37
           * (BYTE4(v47)
            + 37
            * ((((unsigned int)v16 & (-1 << (v36 & 0x1F))) >> 24)
             + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
         + HIBYTE(v47)) & ((v36 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v37 + 8 * v38);
    *(_QWORD *)(v37 + 8 * v38) = v18;
    ++*((_DWORD *)this + 136);
    if ( v33 < 0 )
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v18,
        v38);
      v18 = 0LL;
    }
    if ( v18 )
    {
LABEL_16:
      ++*(_DWORD *)(v18 + 56);
      if ( a5 < *(_DWORD *)(v18 + 120) )
        *(_DWORD *)(v18 + 120) = a5;
      if ( a5 > *(_DWORD *)(v18 + 124) )
        *(_DWORD *)(v18 + 124) = a5;
      *(_QWORD *)(v18 + 128) += a6;
      *(_QWORD *)(v18 + 136) += a9;
      *(_QWORD *)(v18 + 144) += a7;
      if ( a4 )
      {
        if ( a4 > 5 )
        {
          if ( a4 <= 0xA )
          {
            ++*(_DWORD *)(v18 + 104);
          }
          else if ( a4 <= 0xF )
          {
            ++*(_DWORD *)(v18 + 108);
          }
          else if ( a4 <= 0x19 )
          {
            ++*(_DWORD *)(v18 + 112);
          }
          else if ( a4 <= 0x32 )
          {
            ++*(_DWORD *)(v18 + 116);
          }
        }
        else
        {
          ++*(_DWORD *)(v18 + 100);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 96);
      }
      if ( a7 >= 0x32 )
      {
        if ( a7 < 0x64 )
        {
          ++*(_DWORD *)(v18 + 72);
        }
        else if ( a7 < 0xC8 )
        {
          ++*(_DWORD *)(v18 + 76);
        }
        else if ( a7 < 0x1F4 )
        {
          ++*(_DWORD *)(v18 + 80);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 68);
      }
      if ( a8 < 0xC8 )
      {
        ++*(_DWORD *)(v18 + 84);
      }
      else if ( a8 >= 0x1F4 )
      {
        if ( a8 < 0x7D0 )
          ++*(_DWORD *)(v18 + 92);
      }
      else
      {
        ++*(_DWORD *)(v18 + 88);
      }
      v23 = 1000 * a9 / a5;
      if ( v23 >= 0x32 )
      {
        if ( v23 >= 0x96 )
          ++*(_DWORD *)(v18 + 64);
        else
          ++*(_DWORD *)(v18 + 60);
      }
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
