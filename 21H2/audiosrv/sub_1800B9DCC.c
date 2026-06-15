/*
 * XREFs of sub_1800B9DCC @ 0x1800B9DCC
 * Callers:
 *     sub_1800B92D0 @ 0x1800B92D0 (sub_1800B92D0.c)
 *     sub_1800B92F0 @ 0x1800B92F0 (sub_1800B92F0.c)
 *     sub_1800B9310 @ 0x1800B9310 (sub_1800B9310.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180017B10 @ 0x180017B10 (sub_180017B10.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B779C @ 0x1800B779C (sub_1800B779C.c)
 *     sub_1800B856C @ 0x1800B856C (sub_1800B856C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800B9DCC(__int64 a1, _WORD *a2, int a3, int a4)
{
  __int64 v7; // rsi
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rax
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  ATL::CAtlException *v17; // rbx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-38h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v20; // [rsp+58h] [rbp-20h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF

  v7 = a1;
  v8 = 0;
  v9 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v9 > 4u )
  {
    v22 = a4;
    LODWORD(v18) = a3;
    v19[0] = a2;
    sub_1800B779C((__int64)v9, byte_180166185, v10, v11, v19, (__int64)&v18, (__int64)&v22);
  }
  if ( a3 == 1 )
  {
    v12 = sub_18006A18C(0x28uLL);
    v13 = v12;
    v19[0] = v12;
    if ( v12 )
    {
      sub_180017B10((__int64)v12, a2, 1);
      *v13 = off_18014A078;
      *((_DWORD *)v13 + 8) = a4;
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v14 = sub_18006A18C(0x20uLL);
    v19[0] = v14;
    if ( v14 )
      v13 = (_QWORD *)sub_180017B10((__int64)v14, a2, a3);
    else
      v13 = 0LL;
  }
  v19[0] = v13;
  if ( !v13 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v13[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v13)(v13, 1LL);
LABEL_19:
    v8 = -2147024882;
    goto LABEL_20;
  }
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v13)(v13, 1LL);
    return (unsigned int)v8;
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  v18 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 112));
  v19[1] = (void *)(v7 + 112);
  v8 = 0;
  try
  {
    sub_1800B856C((__int64 *)(v7 + 152), (__int64)v19);
  }
  catch ( ATL::CAtlException *v20 )
  {
    v17 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      o__resetstkoflw();
    v22 = *(_DWORD *)v17;
    v7 = a1;
    v8 = v22;
    v15 = v18;
  }
  if ( v15 )
    LeaveCriticalSection(v15);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(qword_18019E640, *(_QWORD *)(v7 + 200));
LABEL_20:
  if ( v8 < 0 )
    sub_18005E8F8((__int64)"CAudioSrv::QueueOnDeviceWorkItem", 1693, v8);
  return (unsigned int)v8;
}
