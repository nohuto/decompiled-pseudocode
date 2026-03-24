/*
 * XREFs of Command_ReleaseHardware @ 0x1C0074624
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0075D30 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     XilCommand_FreeResources @ 0x1C002FA3C (XilCommand_FreeResources.c)
 */

void __fastcall Command_ReleaseHardware(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdx
  void *v4; // rcx

  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    XilCommand_FreeResources(a1);
    if ( *(_QWORD *)(a1 + 96) != a1 + 96 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v2,
        7,
        14,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
    }
    if ( *(_QWORD *)(a1 + 80) != a1 + 80 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v2,
        7,
        15,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
    }
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 && v3 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
    {
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v4 = *(void **)(a1 + 72);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x49434858u);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
  }
  *(_DWORD *)(a1 + 32) = 2;
}
