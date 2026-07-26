/*
 * XREFs of NdisUnmapFile @ 0x1C00BDD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 */

void __stdcall NdisUnmapFile(NDIS_HANDLE FileHandle)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x16u,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids);
  *((_BYTE *)FileHandle + 16) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x17u,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids);
}
