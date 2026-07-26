/*
 * XREFs of NdisGetDriverHandle @ 0x1C0097E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall NdisGetDriverHandle(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Fu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  result = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(result + 3760);
  *a2 = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             6u,
             0x20u,
             (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
             a1,
             v5);
  return result;
}
