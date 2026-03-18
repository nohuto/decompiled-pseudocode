/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C0087EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0081314 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0088098 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2, __int128 *a3)
{
  __int64 v4; // rdi
  struct DirectComposition::CConnection *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rcx
  signed int v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-70h] BYREF
  struct DirectComposition::CConnection *v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h]
  __int128 v16; // [rsp+48h] [rbp-50h]
  __int128 v17; // [rsp+58h] [rbp-40h]
  __int128 v18; // [rsp+68h] [rbp-30h] BYREF
  __int128 v19; // [rsp+78h] [rbp-20h]

  v18 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v15 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v16 = *a3;
    v17 = a3[1];
    v18 = v16;
    v19 = v17;
    v12 = v4 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 >= 0 )
  {
    v14 = 0LL;
    KeEnterCriticalRegion();
    v12 = DirectComposition::CConnection::ReferenceHandle(a1, &v14);
    if ( v12 >= 0 )
    {
      v5 = v14;
      v6 = *((_QWORD *)v14 + 23);
      if ( v6 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, v4);
      v7 = 0LL;
      v13 = 0LL;
      v8 = -1073741275;
      v9 = *((_QWORD *)v5 + 23);
      if ( v9 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
               *((_QWORD *)v5 + 23),
               v4,
               &v13);
        v7 = v13;
      }
      v12 = v8;
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 24LL))(v7, &v18);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      v10 = *((_QWORD *)v5 + 23);
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v14);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
