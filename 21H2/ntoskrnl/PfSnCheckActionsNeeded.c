/*
 * XREFs of PfSnCheckActionsNeeded @ 0x140679AEC
 * Callers:
 *     PfSnBeginScenario @ 0x14067A4B4 (PfSnBeginScenario.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     MmGetDefaultPagePriority @ 0x14027348C (MmGetDefaultPagePriority.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfpGetPageListCount @ 0x140678688 (PfpGetPageListCount.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406788A4 (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // esi
  unsigned int DefaultPagePriority; // eax
  unsigned int v12; // edx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  unsigned __int8 *v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r12
  unsigned int v21; // r8d
  unsigned __int64 v22; // r15
  unsigned int v23; // r8d
  __int64 PageListCount; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  _DWORD *v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v37; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v38[3]; // [rsp+34h] [rbp-114h] BYREF
  int *v39; // [rsp+40h] [rbp-108h]
  int *v40; // [rsp+48h] [rbp-100h]
  _OWORD v41[11]; // [rsp+50h] [rbp-F8h] BYREF

  *(_QWORD *)&v38[1] = a1;
  v40 = a5;
  v39 = a4;
  memset(v41, 0, sizeof(v41));
  v38[0] = 0;
  v8 = 3;
  v37 = 0;
  v9 = 3;
  v10 = 23;
  if ( (dword_140C502F0 & 8) != 0 )
  {
    v10 = 22;
    v8 = 22;
  }
  else
  {
    PsGetPagePriorityThread(a3);
    DefaultPagePriority = MmGetDefaultPagePriority();
    v13 = DefaultPagePriority;
    v14 = DefaultPagePriority - 1;
    if ( v12 > DefaultPagePriority - 1 )
      v12 = DefaultPagePriority;
    if ( v12 <= v14 )
    {
      v8 = 2;
      v10 = 2;
    }
    else
    {
      if ( (dword_140C50590 & 0x10) != 0 && !a2 )
      {
        v9 = 1;
        v10 = 14;
      }
      v15 = a1;
      v16 = 314159LL;
      v17 = 8LL;
      do
      {
        v18 = *v15;
        v15 += 8;
        v16 = *(v15 - 1)
            + 37
            * (*(v15 - 2)
             + 37
             * (*(v15 - 3)
              + 37 * (*(v15 - 4) + 37 * (*(v15 - 5) + 37 * (*(v15 - 6) + 37 * (*(v15 - 7) + 37 * (v18 + 37 * v16)))))));
        --v17;
      }
      while ( v17 );
      v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v41, 0xB0u, (__int64)v15, v38);
      v20 = (unsigned __int64)(PfpGetPageListCount((__int64)&v41[6] + 8, 0, 7u) << 12) >> 18;
      v22 = (unsigned __int64)(PfpGetPageListCount((__int64)&v41[6] + 8, v13, v21) << 12) >> 18;
      PageListCount = PfpGetPageListCount((__int64)&v41[6] + 8, v14, v23);
      CurrentThread = KeGetCurrentThread();
      v26 = (unsigned __int64)(PageListCount << 12) >> 18;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&stru_140C50520, 1u);
      v27 = PfSnPrefetchCacheEntryGet((__int64)&unk_140C504F8, *(_OWORD **)&v38[1], v16, &v37);
      v28 = (_DWORD *)v27;
      if ( v27 )
      {
        if ( v37 )
        {
          v8 = 13;
          if ( v9 >= 2 )
            v10 = 13;
        }
        else
        {
          v29 = v19 - *(_DWORD *)(v27 + 108);
          v30 = *(_DWORD *)(v27 + 112);
          v31 = v9 & 0xFFFFFFFE;
          v8 = (v29 < v30) + 4;
          if ( v29 >= v30 )
            v31 = v9;
          v9 = v31;
          if ( v31 >= 2 )
          {
            v10 = 4;
            if ( (dword_140C502F0 & 2) == 0 )
            {
              if ( v29 >= 0x1B7740 )
              {
                if ( v29 >= 0x36EE80 )
                  v32 = v20 - v28[26];
                else
                  v32 = v26 - v28[25];
              }
              else
              {
                v32 = v22 - v28[24];
              }
              if ( !v32 )
              {
                v9 = v31 & 0xFFFFFFFD;
                v10 = 7;
              }
            }
          }
        }
        v28[27] = v19;
        v28[24] = v22;
        v28[25] = v26;
        v28[26] = v20;
      }
      else
      {
        v10 = 3;
      }
      ExReleaseResourceLite(&stru_140C50520);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v33, v34, v35);
    }
  }
  *v39 = v8;
  *v40 = v10;
  return v9;
}
