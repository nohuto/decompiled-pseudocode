/*
 * XREFs of ??4?$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B7DF4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063590 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *__fastcall std::shared_ptr<CVolumeUnit>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  std::_Ref_count_base *v3; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v3 = (std::_Ref_count_base *)a2[1];
  a2[1] = 0LL;
  v4 = qword_18019EAB0;
  g_RenderStreamTaperTranslator = v2;
  qword_18019EAB0 = v3;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return &g_RenderStreamTaperTranslator;
}
