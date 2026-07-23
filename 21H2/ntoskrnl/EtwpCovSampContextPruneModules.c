/*
 * XREFs of EtwpCovSampContextPruneModules @ 0x1409444A4
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1409435F0 (EtwpCovSampContextGetModule.c)
 *     EtwpCoverageSamplerQuery @ 0x1409465F4 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     PsGetCurrentThreadId @ 0x140228610 (PsGetCurrentThreadId.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpCovSampModuleCleanup @ 0x140945448 (EtwpCovSampModuleCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall EtwpCovSampContextPruneModules(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r14
  __int64 *i; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _OWORD *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r13
  struct _KTHREAD *v20; // rax
  __int128 *v21; // r11
  __int128 *v22; // rax
  char *v23; // r10
  bool v24; // zf
  int v25; // r9d
  char *j; // rdx
  _QWORD *v27; // r15
  int v28; // r9d
  _QWORD *k; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  _OWORD **v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  __int64 v39; // [rsp+28h] [rbp-89h]
  __int128 v40; // [rsp+30h] [rbp-81h] BYREF
  __int128 v41; // [rsp+40h] [rbp-71h] BYREF
  _OWORD v42[8]; // [rsp+58h] [rbp-59h] BYREF

  result = *(_DWORD *)(a1 + 16) >> 1;
  v41 = 0LL;
  v40 = 0LL;
  if ( *(_DWORD *)(a1 + 732) > (unsigned int)result || *(_DWORD *)(a1 + 1124) > (int)result )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 1128),
                             (signed __int32)PsGetCurrentThreadId(),
                             0);
    if ( !(_DWORD)result )
    {
      v3 = 8LL;
      v4 = v42;
      v5 = 8LL;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
        --v5;
      }
      while ( v5 );
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (volatile signed __int64 *)(a1 + 664);
      ExAcquirePushLockSharedEx(a1 + 664, 0LL);
      for ( i = *(__int64 **)(a1 + 712); i != (__int64 *)(a1 + 712); i = (__int64 *)*i )
      {
        if ( *(i - 1) == 1 && !*((_DWORD *)i + 15) )
        {
          v9 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 16);
          if ( v9 >= 0x100 )
            v10 = ((v9 - 256) >> 8) + 4;
          else
            v10 = v9 >> 6;
          if ( (unsigned int)v10 >= 8 )
            v10 = 7LL;
          v11 = i + 2;
          v12 = &v42[v10];
          v13 = (_QWORD *)*((_QWORD *)v12 + 1);
          if ( (_OWORD *)*v13 != v12 )
LABEL_54:
            __fastfail(3u);
          *v11 = v12;
          i[3] = (__int64)v13;
          *v13 = v11;
          *((_QWORD *)v12 + 1) = v11;
        }
      }
      if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
      KeAbPostRelease(a1 + 664);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
      v17 = &v41;
      *((_QWORD *)&v41 + 1) = &v41;
      *(_QWORD *)&v41 = &v41;
      v18 = v42;
      do
      {
        if ( (_QWORD *)*v18 != v18 )
        {
          *(_QWORD *)v17 = *v18;
          *(_QWORD *)(*v18 + 8LL) = *((_QWORD *)&v41 + 1);
          *((_QWORD *)&v41 + 1) = v18[1];
          **((_QWORD **)&v41 + 1) = &v41;
          v17 = (__int128 *)*((_QWORD *)&v41 + 1);
        }
        v18 += 2;
        --v3;
      }
      while ( v3 );
      v19 = 0LL;
      *((_QWORD *)&v40 + 1) = &v40;
      *(_QWORD *)&v40 = &v40;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
      v21 = (__int128 *)v41;
      *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
      while ( v21 != &v41 )
      {
        v22 = v21;
        v23 = (char *)v21 - 88;
        v24 = *((_QWORD *)v21 - 3) == 1LL;
        v21 = *(__int128 **)v21;
        *((_QWORD *)v22 + 1) = v22;
        *(_QWORD *)v22 = v22;
        if ( v24 && !*((_DWORD *)v23 + 33) && ++v19 > (unsigned __int64)*(unsigned int *)(a1 + 16) )
        {
          if ( (*((_DWORD *)v23 + 30) & 0x40000) == 0 )
          {
            v25 = *(_DWORD *)(a1 + 684) >> 5;
            v39 = *((_QWORD *)v23 + 1) & (-1LL << (*(_DWORD *)(a1 + 684) & 0x1F));
            for ( j = (char *)(*(_QWORD *)(a1 + 688)
                             + 8LL
                             * ((37
                               * (BYTE6(v39)
                                + 37
                                * (BYTE5(v39)
                                 + 37
                                 * (BYTE4(v39)
                                  + 37
                                  * (BYTE3(v39)
                                   + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
                               + HIBYTE(v39)) & (unsigned int)(v25 - 1))); (*(_QWORD *)j & 1) == 0; j = *(char **)j )
            {
              if ( *(char **)j == v23 )
              {
                *(_QWORD *)j = *(_QWORD *)v23;
                --*(_DWORD *)(a1 + 680);
                break;
              }
            }
            *(_QWORD *)v23 = 0LL;
          }
          v27 = v23 + 16;
          if ( *((_QWORD *)v23 + 2) )
          {
            v28 = *(_DWORD *)(a1 + 700) >> 5;
            v39 = *((_QWORD *)v23 + 3) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
            for ( k = (_QWORD *)(*(_QWORD *)(a1 + 704)
                               + 8LL
                               * ((37
                                 * (BYTE6(v39)
                                  + 37
                                  * (BYTE5(v39)
                                   + 37
                                   * (BYTE4(v39)
                                    + 37
                                    * (BYTE3(v39)
                                     + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
                                 + HIBYTE(v39)) & (unsigned int)(v28 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
            {
              if ( (_QWORD *)*k == v27 )
              {
                *k = *v27;
                --*(_DWORD *)(a1 + 696);
                break;
              }
            }
            *v27 = 0LL;
          }
          v30 = v23 + 72;
          v31 = *((_QWORD *)v23 + 9);
          if ( *(char **)(v31 + 8) != v23 + 72 )
            goto LABEL_54;
          v32 = (_QWORD *)*((_QWORD *)v23 + 10);
          if ( (_QWORD *)*v32 != v30 )
            goto LABEL_54;
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          v33 = (_OWORD **)*((_QWORD *)&v40 + 1);
          --*(_DWORD *)(a1 + 728);
          if ( *v33 != &v40 )
            goto LABEL_54;
          *((_QWORD *)v23 + 10) = v33;
          *v30 = &v40;
          *v33 = v30;
          *((_QWORD *)&v40 + 1) = v23 + 72;
        }
      }
      *(_DWORD *)(a1 + 732) = 0;
      *(_DWORD *)(a1 + 1124) = 0;
      *(_QWORD *)(a1 + 672) = 0LL;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 664);
      KeAbPostRelease(a1 + 664);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
      while ( 1 )
      {
        result = v40;
        if ( (__int128 *)v40 == &v40 )
          break;
        if ( *(__int128 **)(v40 + 8) != &v40 )
          goto LABEL_54;
        v37 = *(_QWORD *)v40;
        if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != (_QWORD)v40 )
          goto LABEL_54;
        *(_QWORD *)&v40 = *(_QWORD *)v40;
        v38 = (_QWORD *)(result - 72);
        *(_QWORD *)(v37 + 8) = &v40;
        *(_QWORD *)(result - 72 + 64) = 0LL;
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        EtwpCovSampModuleCleanup(result - 72);
        ExFreePoolWithTag(v38, 0x56777445u);
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1128), 0);
    }
  }
  return result;
}
