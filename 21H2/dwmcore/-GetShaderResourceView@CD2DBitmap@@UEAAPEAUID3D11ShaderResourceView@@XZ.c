/*
 * XREFs of ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800C2E88
 * Callers:
 *     ?GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800F61B0 (-GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@FI@EAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800F61C0 (-GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@FI@EAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800F8270 (-GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11ShaderResourceView@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800C2F60 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D09C8 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

struct ID3D11ShaderResourceView *__fastcall CD2DBitmap::GetShaderResourceView(CD2DBitmap *this)
{
  struct ID3D11ShaderResourceView **v1; // rsi
  bool v4; // cc
  char *v5; // rcx
  CD3DDevice *v6; // rbx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v7; // r8
  int ShaderResourceView; // eax
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = (struct ID3D11ShaderResourceView **)((char *)this - 216);
  if ( !*((_QWORD *)this - 27) )
  {
    if ( *((_QWORD *)this - 28) )
    {
      if ( (*((_BYTE *)this - 160) & 8) != 0 )
      {
        v4 = *((_DWORD *)this - 45) <= 1u;
        v10 = 0LL;
        v11 = 0LL;
        if ( !v4 )
        {
          LODWORD(v10) = *((_DWORD *)this - 44);
          HIDWORD(v10) = *((_DWORD *)this - 46);
          LODWORD(v11) = *((_DWORD *)this - 26);
          *(_QWORD *)((char *)&v10 + 4) = 5LL;
          HIDWORD(v11) = 1;
        }
        v5 = (char *)this + *(int *)(*((_QWORD *)this - 41) + 8LL) - 328;
        v6 = (CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
        wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v1);
        v7 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v10;
        if ( *((_DWORD *)this - 45) <= 1u )
          v7 = 0LL;
        ShaderResourceView = CD3DDevice::CreateShaderResourceView(v6, *((struct ID3D11Resource **)this - 28), v7, v1);
        if ( ShaderResourceView < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, ShaderResourceView, 0x1FFu, 0LL);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292287, 0x203u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x208u, 0LL);
    }
  }
  return *v1;
}
