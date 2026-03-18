/*
 * XREFs of PfSnCheckLoggingForThread @ 0x140356D4C
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     PfSnLogPageFault @ 0x140356CA8 (PfSnLogPageFault.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall PfSnCheckLoggingForThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned int v6; // ecx

  if ( (((a3 & 2) == 0) & (*(_BYTE *)(a1 + 1304) >> 6)) != 0 )
    return 0;
  if ( (int)PsGetIoPriorityThread(a1) < 2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 336));
    return 0;
  }
  v5 = *(_QWORD *)(v3 + 432);
  v6 = 0;
  if ( !v5 || v5 == v4 && *(_QWORD *)(v3 + 440) == *(_QWORD *)(v4 + 1152) )
    return 1;
  return v6;
}
