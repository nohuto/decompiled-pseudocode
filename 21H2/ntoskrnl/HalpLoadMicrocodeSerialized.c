/*
 * XREFs of HalpLoadMicrocodeSerialized @ 0x14090A314
 * Callers:
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     HalpMcUpdateMicrocode @ 0x1403B607C (HalpMcUpdateMicrocode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void HalpLoadMicrocodeSerialized()
{
  ULONG ActiveProcessorCount; // eax
  char v1; // di
  unsigned int *v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v1 = 0;
  if ( ActiveProcessorCount )
  {
    v2 = KiProcessorIndexToNumberMappingTable;
    v3 = ActiveProcessorCount;
    do
    {
      v4 = *v2;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
      Affinity.Mask = 1LL << (v4 & 0x3F);
      if ( v1 )
      {
        KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      }
      else
      {
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v1 = 1;
      }
      HalpMcUpdateMicrocode(v6, v5, v7);
      ++v2;
      --v3;
    }
    while ( v3 );
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
}
