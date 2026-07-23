/*
 * XREFs of HalSendSoftwareInterrupt @ 0x140211D80
 * Callers:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalSendSoftwareInterrupt(int a1, char a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v2 = a2 == 1;
  v3 = 31LL;
  v5 = 0LL;
  DWORD2(v5) = a1;
  LODWORD(v5) = 6;
  if ( !v2 )
    v3 = 47LL;
  return HalpInterruptSendIpi(&v5, v3);
}
