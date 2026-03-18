/*
 * XREFs of NtDCompositionSuspendAnimations @ 0x1C01CF190
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C009B8F8 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSuspendAnimations(unsigned int a1, int a2)
{
  int v3; // ebx
  struct DirectComposition::CApplicationChannel *v4; // rcx
  char v5; // dl
  struct DirectComposition::CApplicationChannel *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    v5 = *((_BYTE *)v7 + 241);
    if ( (a2 != 0) != (v5 & 1) )
    {
      *((_BYTE *)v7 + 240) |= 0x80u;
      *((_BYTE *)v4 + 241) = (a2 != 0) | v5 & 0xFE;
    }
    v3 = 0;
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
