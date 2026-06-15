/*
 * XREFs of sub_1800BA054 @ 0x1800BA054
 * Callers:
 *     sub_1800B92A0 @ 0x1800B92A0 (sub_1800B92A0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180017B10 @ 0x180017B10 (sub_180017B10.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7078 @ 0x1800B7078 (sub_1800B7078.c)
 *     sub_1800B856C @ 0x1800B856C (sub_1800B856C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800BA054(__int64 a1, _WORD *a2, int a3, int a4, int a5)
{
  __int64 v7; // rsi
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  void *v13; // rax
  void (__fastcall ***v14)(_QWORD, _QWORD); // rcx
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp-30h] BYREF
  void *v20; // [rsp+50h] [rbp-28h] BYREF
  ATL::CAtlException *v21; // [rsp+58h] [rbp-20h] BYREF
  int v23; // [rsp+90h] [rbp+18h] BYREF

  v23 = a3;
  v7 = a1;
  v8 = 0;
  v9 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  v12 = a5;
  if ( *v9 > 4u )
  {
    v23 = a5;
    LODWORD(v18) = a4;
    LODWORD(v19) = 5;
    v20 = a2;
    sub_1800B7078((__int64)v9, byte_180166129, v10, v11, &v20, (__int64)&v19, (__int64)&v18, (__int64)&v23);
  }
  v13 = sub_18006A18C(0x20uLL);
  v20 = v13;
  if ( v13 )
    v14 = (void (__fastcall ***)(_QWORD, _QWORD))sub_180017B10((__int64)v13, a2, 5);
  else
    v14 = 0LL;
  v20 = v14;
  if ( !v14 )
    goto LABEL_15;
  if ( !*((_DWORD *)v14[1] - 4) )
  {
    (**v14)(v14, 1LL);
LABEL_15:
    v8 = -2147024882;
    goto LABEL_16;
  }
  *((_DWORD *)v14 + 5) = v12;
  *((_DWORD *)v14 + 6) = a4;
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (**v14)(v14, 1LL);
    return (unsigned int)v8;
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  v19 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 112));
  v18 = v7 + 112;
  v8 = 0;
  try
  {
    sub_1800B856C((__int64 *)(v7 + 152), (__int64)&v20);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v17 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      o__resetstkoflw();
    v23 = *(_DWORD *)v17;
    v7 = a1;
    v8 = v23;
    v15 = v19;
  }
  if ( v15 )
    LeaveCriticalSection(v15);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(qword_18019E640, *(_QWORD *)(v7 + 200));
LABEL_16:
  if ( v8 < 0 )
    sub_18005E8F8((__int64)"CAudioSrv::QueueOnDeviceWorkItem", 1796, v8);
  return (unsigned int)v8;
}
