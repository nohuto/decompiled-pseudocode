/*
 * XREFs of ?Thunk_UpdateManipulation_118@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180225470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C7858 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801D41E4 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateManipulation_118(
        CManipulation *a1,
        __int64 a2)
{
  struct ManipulationData *v2; // rbx
  __int64 *v3; // rdx
  struct ManipulationData *v4; // rdx
  CManipulation *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  CManipulation *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v2 = *(struct ManipulationData **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)&v10, *v3);
  v4 = v2;
  v5 = v10;
  v8 = CManipulation::Update(v10, v4, v6, v7);
  if ( v5 )
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
