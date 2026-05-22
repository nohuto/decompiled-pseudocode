/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18003A050
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AD60 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x18003A0B0 (-CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  _BYTE v9[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+34h] [rbp-54h]
  char v11; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v13; // [rsp+A0h] [rbp+18h] BYREF
  char v14; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0LL;
  memset_0(v9, 0, 0x40uLL);
  if ( !CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(this) )
    goto LABEL_2;
  v6 = *(_QWORD *)this;
  v7 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)this + 40LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v13);
  if ( v7(v6, &v13) < 0 )
    goto LABEL_2;
  v9[0] = 3;
  v10 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 40LL))(v13, &v14);
  v11 = a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 1) + 176LL))(
         *((_QWORD *)this + 1),
         *((_QWORD *)this + 2),
         v9,
         64LL);
  v4 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v8);
  else
LABEL_2:
    v4 = 0;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v13);
  return v4;
}
