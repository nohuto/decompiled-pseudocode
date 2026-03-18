/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C00790A0
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x1C007AA00 (NtFlipObjectConsumerPostMessage.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C007E09C (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C007E1AC (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C00798B0 (--0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipConsumerMessage>(
        unsigned int a1,
        char *a2,
        char a3,
        CFlipConsumerMessage **a4)
{
  signed int v5; // ebx
  unsigned int v6; // r13d
  char *v7; // r14
  char *Pool2; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  unsigned int i; // r8d
  bool v13; // sf
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  char *v20; // r12
  unsigned int v21; // r15d
  unsigned int v22; // r13d
  char *v23; // rbx
  char *v24; // rdx
  size_t v25; // r8
  __int64 v26; // rcx
  CFlipConsumerMessage *v27; // rax
  CFlipConsumerMessage *v28; // rcx
  char v31; // [rsp+B0h] [rbp+18h]

  v31 = a3;
  v5 = 0;
  if ( a1 )
  {
    v6 = 0;
    v7 = 0LL;
    Pool2 = 0LL;
    v9 = 0xFFFFFFFFLL;
    if ( a2 )
    {
      v10 = 32LL * a1;
      v11 = 0xFFFFFFFFLL;
      if ( v10 <= 0xFFFFFFFF )
        v11 = (unsigned int)v10;
      v5 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v10 <= 0xFFFFFFFF )
      {
        Pool2 = (char *)ExAllocatePool2(257LL, (unsigned int)v11, 1768964934LL, 0xFFFFFFFFLL);
        if ( !Pool2 )
          v5 = -1073741801;
        v9 = 0xFFFFFFFFLL;
        a3 = v31;
      }
      if ( v5 >= 0 )
      {
        if ( a3 && (&a2[v11] < a2 || (unsigned __int64)&a2[v11] > MmUserProbeAddress) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Pool2, a2, (unsigned int)v11);
        v9 = 0xFFFFFFFFLL;
      }
    }
    else
    {
      v5 = -1073741811;
    }
    for ( i = 0; ; ++i )
    {
      v13 = v5 < 0;
      if ( v5 < 0 )
        break;
      if ( i >= a1 )
      {
        v13 = v5 < 0;
        break;
      }
      v14 = 32LL * i;
      v15 = *(_DWORD *)&Pool2[v14 + 16];
      if ( v15 && *(_QWORD *)&Pool2[v14 + 24] )
      {
        v16 = v6;
        v17 = v6 + v15;
        v18 = -1;
        if ( v17 >= v6 )
          v18 = v17;
        v6 = v18;
        v5 = v17 < v16 ? 0xC0000095 : 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    v19 = 0;
    if ( !v13 )
    {
      v7 = (char *)ExAllocatePool2(257LL, v6, 1651524422LL, 0xFFFFFFFFLL);
      if ( !v7 )
        v5 = -1073741801;
    }
    if ( v5 < 0 )
    {
      v22 = a1;
    }
    else
    {
      v20 = v7;
      v21 = 0;
      v22 = a1;
      while ( v5 >= 0 && v21 < a1 )
      {
        v23 = &Pool2[32 * v21];
        v24 = (char *)*((_QWORD *)v23 + 3);
        v25 = *((unsigned int *)v23 + 4);
        if ( v31 && (&v24[v25] < v24 || (unsigned __int64)&v24[v25] > MmUserProbeAddress) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v20, v24, v25);
        *((_QWORD *)v23 + 3) = v20;
        v26 = *((unsigned int *)v23 + 4);
        v20 += v26;
        if ( v19 + 16 < v19 )
        {
          v19 = -1;
          v5 = -1073741675;
        }
        else
        {
          v19 += 16;
          v5 = 0;
        }
        if ( v5 >= 0 )
        {
          if ( v19 + 4 < v19 )
          {
            v19 = -1;
            v5 = -1073741675;
          }
          else
          {
            v19 += 4;
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            if ( (unsigned int)v26 + v19 < v19 )
            {
              v19 = -1;
              v5 = -1073741675;
            }
            else
            {
              v19 += v26;
              v5 = 0;
            }
          }
        }
        ++v21;
      }
    }
    if ( v5 >= 0 )
    {
      v27 = (CFlipConsumerMessage *)ExAllocatePool2(257LL, 64LL, 1835221830LL, v9);
      if ( v27 )
        v28 = CFlipConsumerMessage::CFlipConsumerMessage(v27, v22, (struct FlipPropertyItem *)Pool2, v7, v19);
      else
        v28 = 0LL;
      *a4 = v28;
      if ( v28 )
      {
        v7 = 0LL;
        Pool2 = 0LL;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v5;
}
