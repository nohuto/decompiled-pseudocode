/*
 * XREFs of ??_GIPTPEngine@@UEAAPEAXI@Z @ 0x1C01C5B00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

IPTPEngine *__fastcall IPTPEngine::`scalar deleting destructor'(IPTPEngine *this, __int64 a2, __int64 a3)
{
  *(_QWORD *)this = &IPTPEngine::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
