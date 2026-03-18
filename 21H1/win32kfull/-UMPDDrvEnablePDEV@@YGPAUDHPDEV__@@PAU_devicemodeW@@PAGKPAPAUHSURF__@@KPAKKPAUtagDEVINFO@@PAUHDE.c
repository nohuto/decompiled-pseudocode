/*
 * XREFs of ?UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x20B9D7
 * Callers:
 *     <none>
 * Callees:
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z @ 0x20AAA2 (-ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z.c)
 *     ?UMPDDrvDisablePDEV@@YGXPAUDHPDEV__@@@Z @ 0x20B4A8 (-UMPDDrvDisablePDEV@@YGXPAUDHPDEV__@@@Z.c)
 */

struct DHPDEV__ *__stdcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        void *a3,
        HSURF *a4,
        size_t a5,
        void *a6,
        void *a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  UMPDOBJ *v11; // esi
  PVOID v12; // edx
  char *v13; // eax
  char *KernelPtr; // eax
  char *v15; // eax
  size_t v16; // edx
  void *v17; // ecx
  PVOID v18; // ecx
  size_t v19; // edx
  PVOID v20; // ecx
  size_t v21; // edx
  PVOID v22; // eax
  char *v23; // eax
  size_t v25; // [esp-4h] [ebp-D4h]
  size_t v26; // [esp-4h] [ebp-D4h]
  volatile unsigned int *v27; // [esp+0h] [ebp-D0h]
  unsigned int v28; // [esp+4h] [ebp-CCh]
  UMPDOBJ *v29; // [esp+24h] [ebp-ACh] BYREF
  struct DHPDEV__ *v30; // [esp+28h] [ebp-A8h] BYREF
  UMPDOBJ *v31; // [esp+2Ch] [ebp-A4h]
  PVOID v32; // [esp+30h] [ebp-A0h]
  void *v33; // [esp+34h] [ebp-9Ch]
  size_t MaxCount; // [esp+38h] [ebp-98h]
  void *v35; // [esp+3Ch] [ebp-94h]
  void *Src; // [esp+40h] [ebp-90h]
  PVOID v37; // [esp+44h] [ebp-8Ch]
  _DWORD v38[28]; // [esp+48h] [ebp-88h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B8h] [ebp-18h]

  Src = a1;
  v33 = a3;
  v37 = a4;
  MaxCount = a5;
  v32 = a7;
  v35 = a10;
  v30 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  memset(v38, 0, 0x6Cu);
  v11 = v29;
  v31 = v29;
  if ( !v29 )
    goto LABEL_52;
  v38[0] = 108;
  v38[1] = 0;
  v38[4] = *(_DWORD *)v29;
  v38[5] = (_DWORD)a9[277];
  v38[6] = Src;
  v38[7] = a2;
  v38[8] = v33;
  v12 = v37;
  v38[9] = v37;
  v38[10] = MaxCount;
  v38[12] = v32;
  v38[14] = (_DWORD)a9[3];
  v38[15] = v35;
  v38[16] = a11;
  v38[17] = *((_DWORD *)v29 + 58);
  if ( v38[17] )
  {
    v38[18] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v12 = v37;
  }
  else
  {
    v38[18] = 0;
  }
  Src = Src ? (void *)(*((unsigned __int16 *)Src + 34) + *((unsigned __int16 *)Src + 35)) : 0;
  if ( v12 )
  {
    if ( (unsigned int)v33 <= 0x3FFFFFFF )
    {
      v38[9] = UMPDOBJ::_AllocUserMem(v11, (char *)(4 * (_DWORD)v33), 1);
      if ( !v38[9] )
        goto LABEL_52;
    }
  }
  if ( a6 )
  {
    v38[11] = UMPDOBJ::_AllocUserMem(v11, (char *)MaxCount, 1);
    if ( !v38[11] )
      goto LABEL_52;
  }
  if ( a8 )
  {
    v38[13] = UMPDOBJ::_AllocUserMem(v11, (char *)a7, 1);
    if ( !v38[13] )
      goto LABEL_52;
  }
  v13 = UMPDOBJ::_AllocUserMem(v11, (char *)&loc_2FFFE + 2, 1);
  if ( !v13 )
    goto LABEL_52;
  v38[21] = v13;
  v38[22] = v13 + 0x10000;
  v38[23] = (char *)&loc_20000 + (_DWORD)v13;
  if ( !UMPDOBJ::ThunkMemBlock(v11, (void **)&v38[6], Src)
    || !UMPDOBJ::ThunkStringW(v11, (unsigned __int16 **)&v38[7])
    || !UMPDOBJ::ThunkStringW(v11, (unsigned __int16 **)&v38[15])
    || UMPDOBJ::Thunk(v11, v38, 0x6Cu, &v30, (char *)4) == -1 )
  {
    goto LABEL_52;
  }
  if ( v37 )
  {
    v25 = 4 * (_DWORD)v33;
    KernelPtr = UMPDOBJ::GetKernelPtr(v11, (char *)v38[9]);
    memcpy(v37, KernelPtr, v25);
  }
  if ( a6 )
  {
    v26 = MaxCount;
    v15 = UMPDOBJ::GetKernelPtr(v11, (char *)v38[11]);
    memcpy(a6, v15, v26);
    if ( *((_DWORD *)a6 + 59) == 18 && *((_DWORD *)a6 + 68) <= 0x100u && *((_DWORD *)a6 + 69) <= 0x100u )
    {
      SETFLAG((volatile signed __int32 *)a9 + 6, 1, 0x400000, v27, v28);
      v38[24] = *((_DWORD *)a6 + 70) != 0;
      v38[25] = *((_DWORD *)a6 + 71) != 0;
      v38[26] = *((_DWORD *)a6 + 72) != 0;
      *((_DWORD *)a6 + 70) = 0;
      *((_DWORD *)a6 + 71) = 0;
      *((_DWORD *)a6 + 72) = 0;
      Src = UMPDOBJ::GetKernelPtr(v11, (char *)v38[21]);
      MaxCount = (size_t)UMPDOBJ::GetKernelPtr(v11, (char *)v38[22]);
      v33 = UMPDOBJ::GetKernelPtr(v11, (char *)v38[23]);
      v35 = 0;
      v32 = 0;
      v37 = 0;
      if ( v38[24] )
        v35 = EngAllocUserMem(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69), 0x706D7547u);
      if ( v38[25] )
        v32 = EngAllocUserMem(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69), 0x706D7547u);
      if ( v38[26] )
        v37 = EngAllocUserMem(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69), 0x706D7547u);
      if ( v35 )
      {
        ms_exc.registration.TryLevel = 0;
        v16 = *((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69);
        v17 = v35;
        if ( (char *)Src + v16 < Src || (v11 = v31, v17 = v35, (unsigned int)Src + v16 > _MmUserProbeAddress) )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v17, Src, v16);
        v18 = v32;
        if ( v32 )
        {
          v19 = *((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69);
          v11 = v31;
          if ( v19 + MaxCount < MaxCount || (v18 = v32, v19 + MaxCount > _MmUserProbeAddress) )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v18, (const void *)MaxCount, v19);
        }
        v20 = v37;
        if ( v37 )
        {
          v21 = *((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69);
          v11 = v31;
          if ( (char *)v33 + v21 < v33 || (v20 = v37, (unsigned int)v33 + v21 > _MmUserProbeAddress) )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v20, v33, v21);
          v20 = v37;
        }
        ms_exc.registration.TryLevel = -2;
        v22 = v32;
        *((_DWORD *)a6 + 70) = v35;
        *((_DWORD *)a6 + 71) = v22;
        *((_DWORD *)a6 + 72) = v20;
      }
      else
      {
        *((_DWORD *)a6 + 59) = 17;
      }
    }
  }
  if ( !a8 )
  {
LABEL_55:
    XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v29);
    return v30;
  }
  v23 = UMPDOBJ::GetKernelPtr(v11, (char *)v38[13]);
  if ( *((_DWORD *)v23 + 73) )
  {
    memcpy(a8, v23, (size_t)a7);
    goto LABEL_55;
  }
  if ( v30 )
    UMPDDrvDisablePDEV(v30);
LABEL_52:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v29);
  return 0;
}
