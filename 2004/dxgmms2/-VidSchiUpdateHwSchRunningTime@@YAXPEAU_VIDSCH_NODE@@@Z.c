/*
 * XREFs of ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0039768
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B840 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C003B8EC (VidSchiProcessSuspendContextCompletedDpc.c)
 * Callees:
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00364F4 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z @ 0x1C0036F98 (-VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z.c)
 */

void __fastcall VidSchiUpdateHwSchRunningTime(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // r13d
  _QWORD *v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  int v12; // r14d
  __int64 v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  _QWORD **v20; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]

  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    if ( *((_QWORD *)a1 + 1390) )
    {
      VidSchiCalibrateHwClock(a1);
      if ( *((_QWORD *)a1 + 1396) )
      {
        v2 = **((_QWORD **)a1 + 1392);
        if ( *((_QWORD *)a1 + 1394) != v2 )
        {
          v3 = *((_DWORD *)a1 + 2789);
          if ( v3 <= HIDWORD(v2) )
          {
            v4 = *((_DWORD *)a1 + 2788);
            v5 = *((_DWORD *)a1 + 2782);
            if ( v3 != HIDWORD(v2) )
            {
              if ( v3 + 1 != HIDWORD(v2) )
                v4 = (v4 + (v5 >> 1)) % v5;
LABEL_11:
              v6 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              v7 = 0LL;
              v22 = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              do
              {
                v8 = *((_QWORD *)a1 + 1392) + 32 * (v4 + 1LL);
                if ( !*(_DWORD *)(v8 + 8) )
                {
                  v9 = *(_QWORD *)(v8 + 16);
                  if ( v9 == v7 )
                  {
                    if ( v6 )
                    {
LABEL_31:
                      v12 = *(_DWORD *)(v8 + 24);
                      v13 = *(_QWORD *)v8;
                      if ( *((_DWORD *)v6 + 36) == 1 && v12 != 1 )
                      {
                        v14 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v6[19], PerformanceFrequency.QuadPart);
                        v15 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v13, PerformanceFrequency.QuadPart);
                        if ( v15 > v14 )
                        {
                          v16 = v6[2];
                          v17 = v15 - v14;
                          v18 = *(unsigned __int16 *)(v16 + 4);
                          v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6[1] + 40LL) + 24LL)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 24) + 4LL));
                          if ( v19 )
                          {
                            v20 = *(_QWORD ***)(v19 + 8);
                            if ( (unsigned int)v18 < *(_DWORD *)(v19 + 80) )
                              v20 += v18;
                            if ( *v20 )
                              **v20 += v17;
                          }
                          v6[43] += v17;
                        }
                      }
                      v7 = v22;
                      *((_DWORD *)v6 + 36) = v12;
                      v6[19] = v13;
                    }
                  }
                  else
                  {
                    v10 = (_QWORD *)*((_QWORD *)a1 + 216);
                    while ( v10 )
                    {
                      if ( v9 == *(v10 - 8) )
                      {
                        v6 = v10 - 12;
LABEL_29:
                        v22 = *(_QWORD *)(v8 + 16);
                        goto LABEL_31;
                      }
                      if ( v9 >= *(v10 - 8) )
                        v10 = (_QWORD *)v10[1];
                      else
                        v10 = (_QWORD *)*v10;
                    }
                    v11 = (_QWORD *)*((_QWORD *)a1 + 217);
                    while ( v11 )
                    {
                      if ( v9 == *(v11 - 9) )
                      {
                        v6 = v11 - 15;
                        goto LABEL_29;
                      }
                      if ( v9 >= *(v11 - 9) )
                        v11 = (_QWORD *)v11[1];
                      else
                        v11 = (_QWORD *)*v11;
                    }
                  }
                }
                v4 = (v4 + 1) % v5;
              }
              while ( v4 != (_DWORD)v2 );
              goto LABEL_42;
            }
            if ( v4 <= (unsigned int)v2 )
              goto LABEL_11;
          }
LABEL_42:
          *((_QWORD *)a1 + 1394) = v2;
        }
      }
    }
  }
}
