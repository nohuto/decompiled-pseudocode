/*
 * XREFs of ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x180028FDC
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x180028F34 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Initialize(CWarpLockSubresource *this, struct ID3D11Texture2D *a2, int a3)
{
  __int64 *v3; // rsi
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  _DWORD v17[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+40h] [rbp-18h]

  v3 = (__int64 *)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
         v3);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3Fu, 0LL);
  }
  else
  {
    v11 = *v3;
    *((_DWORD *)this + 8) = a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 80LL))(v11, 2013265920LL);
    v12 = *((_DWORD *)this + 8);
    v13 = *((_QWORD *)this + 2);
    v17[3] = 0;
    v17[1] = v12;
    v17[0] = 13;
    v17[2] = 1;
    v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v13 + 24LL))(v13, v17);
    v10 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x5Au, 0LL);
    else
      *(_OWORD *)((char *)this + 40) = v18;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v10, 0x42u, 0LL);
  }
  return (unsigned int)v10;
}
