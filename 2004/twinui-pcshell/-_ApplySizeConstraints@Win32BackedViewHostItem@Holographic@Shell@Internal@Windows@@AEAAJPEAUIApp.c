/*
 * XREFs of ?_ApplySizeConstraints@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUIApplicationView@@@Z @ 0x180253C5C
 * Callers:
 *     ?OnApplicationViewChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180250780 (-OnApplicationViewChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x1802516A0 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_ApplySizeConstraints(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  bool v12; // bl
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h]

  v4 = *(_QWORD *)a2;
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(v4 + 80))(a2, &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v16 = 0LL;
    v14 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 280LL))(
           a2,
           v17,
           &v16,
           &v14);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v8 = (float)((float)(int)v16 * 100.0) / 150.0;
      v9 = (float)((float)SHIDWORD(v16) * 100.0) / 150.0;
      AcquireSRWLockShared(this + 28);
      v10 = *(float *)&this[67].Ptr;
      if ( v10 > v8 )
        v8 = *(float *)&this[67].Ptr;
      *(float *)&v18 = v8;
      v11 = *((float *)&this[67].Ptr + 1);
      if ( v11 > v9 )
        v9 = *((float *)&this[67].Ptr + 1);
      *((float *)&v18 + 1) = v9;
      v12 = v8 != v10 || v9 != v11;
      if ( this != (RTL_SRWLOCK *)-224LL )
        ReleaseSRWLockShared(this + 28);
      if ( !v12
        || (v5 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RaiseSizePreferencesChanged(
                   (__int64)&this[2],
                   v18),
            v6 = v5,
            v5 >= 0) )
      {
        v6 = 0;
        goto LABEL_20;
      }
      v7 = 1260LL;
    }
    else
    {
      v7 = 1240LL;
    }
  }
  else
  {
    v7 = 1236LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v5);
LABEL_20:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  return v6;
}
