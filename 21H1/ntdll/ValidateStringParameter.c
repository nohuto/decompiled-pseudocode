/*
 * XREFs of ValidateStringParameter @ 0x4B2A877F
 * Callers:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 * Callees:
 *     <none>
 */

int __thiscall ValidateStringParameter(_WORD *this)
{
  if ( this && this[1] >= *this && (!*this || *((_DWORD *)this + 1)) )
    return 0;
  else
    return -1073741811;
}
