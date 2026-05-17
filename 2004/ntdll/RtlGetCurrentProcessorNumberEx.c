/*
 * XREFs of RtlGetCurrentProcessorNumberEx @ 0x1800A1AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlGetCurrentProcessorNumberEx(_WORD *_RCX)
{
  _WORD *v1; // r8
  char v2; // zf
  unsigned __int32 v3; // eax

  if ( MEMORY[0x7FFE0295] )
  {
    v1 = _RCX;
    __asm { rdpid   rcx }
LABEL_5:
    *v1 = (unsigned int)_RCX >> 8;
    v1[1] = (unsigned __int8)_RCX;
    return;
  }
  if ( MEMORY[0x7FFE0294] )
  {
    v1 = _RCX;
    __asm { rdtscp }
    goto LABEL_5;
  }
  v3 = __segmentlimit(0x53u);
  if ( v2 )
  {
    *_RCX = v3 & 0x3FF;
    _RCX[1] = v3 >> 14;
  }
  else
  {
    *(_DWORD *)_RCX = 0;
    NtGetCurrentProcessorNumberEx();
  }
}
