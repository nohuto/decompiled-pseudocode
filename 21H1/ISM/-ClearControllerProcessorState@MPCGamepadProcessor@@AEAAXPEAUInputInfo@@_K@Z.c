/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x180192464
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180193990 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193B80 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193BE0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(
        MPCGamepadProcessor *this,
        struct InputInfo *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _DWORD v4[4]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v5; // [rsp+30h] [rbp-9h]
  int v6; // [rsp+38h] [rbp-1h]
  __int64 v7; // [rsp+40h] [rbp+7h]
  int v8; // [rsp+48h] [rbp+Fh]
  __int64 v9; // [rsp+4Ch] [rbp+13h]
  int v10; // [rsp+54h] [rbp+1Bh]
  int v11; // [rsp+58h] [rbp+1Fh]
  int v12; // [rsp+5Ch] [rbp+23h]
  int v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+64h] [rbp+2Bh]
  int v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+6Ch] [rbp+33h]
  char v17; // [rsp+70h] [rbp+37h]

  v3 = *((_QWORD *)this + 580);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v8 = 0;
  v9 = 0LL;
  v16 = 0;
  v17 = 0;
  v4[1] = *((_DWORD *)a2 + 1);
  v4[2] = *((_DWORD *)a2 + 2);
  v5 = *((_QWORD *)a2 + 2);
  v7 = a3;
  v4[0] = 64;
  v6 = 88;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 48LL))(v3, v4);
}
