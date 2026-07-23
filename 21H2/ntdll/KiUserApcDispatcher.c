/*
 * XREFs of KiUserApcDispatcher @ 0x1800A1350
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A1350 (KiUserApcDispatcher.c)
 * Callees:
 *     ZwContinueEx @ 0x18009EA10 (ZwContinueEx.c)
 *     KiUserCallForwarder @ 0x1800A1300 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  NTSTATUS v1; // eax
  NTSTATUS v2; // esi
  unsigned __int64 v3; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v5; // [rsp+8h] [rbp+8h]
  __int64 v6; // [rsp+10h] [rbp+10h]
  __int64 v7; // [rsp+18h] [rbp+18h]
  unsigned int v8; // [rsp+20h] [rbp+20h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v7 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      KiUserCallForwarder();
    }
    else
    {
      v3 = (unsigned int)retaddr | v0;
      if ( Wow64ApcRoutine )
      {
        Wow64ApcRoutine(v3, ((unsigned __int64)v8 << 32) | v5, v6, &retaddr);
        v2 = -1073741811;
        goto LABEL_7;
      }
    }
    v1 = ZwContinueEx((PCONTEXT)&retaddr, &STACK[0x4F0]);
    if ( v1 )
    {
      if ( v1 == -1073740278 )
        __fastfail(0x30u);
      v2 = v1;
LABEL_7:
      RtlRaiseStatus(v2);
    }
  }
}
