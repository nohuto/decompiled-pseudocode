/*
 * XREFs of ?Thunk_SetAutoReset_132@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180226780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C9670 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetAutoReset_132(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 *v3; // rdx
  char v4; // bl
  _BYTE *v5; // rcx
  _BYTE *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (_BYTE *)a1;
  v2 = *(char **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v7 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)&v7, *v3);
  v5 = v7;
  v7[440] &= ~4u;
  v5[440] |= 4 * (v4 & 1);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
