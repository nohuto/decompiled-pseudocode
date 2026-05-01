/*
 * XREFs of ?WindowOccludedChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@E@Z @ 0x18003B750
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::WindowOccludedChanged(RTL_SRWLOCK *this, HWND a2, unsigned __int8 a3)
{
  unsigned int v3; // r13d
  RTL_SRWLOCK *v6; // rdi
  __int64 v7; // r14
  __int64 *v8; // rbx
  char v9; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a3;
  v6 = this + 58;
  v20[1] = this + 58;
  AcquireSRWLockShared(this + 58);
  v7 = 0LL;
  if ( !this[60].Ptr )
    goto LABEL_15;
  while ( 1 )
  {
    v8 = (__int64 *)*((_QWORD *)this[59].Ptr + v7);
    v20[2] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64 *))(*v8 + 8))(v8);
    v22 = 0;
    v19 = 0LL;
    v23 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))*v8)(v8, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v19) < 0 )
    {
      v14 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))*v8)(
             v8,
             &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
             &v23) >= 0 )
      {
        v18 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v18);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v15,
            v18);
        else
          (*(void (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v18 + 96LL))(v18, a2, &v22);
        v16 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
LABEL_25:
      if ( !v22 )
        goto LABEL_8;
      goto LABEL_28;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 24LL))(v19, v20) < 0 )
      goto LABEL_25;
    if ( a2 != (HWND)v20[0] )
    {
      v22 = 0;
LABEL_8:
      v9 = 0;
      goto LABEL_9;
    }
    v22 = 1;
LABEL_28:
    v9 = 1;
LABEL_9:
    v10 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *v8;
    if ( v9 )
      break;
    (*(void (__fastcall **)(__int64 *))(v12 + 16))(v8);
    if ( (PVOID)++v7 >= this[60].Ptr )
      goto LABEL_15;
  }
  v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v12 + 456))(v8, v3);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x376,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v17,
      v18);
  (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
LABEL_15:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
