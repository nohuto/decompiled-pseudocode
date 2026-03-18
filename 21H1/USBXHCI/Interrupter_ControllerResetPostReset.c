/*
 * XREFs of Interrupter_ControllerResetPostReset @ 0x1C003AFE0
 * Callers:
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     Interrupter_InterruptEnable @ 0x1C00104D0 (Interrupter_InterruptEnable.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C001349C (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_Initialize @ 0x1C0013780 (Interrupter_Initialize.c)
 */

char __fastcall Interrupter_ControllerResetPostReset(__int64 a1)
{
  __int64 v2; // rax
  __int64 i; // rdi
  __int64 v4; // rcx

  LOBYTE(v2) = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)v2 )
  {
    Interrupter_Initialize(a1);
    LOBYTE(v2) = Interrupter_InterrupterRegisterIntialize(a1);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
    {
      v2 = *(_QWORD *)(a1 + 32);
      v4 = *(_QWORD *)(v2 + 8 * i);
      if ( v4 )
      {
        *(_DWORD *)(v4 + 96) &= ~0x10u;
        LODWORD(v2) = *(_DWORD *)(v4 + 96);
        if ( (v2 & 4) != 0 )
          LOBYTE(v2) = Interrupter_InterruptEnable(v4);
      }
    }
  }
  return v2;
}
