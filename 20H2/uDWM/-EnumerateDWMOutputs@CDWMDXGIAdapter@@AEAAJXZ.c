/*
 * XREFs of ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180037B48
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x1800376CC (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180037C84 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x180040A38 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::EnumerateDWMOutputs(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int updated; // eax
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15[35]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
            v2,
            i,
            0xFFFFFFFFLL,
            &v12);
    v7 = v10;
    if ( v10 < 0 )
      break;
    v5 = v12;
    v14 = v12;
    memset_0(v15, 0, sizeof(v15));
    v6 = (**v5)(v5, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x99u);
      goto LABEL_9;
    }
    v15[0] = v13;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v14);
    v7 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x9Cu);
      goto LABEL_9;
    }
    v9 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 352, &v14);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x9Eu);
      goto LABEL_9;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v10 == -2005270526 )
    v7 = 0;
LABEL_9:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
  return v7;
}
