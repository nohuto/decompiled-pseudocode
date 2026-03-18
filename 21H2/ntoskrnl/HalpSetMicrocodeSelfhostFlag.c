/*
 * XREFs of HalpSetMicrocodeSelfhostFlag @ 0x14051F18C
 * Callers:
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpSetMicrocodeSelfhostFlag(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( McMicrocodeOperation )
    return McMicrocodeOperation(3LL, &v2, 1LL);
  else
    return 3221225659LL;
}
