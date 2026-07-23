/*
 * XREFs of Amd64OverflowHandler @ 0x1404DDCF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x14051BDC0 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x140565720 (PoGetProcessorIdleAccounting.c)
 */

int __fastcall Amd64OverflowHandler(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbx
  _DWORD *v4; // r14
  unsigned int v5; // r15d
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // r12d
  LARGE_INTEGER v17; // rax
  __int64 v18; // r8
  LARGE_INTEGER v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-10h] BYREF
  int v24; // [rsp+78h] [rbp+48h]
  __int64 v25; // [rsp+80h] [rbp+50h]
  __int64 v26; // [rsp+88h] [rbp+58h] BYREF

  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v2 = 4LL;
  v24 = 0x7FFFFFFF;
  v4 = (_DWORD *)(Amd64CounterStatus + ((unsigned __int64)(unsigned int)v1 << 6) + 12);
  v5 = -1073676288;
  v25 = 4LL;
  do
  {
    if ( !*(v4 - 3) )
    {
      v6 = (unsigned int)*(v4 - 2);
      v7 = __readmsr(v5 + 4);
      v1 = (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) & 0xFFFFFFFFFFFFLL;
      if ( v1 < 0xFFFF80000001LL )
      {
        v8 = *v4 & 0xFFAFFFFF;
        __writemsr(v5, v8);
        if ( (_DWORD)v6 )
        {
          KeProfileInterruptWithSource(a1, (unsigned int)v6);
          LODWORD(v13) = *(v4 - 1);
          v24 = v13;
        }
        else
        {
          v26 = 0LL;
          PerformanceFrequency.QuadPart = 0LL;
          if ( HalpTimerProfilingCallback )
            HalpTimerProfilingCallback(a1, HIDWORD(v8), v6);
          else
            KeProfileInterruptWithSource(a1, 0LL);
          v9 = HalpProfileData;
          v10 = 32LL * KeGetPcr()->Prcb.Number;
          v11 = *(_DWORD *)(v10 + HalpProfileData + 24);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v10 + HalpProfileData + 20);
            LODWORD(v13) = *(_DWORD *)(v10 + HalpProfileData + 16);
            v24 = v13;
            if ( v12 )
            {
              v15 = v12 - 1;
              *(_DWORD *)(v10 + HalpProfileData + 20) = v15;
              if ( !v15 )
              {
                *(_DWORD *)(v10 + v9 + 20) = 0x2710 / v11;
                v16 = 0x2710 / v11;
                if ( !(0x2710 / v11) )
                {
                  *(_DWORD *)(v10 + v9 + 20) = 1;
                  v16 = 1;
                }
                PoGetProcessorIdleAccounting(&v26, 0x2710 % v11);
                if ( v26 == *(_QWORD *)(v10 + v9 + 8) )
                {
                  v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v18 = HalpProfileData;
                  v19 = v17;
                  v20 = v17.QuadPart - *(_QWORD *)(v10 + HalpProfileData);
                  if ( v17.QuadPart != *(_QWORD *)(v10 + HalpProfileData) )
                  {
                    v21 = v16 * (unsigned int)v13 * (unsigned __int64)*(unsigned int *)(v10 + HalpProfileData + 24);
                    *(LARGE_INTEGER *)(v10 + HalpProfileData) = v19;
                    v13 = PerformanceFrequency.QuadPart * (v21 / v20) / 0x989680;
                    if ( v13 < 0x1000 )
                      v13 = 4096LL;
                    if ( v13 > 0x7FFFFFFF )
                      LODWORD(v13) = 0x7FFFFFFF;
                    v24 = v13;
                    *(_DWORD *)(v10 + v18 + 16) = v13;
                  }
                }
                else
                {
                  *(_QWORD *)(v10 + v9 + 8) = v26;
                  *(LARGE_INTEGER *)(v10 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
                }
              }
            }
            else
            {
              v14 = 0x2710 / v11;
              if ( !(0x2710 / v11) )
                v14 = 1;
              *(_DWORD *)(v10 + HalpProfileData + 20) = v14;
              PoGetProcessorIdleAccounting(&v26, 0x2710 % v11);
              *(_QWORD *)(v10 + v9 + 8) = v26;
              *(LARGE_INTEGER *)(v10 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
            }
          }
          else
          {
            LODWORD(v13) = v24;
          }
          v2 = v25;
        }
        __writemsr(v5 + 4, -(__int64)(unsigned int)v13);
        v1 = (unsigned int)*v4 | 0x500000LL;
        __writemsr(v5, v1);
      }
    }
    ++v5;
    v4 += 4;
    v25 = --v2;
  }
  while ( v2 );
  return v1;
}
