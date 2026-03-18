/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00616C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        int *a5)
{
  unsigned int v6; // edi
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int SessionTokenManager; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // r8
  unsigned int v15; // eax
  size_t v16; // r8
  char *v17; // rcx
  unsigned int v19; // [rsp+30h] [rbp-3B8h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-3B4h]
  int v21; // [rsp+38h] [rbp-3B0h]
  unsigned int v22; // [rsp+3Ch] [rbp-3ACh]
  unsigned int v23; // [rsp+40h] [rbp-3A8h]
  __int64 v24; // [rsp+48h] [rbp-3A0h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-398h]
  unsigned int v26; // [rsp+58h] [rbp-390h]
  __int64 v27; // [rsp+60h] [rbp-388h]
  __int64 v28; // [rsp+68h] [rbp-380h]
  unsigned int *v29; // [rsp+70h] [rbp-378h]
  int *v30; // [rsp+78h] [rbp-370h]
  _BYTE Src[800]; // [rsp+80h] [rbp-368h] BYREF

  v20 = a3;
  v27 = a2;
  v22 = a1;
  v25 = a1;
  v28 = a2;
  v26 = a3;
  v29 = a4;
  v30 = a5;
  v6 = 0;
  v23 = 0;
  v7 = 0;
  v21 = 0;
  v24 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v24);
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(v9, v8), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38033) + 296LL))()) )
  {
    v7 = 1;
    v21 = 1;
    v19 = 0;
    v8 = 4LL;
    v12 = v24;
    v13 = v20;
    while ( v13 > v6 && v7 )
    {
      v14 = v13 - v6;
      if ( (unsigned int)v14 > 4 )
        v14 = 4LL;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, unsigned int *))(*(_QWORD *)v12 + 112LL))(
             v12,
             v22,
             v14,
             Src,
             &v19);
      v21 = v7;
      v15 = v19;
      if ( v19 )
      {
        v16 = 200LL * v19;
        v17 = (char *)(v27 + 200LL * v6);
        if ( (unsigned __int64)&v17[v16] > MmUserProbeAddress || &v17[v16] <= v17 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v17, Src, v16);
        v15 = v19;
        v13 = v20;
        v8 = 4LL;
      }
      else
      {
        v13 = v20;
        v8 = 4LL;
      }
      v6 += v15;
      v23 = v6;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
    v12 = v24;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, v8);
  KeLeaveCriticalRegion();
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v6;
  if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a5 = v7;
  return (unsigned int)SessionTokenManager;
}
