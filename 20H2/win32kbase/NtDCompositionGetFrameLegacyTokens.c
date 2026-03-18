/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0061CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0081314 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // edx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // esi
  signed int v12; // [rsp+30h] [rbp-68h]
  int v13; // [rsp+34h] [rbp-64h] BYREF
  int v14; // [rsp+38h] [rbp-60h]
  void *v15; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]
  void *Src; // [rsp+60h] [rbp-38h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  ULONG64 v21; // [rsp+A8h] [rbp+10h]
  _DWORD *v22; // [rsp+B0h] [rbp+18h]
  int v23; // [rsp+B8h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v4 = (_DWORD *)a2;
  v23 = 0;
  v14 = 0;
  v5 = 0LL;
  v18 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v5 = *(_QWORD *)a1;
    v18 = v5;
    a1 = v5 == 0 ? 0xC000000D : 0;
    v12 = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        v17 = 0LL;
        v8 = -1073741275;
        v9 = *((_QWORD *)DefaultConnection + 23);
        if ( v9 )
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, v5, &v17);
        v12 = v8;
        if ( v8 >= 0 )
        {
          v15 = 0LL;
          v16 = 0LL;
          v12 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)DefaultConnection + 31)
                                                                               + 56LL))(
                  *((_QWORD *)DefaultConnection + 31),
                  &v15,
                  &v16);
          if ( v12 >= 0 )
          {
            do
            {
              Src = 0LL;
              LODWORD(Size) = 0;
              v13 = 0;
              v10 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v17 + 40LL))(
                      v17,
                      &Src,
                      &Size,
                      &v13);
              v14 = v10;
              if ( (_DWORD)Size )
              {
                memmove(v15, Src, (unsigned int)Size);
                v15 = (char *)v15 + (unsigned int)Size;
                v16 -= (unsigned int)Size;
                v23 += v13;
              }
            }
            while ( v10 && v16 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v6);
      }
      else
      {
        v12 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v23;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v14;
  return (unsigned int)v12;
}
