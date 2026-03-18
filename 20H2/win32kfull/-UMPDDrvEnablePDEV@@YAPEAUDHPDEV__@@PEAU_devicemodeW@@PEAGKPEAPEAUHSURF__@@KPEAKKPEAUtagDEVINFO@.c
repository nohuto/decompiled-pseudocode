/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C010BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C007092C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0071EF0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0072114 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0108DA0 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C010C450 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C011BC88 (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
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
  UMPDOBJ *v14; // rbx
  unsigned int v15; // r12d
  char *v17; // rax
  char *KernelPtr; // rax
  char *v19; // rax
  char *v20; // r13
  PVOID v21; // r12
  PVOID v22; // r15
  PVOID v23; // rdi
  size_t v24; // r8
  ULONG64 v25; // rcx
  size_t v26; // rax
  size_t v27; // rax
  void *v28; // rdx
  void *v29; // rdi
  char *v30; // rax
  size_t v31; // [rsp+20h] [rbp-168h]
  char *Size; // [rsp+38h] [rbp-150h]
  UMPDOBJ *v34; // [rsp+48h] [rbp-140h] BYREF
  PVOID pv; // [rsp+50h] [rbp-138h]
  PVOID v36; // [rsp+58h] [rbp-130h]
  PVOID v37; // [rsp+60h] [rbp-128h]
  void *v38; // [rsp+68h] [rbp-120h]
  struct DHPDEV__ *v39; // [rsp+70h] [rbp-118h] BYREF
  void *Src; // [rsp+78h] [rbp-110h]
  unsigned int *v41; // [rsp+80h] [rbp-108h]
  _QWORD v42[22]; // [rsp+90h] [rbp-F8h] BYREF

  v37 = a2;
  v41 = a6;
  v38 = a8;
  v36 = a10;
  pv = a11;
  v39 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  memset(v42, 0, sizeof(v42));
  v14 = v34;
  if ( !v34 )
    goto LABEL_11;
  v42[0] = 176LL;
  v42[2] = *(_QWORD *)v34;
  v42[3] = *((_QWORD *)a9 + 225);
  v42[4] = a1;
  v42[5] = v37;
  LODWORD(v42[6]) = a3;
  v42[7] = a4;
  LODWORD(v42[8]) = a5;
  LODWORD(v42[10]) = a7;
  v42[12] = *((_QWORD *)a9 + 2);
  v42[13] = v36;
  v42[14] = pv;
  LODWORD(v42[15]) = *((_DWORD *)v34 + 106);
  if ( LODWORD(v42[15]) )
    HIDWORD(v42[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  else
    v42[15] = 0LL;
  v15 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
  if ( a4 )
  {
    if ( a3 <= 0x1FFFFFFF )
    {
      v42[7] = UMPDOBJ::_AllocUserMem(v14, 8 * a3, 1);
      if ( !v42[7] )
        goto LABEL_11;
    }
  }
  if ( a6 )
  {
    v42[9] = UMPDOBJ::_AllocUserMem(v14, a5, 1);
    if ( !v42[9] )
      goto LABEL_11;
  }
  if ( v38 )
  {
    v42[11] = UMPDOBJ::_AllocUserMem(v14, a7, 1);
    if ( !v42[11] )
      goto LABEL_11;
  }
  v17 = (char *)UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
  if ( !v17 )
    goto LABEL_11;
  v42[17] = v17;
  v42[18] = v17 + 0x10000;
  v42[19] = v17 + 0x20000;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v42[4], v15) )
    goto LABEL_11;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v42[5]) )
    goto LABEL_11;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v42[13]) )
    goto LABEL_11;
  LODWORD(v31) = 8;
  if ( (unsigned int)UMPDOBJ::Thunk(v14, v42, 0xB0u, &v39, v31) == -1 )
    goto LABEL_11;
  if ( a4 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(v14, (char *)v42[7]);
    memmove(a4, KernelPtr, 8LL * a3);
  }
  if ( a6 )
  {
    v19 = UMPDOBJ::GetKernelPtr(v14, (char *)v42[9]);
    memmove(a6, v19, a5);
    if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
    {
      SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000u);
      LODWORD(v42[20]) = *((_QWORD *)a6 + 35) != 0LL;
      HIDWORD(v42[20]) = *((_QWORD *)a6 + 36) != 0LL;
      LODWORD(v42[21]) = *((_QWORD *)a6 + 37) != 0LL;
      *((_QWORD *)a6 + 35) = 0LL;
      *((_QWORD *)a6 + 36) = 0LL;
      *((_QWORD *)a6 + 37) = 0LL;
      v20 = UMPDOBJ::GetKernelPtr(v14, (char *)v42[17]);
      Size = UMPDOBJ::GetKernelPtr(v14, (char *)v42[18]);
      Src = UMPDOBJ::GetKernelPtr(v14, (char *)v42[19]);
      v21 = 0LL;
      pv = 0LL;
      v22 = 0LL;
      v36 = 0LL;
      v23 = 0LL;
      v37 = 0LL;
      if ( LODWORD(v42[20]) )
      {
        v21 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        pv = v21;
      }
      if ( HIDWORD(v42[20]) )
      {
        v22 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v36 = v22;
      }
      if ( LODWORD(v42[21]) )
      {
        v23 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v37 = v23;
      }
      if ( v21 )
      {
        v24 = a6[68] * a6[69];
        if ( *((_DWORD *)v14 + 106) )
        {
          memmove(v21, v20, v24);
          if ( v22 )
            memmove(v22, Size, a6[68] * a6[69]);
          if ( v23 )
            memmove(v23, Src, a6[68] * a6[69]);
        }
        else
        {
          v25 = (ULONG64)&v20[a6[68] * a6[69]];
          if ( v25 < (unsigned __int64)v20 || v25 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v21, v20, v24);
          if ( v22 )
          {
            v26 = a6[68] * a6[69];
            if ( &Size[v26] < Size || (unsigned __int64)&Size[v26] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v22, Size, v26);
          }
          if ( v23 )
          {
            v27 = a6[68] * a6[69];
            v28 = Src;
            if ( (char *)Src + v27 < Src || (unsigned __int64)Src + v27 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v23, v28, v27);
          }
        }
        *((_QWORD *)a6 + 35) = v21;
        *((_QWORD *)a6 + 36) = v22;
        *((_QWORD *)a6 + 37) = v23;
      }
      else
      {
        a6[59] = 17;
      }
    }
  }
  v29 = v38;
  if ( v38 )
  {
    v30 = UMPDOBJ::GetKernelPtr(v14, (char *)v42[11]);
    if ( !*((_QWORD *)v30 + 37) )
    {
      if ( v39 )
        UMPDDrvDisablePDEV(v39);
LABEL_11:
      XUMPDOBJ::~XUMPDOBJ(&v34);
      return 0LL;
    }
    memmove(v29, v30, a7);
  }
  XUMPDOBJ::~XUMPDOBJ(&v34);
  return v39;
}
