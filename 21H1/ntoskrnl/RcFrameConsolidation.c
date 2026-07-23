/*
 * XREFs of RcFrameConsolidation @ 0x1403FE400
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140303870 (KeCheckStackAndTargetAddress.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int64 a19)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  void *v31; // [rsp+F8h] [rbp+F8h]

  v31 = (void *)(*(__int64 (**)(void))(a1 + 32))();
  if ( (a6 & 0xFFFFFFBF) == 0x10000F )
  {
    _mm_setcsr(HIDWORD(a6));
    KeCheckStackAndTargetAddress((signed __int64)v31, a19);
    retaddr = v31;
    _disable();
    __asm { iretq }
  }
  JUMPOUT(0x1403FE26FLL);
}
