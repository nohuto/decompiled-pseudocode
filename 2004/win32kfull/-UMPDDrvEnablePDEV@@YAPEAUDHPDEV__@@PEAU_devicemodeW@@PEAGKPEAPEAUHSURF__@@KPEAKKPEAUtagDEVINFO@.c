/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EDDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00D8188 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00ED890 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C00EE13C (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00EEBB0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00EEDC0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C011B28C (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  __int64 v12; // r13
  UMPDOBJ *v14; // rbx
  unsigned int v15; // edi
  char *v16; // rax
  const void *KernelPtr; // rax
  const void *v18; // rax
  void *v19; // rdi
  _QWORD *v20; // rax
  char *v22; // r13
  PVOID v23; // r15
  PVOID v24; // r12
  PVOID v25; // rdi
  size_t v26; // r8
  size_t v27; // rax
  void *v28; // rdx
  size_t v29; // rax
  void *v30; // rdx
  size_t v31; // [rsp+20h] [rbp-158h]
  UMPDOBJ *v32; // [rsp+40h] [rbp-138h] BYREF
  PVOID pv; // [rsp+48h] [rbp-130h]
  PVOID v34; // [rsp+50h] [rbp-128h]
  void *v35; // [rsp+58h] [rbp-120h]
  struct DHPDEV__ *v36; // [rsp+60h] [rbp-118h] BYREF
  void *Src; // [rsp+68h] [rbp-110h]
  void *v38; // [rsp+70h] [rbp-108h]
  unsigned int *v39; // [rsp+78h] [rbp-100h]
  _QWORD v40[22]; // [rsp+80h] [rbp-F8h] BYREF

  v12 = a3;
  v34 = a2;
  v39 = a6;
  v35 = a8;
  pv = a10;
  Src = a11;
  v36 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  memset(v40, 0, sizeof(v40));
  v14 = v32;
  if ( v32 )
  {
    v40[0] = 176LL;
    v40[2] = *(_QWORD *)v32;
    v40[3] = *((_QWORD *)a9 + 225);
    v40[4] = a1;
    v40[5] = v34;
    LODWORD(v40[6]) = v12;
    v40[7] = a4;
    LODWORD(v40[8]) = a5;
    LODWORD(v40[10]) = a7;
    v40[12] = *((_QWORD *)a9 + 2);
    v40[13] = pv;
    v40[14] = Src;
    LODWORD(v40[15]) = *((_DWORD *)v32 + 106);
    if ( LODWORD(v40[15]) )
      HIDWORD(v40[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    else
      v40[15] = 0LL;
    v15 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
    if ( (!a4 || (unsigned int)v12 > 0x1FFFFFFF || (v40[7] = UMPDOBJ::_AllocUserMem(v14, 8 * (int)v12, 1)) != 0LL)
      && (!a6 || (v40[9] = UMPDOBJ::_AllocUserMem(v14, a5, 1)) != 0LL)
      && (!v35 || (v40[11] = UMPDOBJ::_AllocUserMem(v14, a7, 1)) != 0LL) )
    {
      v16 = (char *)UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
      if ( v16 )
      {
        v40[17] = v16;
        v40[18] = v16 + 0x10000;
        v40[19] = v16 + 0x20000;
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v40[4], v15) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v40[5]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v40[13]) )
            {
              LODWORD(v31) = 8;
              if ( UMPDOBJ::Thunk(v14, v40, 0xB0u, &v36, v31) != -1 )
              {
                if ( a4 )
                {
                  KernelPtr = UMPDOBJ::GetKernelPtr(v14, (void *)v40[7]);
                  memmove(a4, KernelPtr, 8 * v12);
                }
                if ( a6 )
                {
                  v18 = UMPDOBJ::GetKernelPtr(v14, (void *)v40[9]);
                  memmove(a6, v18, a5);
                  if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
                  {
                    SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000u);
                    LODWORD(v40[20]) = *((_QWORD *)a6 + 35) != 0LL;
                    HIDWORD(v40[20]) = *((_QWORD *)a6 + 36) != 0LL;
                    LODWORD(v40[21]) = *((_QWORD *)a6 + 37) != 0LL;
                    *((_QWORD *)a6 + 35) = 0LL;
                    *((_QWORD *)a6 + 36) = 0LL;
                    *((_QWORD *)a6 + 37) = 0LL;
                    v22 = (char *)UMPDOBJ::GetKernelPtr(v14, (void *)v40[17]);
                    Src = UMPDOBJ::GetKernelPtr(v14, (void *)v40[18]);
                    v38 = UMPDOBJ::GetKernelPtr(v14, (void *)v40[19]);
                    v23 = 0LL;
                    v24 = 0LL;
                    pv = 0LL;
                    v25 = 0LL;
                    v34 = 0LL;
                    if ( LODWORD(v40[20]) )
                      v23 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                    if ( HIDWORD(v40[20]) )
                    {
                      v24 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      pv = v24;
                    }
                    if ( LODWORD(v40[21]) )
                    {
                      v25 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      v34 = v25;
                    }
                    if ( v23 )
                    {
                      v26 = a6[68] * a6[69];
                      if ( &v22[v26] < v22 || (unsigned __int64)&v22[v26] > MmUserProbeAddress )
                        *(_BYTE *)MmUserProbeAddress = 0;
                      memmove(v23, v22, v26);
                      if ( v24 )
                      {
                        v27 = a6[68] * a6[69];
                        v28 = Src;
                        if ( (char *)Src + v27 < Src || (unsigned __int64)Src + v27 > MmUserProbeAddress )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v24, v28, v27);
                      }
                      if ( v25 )
                      {
                        v29 = a6[68] * a6[69];
                        v30 = v38;
                        if ( (char *)v38 + v29 < v38 || (unsigned __int64)v38 + v29 > MmUserProbeAddress )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v25, v30, v29);
                      }
                      *((_QWORD *)a6 + 35) = v23;
                      *((_QWORD *)a6 + 36) = v24;
                      *((_QWORD *)a6 + 37) = v25;
                    }
                    else
                    {
                      a6[59] = 17;
                    }
                  }
                }
                v19 = v35;
                if ( !v35 )
                  goto LABEL_25;
                v20 = UMPDOBJ::GetKernelPtr(v14, (void *)v40[11]);
                if ( v20[37] )
                {
                  memmove(v19, v20, a7);
LABEL_25:
                  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v32);
                  return v36;
                }
                if ( v36 )
                  UMPDDrvDisablePDEV(v36);
              }
            }
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v32);
  return 0LL;
}
