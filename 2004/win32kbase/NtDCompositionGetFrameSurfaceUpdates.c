/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C009DC60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r14
  __int64 v5; // rsi
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v7; // eax
  __int64 v8; // rcx
  signed int v10; // [rsp+30h] [rbp-58h]
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  unsigned __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v16; // [rsp+98h] [rbp+10h]
  _DWORD *v17; // [rsp+A0h] [rbp+18h]
  int v18; // [rsp+A8h] [rbp+20h]

  v17 = a3;
  v16 = a2;
  v4 = (_DWORD *)a2;
  v15 = 0;
  v18 = 0;
  v5 = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v5 = *(_QWORD *)a1;
    v12 = v5;
    a1 = v5 == 0 ? 0xC000000D : 0;
    v10 = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        v11 = 0LL;
        v7 = -1073741275;
        v8 = *((_QWORD *)DefaultConnection + 23);
        if ( v8 )
          v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, v5, &v11);
        v10 = v7;
        if ( v7 >= 0 )
        {
          v14[0] = 0LL;
          v13 = 0LL;
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)DefaultConnection + 31)
                                                                                + 56LL))(
                  *((_QWORD *)DefaultConnection + 31),
                  v14,
                  &v13);
          if ( v10 >= 0 )
            v18 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v11 + 48LL))(
                    v11,
                    v14[0],
                    v13 / 0xC8,
                    &v15);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection);
      }
      else
      {
        v10 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v15;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v18;
  return (unsigned int)v10;
}
