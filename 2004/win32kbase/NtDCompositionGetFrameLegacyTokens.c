/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C009DE90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C001C6FC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r14
  __int64 v5; // rsi
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // esi
  signed int v11; // [rsp+30h] [rbp-68h]
  int v12; // [rsp+34h] [rbp-64h] BYREF
  int v13; // [rsp+38h] [rbp-60h]
  void *v14; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  void *Src; // [rsp+60h] [rbp-38h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  ULONG64 v20; // [rsp+A8h] [rbp+10h]
  _DWORD *v21; // [rsp+B0h] [rbp+18h]
  int v22; // [rsp+B8h] [rbp+20h]

  v21 = a3;
  v20 = a2;
  v4 = (_DWORD *)a2;
  v22 = 0;
  v13 = 0;
  v5 = 0LL;
  v17 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v5 = *(_QWORD *)a1;
    v17 = v5;
    a1 = v5 == 0 ? 0xC000000D : 0;
    v11 = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        v16 = 0LL;
        v7 = -1073741275;
        v8 = *((_QWORD *)DefaultConnection + 23);
        if ( v8 )
          v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, v5, &v16);
        v11 = v7;
        if ( v7 >= 0 )
        {
          v14 = 0LL;
          v15 = 0LL;
          v11 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)DefaultConnection + 31)
                                                                               + 56LL))(
                  *((_QWORD *)DefaultConnection + 31),
                  &v14,
                  &v15);
          if ( v11 >= 0 )
          {
            do
            {
              Src = 0LL;
              LODWORD(Size) = 0;
              v12 = 0;
              v9 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v16 + 40LL))(
                     v16,
                     &Src,
                     &Size,
                     &v12);
              v13 = v9;
              if ( (_DWORD)Size )
              {
                memmove(v14, Src, (unsigned int)Size);
                v14 = (char *)v14 + (unsigned int)Size;
                v15 -= (unsigned int)Size;
                v22 += v12;
              }
            }
            while ( v9 && v15 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection);
      }
      else
      {
        v11 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v22;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v13;
  return (unsigned int)v11;
}
