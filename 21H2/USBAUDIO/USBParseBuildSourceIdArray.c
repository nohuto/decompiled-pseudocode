/*
 * XREFs of USBParseBuildSourceIdArray @ 0x1C002FF10
 * Callers:
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C0030560 (USBParseSelectorUnit.c)
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 * Callees:
 *     Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610 (Feature_3207179578__private_IsEnabledDeviceUsage.c)
 */

_DWORD *__fastcall USBParseBuildSourceIdArray(unsigned int a1, unsigned __int8 *a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // r8
  __int64 v5; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rcx
  int v8; // eax

  v3 = a1;
  if ( !(unsigned int)Feature_3207179578__private_IsEnabledDeviceUsage() || (v4 = 0LL, (_DWORD)v3) )
  {
    v5 = v3;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v3, 0x41627845u);
    v4 = PoolWithTag;
    if ( PoolWithTag && (_DWORD)v3 )
    {
      v7 = PoolWithTag;
      do
      {
        v8 = *a2++;
        *v7++ = v8;
        --v5;
      }
      while ( v5 );
    }
  }
  return v4;
}
