/*
 * XREFs of ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004FF0
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C00358C0 (VidSchSubmitCommandContextless.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C003A0B0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C007E4E0 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0002924 (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x1C00035C0 (VidSchiUpdatePresentParameters.c)
 */

__int64 __fastcall VidSchValidatePresentFlags(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        struct _VIDSCH_SUBMIT_FLAGS *a3)
{
  int v3; // eax
  struct _VIDSCH_GLOBAL *v5; // r14
  int v7; // ecx
  int v9; // eax
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax

  v3 = *(_DWORD *)a3;
  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 126);
  if ( (*(_DWORD *)a3 & 0x40) == 0 )
  {
    if ( v7 == -1 )
    {
      v9 = v3 | 0x7000;
    }
    else
    {
      if ( v7 != *((_DWORD *)a1 + 29) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdAssertion();
        v16[3] = v5;
        v16[4] = a2;
        v16[5] = *((unsigned int *)a1 + 29);
        v16[6] = *((unsigned int *)a2 + 126);
        WdLogEvent5_WdAssertion(v16);
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
  v12 = *((_DWORD *)a1 + 29);
  v13 = v3 & 0xFFFFFF7F;
  *(_DWORD *)a3 = v13;
  if ( v7 == -1 )
  {
    *((_DWORD *)a2 + 126) = v12;
    v14 = 4096;
  }
  else
  {
    if ( v7 != v12 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion();
      v15[3] = v5;
      v15[4] = a2;
      v15[5] = *((unsigned int *)a1 + 29);
      v15[6] = *((unsigned int *)a2 + 126);
      WdLogEvent5_WdAssertion(v15);
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
  v17 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v17);
  return (unsigned int)v11;
}
