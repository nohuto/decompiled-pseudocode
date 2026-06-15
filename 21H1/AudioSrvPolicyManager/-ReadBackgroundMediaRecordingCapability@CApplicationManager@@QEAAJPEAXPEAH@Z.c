/*
 * XREFs of ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x1800231D8
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundMediaRecordingCapability(
        CApplicationManager *this,
        void *a2,
        int *a3)
{
  int v4; // eax
  signed int v5; // r9d
  CApplicationManager *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  *a3 = 0;
  LOBYTE(v7) = 0;
  v4 = CapabilityCheck(a2, L"backgroundMediaRecording", &v7);
  v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v5 = v4;
  if ( v5 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v5);
  }
  if ( (_BYTE)v7 )
    *a3 = 1;
  return 0LL;
}
