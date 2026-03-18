/*
 * XREFs of KiMaskInterruptInternal @ 0x1403A6A5C
 * Callers:
 *     KeMaskInterrupt @ 0x140376AB0 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x140519240 (KiMaskInterruptDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // r8
  char *v5; // r8
  char *v6; // rcx

  v3 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_140C00618[0]()];
  if ( !v3 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)())v3 + 10) == KiChainedDispatch )
  {
    v5 = (char *)(v3 + 2);
    v6 = v5;
    while ( (*((_DWORD *)v6 + 24) & 1) != 0 )
    {
      v6 = *(char **)v6;
      if ( v6 == v5 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00770[0])(a2, 0LL);
    }
  }
  else if ( (v3[26] & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00770[0])(a2, 0LL);
  }
  return 296LL;
}
