/*
 * XREFs of ?Thunk_SetCaptureState_126@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1802267E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C9670 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetCaptureState_126(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int64 *v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = *(int **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v7 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v7, *v3);
  v5 = v7;
  *(_DWORD *)(v7 + 444) = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
