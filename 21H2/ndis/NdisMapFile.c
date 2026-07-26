/*
 * XREFs of NdisMapFile @ 0x1C013B890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  int v6; // eax
  void *v7; // rax
  char v8[4]; // [rsp+28h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x14u,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids);
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    v6 = -1073676259;
  }
  else
  {
    v7 = *(void **)FileHandle;
    *((_BYTE *)FileHandle + 16) = 1;
    *MappedBuffer = v7;
    v6 = 0;
  }
  *Status = v6;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v6;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x15u,
      (struct _GUID *)&WPP_ef8c4e18cb8338102bd8f68f23a0f982_Traceguids,
      *(_DWORD *)v8);
  }
}
