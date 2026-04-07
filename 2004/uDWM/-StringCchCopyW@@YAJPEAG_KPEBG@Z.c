/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003C074
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18003B8B8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18003BF7C (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18007DC48 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x18009E1E0 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18003C0B8 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
