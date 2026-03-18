/*
 * XREFs of InbvGetDisplayState @ 0x1404FD3EC
 * Callers:
 *     FinalizeBootLogo @ 0x1404FD61C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FD670 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1404FD7CC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C509E8 && (v0 = *(__int64 (**)(void))(qword_140C509E8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
