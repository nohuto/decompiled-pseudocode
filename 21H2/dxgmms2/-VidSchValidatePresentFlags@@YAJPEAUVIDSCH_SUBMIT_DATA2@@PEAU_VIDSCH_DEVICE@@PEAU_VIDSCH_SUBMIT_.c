/*
 * XREFs of ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0003B04
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C003E070 (VidSchSubmitCommandContextless.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0041CD0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x1C00035D0 (VidSchiUpdatePresentParameters.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchValidatePresentFlags(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        struct _VIDSCH_SUBMIT_FLAGS *a3)
{
  int v3; // eax
  struct _VIDSCH_GLOBAL *v5; // r14
  __int64 v7; // rcx
  int v9; // eax
  int v11; // edi
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // ecx

  v3 = *(_DWORD *)a3;
  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v7 = *((unsigned int *)a2 + 126);
  if ( (*(_DWORD *)a3 & 0x40) == 0 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v9 = v3 | 0x7000;
    }
    else
    {
      if ( (_DWORD)v7 != *((_DWORD *)a1 + 29) )
      {
        WdLogSingleEntry4(1LL, v5, a2, *((unsigned int *)a1 + 29), v7);
        ((void (__fastcall **)(_QWORD, __int64, __int64, const wchar_t *, __int64, struct _VIDSCH_DEVICE *, _QWORD, _QWORD, _QWORD))DxgCoreInterface)[85](
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid VidPnSourceId (Check 3)",
          (__int64)v5,
          a2,
          *((unsigned int *)a1 + 29),
          *((unsigned int *)a2 + 126),
          0LL);
        v9 = *(_DWORD *)a3;
        goto LABEL_5;
      }
      v9 = v3 | 0x4000;
    }
    *(_DWORD *)a3 = v9;
LABEL_5:
    *((_DWORD *)a2 + 126) = -1;
    goto LABEL_6;
  }
  v12 = *((unsigned int *)a1 + 29);
  v13 = v3 & 0xFFFFFF7F;
  *(_DWORD *)a3 = v13;
  if ( (_DWORD)v7 == -1 )
  {
    *((_DWORD *)a2 + 126) = v12;
    v14 = 4096;
  }
  else
  {
    if ( (_DWORD)v7 != (_DWORD)v12 )
    {
      WdLogSingleEntry4(1LL, v5, a2, v12, v7);
      ((void (__fastcall **)(_QWORD, __int64, __int64, const wchar_t *, __int64, struct _VIDSCH_DEVICE *, _QWORD, _QWORD, _QWORD))DxgCoreInterface)[85](
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (Check 2)",
        (__int64)v5,
        a2,
        *((unsigned int *)a1 + 29),
        *((unsigned int *)a2 + 126),
        0LL);
      return 3221225485LL;
    }
    v14 = 0x2000;
  }
  v9 = v14 | v13;
  *(_DWORD *)a3 = v9;
LABEL_6:
  if ( (v9 & 4) == 0 )
    return 0LL;
  v11 = VidSchiSetFlipDevice(
          v5,
          *((_DWORD *)a1 + 29),
          (__int64)a2,
          *((_DWORD *)a1 + 30),
          9u,
          (*(_DWORD *)a1 & 0x20000000) != 0,
          0);
  if ( v11 >= 0 )
  {
    VidSchiUpdatePresentParameters(v5, (__int64)a1);
    return 0LL;
  }
  WdLogSingleEntry0(3LL);
  return (unsigned int)v11;
}
