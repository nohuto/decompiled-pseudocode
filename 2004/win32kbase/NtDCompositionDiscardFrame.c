/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C0024760
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0024AA8 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  struct DirectComposition::CConnection *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  signed int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v3 = *a2;
    v10 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
  {
    KeEnterCriticalRegion();
    v10 = DirectComposition::CConnection::ReferenceHandle(a1, &v12);
    if ( v10 >= 0 )
    {
      v4 = 0LL;
      v11 = 0LL;
      v5 = -1073741275;
      v6 = v12;
      v7 = *((_QWORD *)v12 + 23);
      if ( v7 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(
               *((_QWORD *)v12 + 23),
               v3,
               &v11);
        v4 = v11;
      }
      v10 = v5;
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v8 = *((_QWORD *)v6 + 23);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v3);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v12);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v10;
}
