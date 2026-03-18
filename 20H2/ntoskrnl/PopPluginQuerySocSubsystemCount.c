/*
 * XREFs of PopPluginQuerySocSubsystemCount @ 0x1408E8618
 * Callers:
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E6F20 (PopFxInitializeSocSubsystemStaticInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056791C (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQuerySocSubsystemCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx

  result = PopFxProcessorPlugin;
  if ( PopFxProcessorPlugin )
  {
    result = (*(__int64 (__fastcall **)(__int64))(PopFxProcessorPlugin + 96))(36LL);
    if ( (_BYTE)result )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( !v4 )
        PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, 0LL);
      if ( v4 > 0x3E8 )
        PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, *(unsigned int *)(a2 + 4));
    }
  }
  return result;
}
