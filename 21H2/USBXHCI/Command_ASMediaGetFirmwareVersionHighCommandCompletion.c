/*
 * XREFs of Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C002DC00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionHighCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  int v3; // edx

  v1 = *(__int64 **)(a1 + 48);
  v2 = *v1;
  if ( *((_BYTE *)v1 + 43) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *((unsigned __int8 *)v1 + 42);
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 16),
        v3,
        7,
        23,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
        *((_BYTE *)v1 + 42),
        *((_BYTE *)v1 + 41),
        *((_DWORD *)v1 + 10));
    }
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 328LL) |= ((unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8)) << 24;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 328LL) = -1LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 16),
        3,
        7,
        24,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
        *((_BYTE *)v1 + 43));
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
