/*
 * XREFs of _RtlpSetProcessBacktraces@4 @ 0x4B337C27
 * Callers:
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 * Callees:
 *     _RtlControlStackTraceDataBase@12 @ 0x4B368DBE (_RtlControlStackTraceDataBase@12.c)
 */

int __thiscall RtlpSetProcessBacktraces(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v3; // ecx

  v1 = (_DWORD *)this[13];
  if ( !v1 )
    return -1073741801;
  if ( *v1 )
  {
    v3 = v1 + 2;
  }
  else
  {
    if ( v1[1] < 0xCu )
      return -1073741811;
    v3 = v1 + 2;
    if ( v1[2] || v1[3] )
      return -1073741811;
  }
  return RtlControlStackTraceDataBase(v3);
}
