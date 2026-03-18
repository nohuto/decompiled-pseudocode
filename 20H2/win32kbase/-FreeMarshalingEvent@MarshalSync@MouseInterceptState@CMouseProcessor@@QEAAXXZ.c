/*
 * XREFs of ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C00080F4
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0008118 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(
        CMouseProcessor::MouseInterceptState::MarshalSync *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)this = 0LL;
  }
}
