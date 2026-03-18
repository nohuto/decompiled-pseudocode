/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C00B2A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C0035FC0 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
