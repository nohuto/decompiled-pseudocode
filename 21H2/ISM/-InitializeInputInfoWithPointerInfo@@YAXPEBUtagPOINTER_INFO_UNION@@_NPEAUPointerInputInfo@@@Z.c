/*
 * XREFs of ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800B08B8
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B0408 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180023BDC (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x1800C4490 (-PointerTypeToInputType@@YA-AW4InputType@@K_N@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x180136D54 (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InitializeInputInfoWithPointerInfo(
        const struct tagPOINTER_INFO_UNION *a1,
        __int64 a2,
        struct PointerInputInfo *a3)
{
  int v4; // eax
  _DWORD *v5; // r8
  int v6; // eax
  unsigned int *v7; // rdx
  struct KeyboardModifierState *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct KeyboardModifierState *v10; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a3 + 1) = *((_DWORD *)a1 + 4);
  *((_DWORD *)a3 + 2) = *((_DWORD *)a1 + 16);
  *((_QWORD *)a3 + 2) = *((_QWORD *)a1 + 10);
  v4 = PointerTypeToInputType(*(unsigned int *)a1);
  *v5 = v4;
  v10 = 0LL;
  v6 = KeyboardModifierState::Create(&v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2245LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (unsigned int *)((char *)a3 + 128);
  v8 = v10;
  KeyboardModifierState::GetCurrentKeyboardModifierState(v10, v7);
  if ( v8 )
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v8 + 16LL))(v8);
}
