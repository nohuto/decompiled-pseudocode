/*
 * XREFs of ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x180181BF0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027474 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x180181D00 (-Initialize@TapProcessor@@IEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::Create(struct TapProcessor **a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r9
  TapProcessor *v5; // rax
  TapProcessor *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TapProcessor *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a1 )
  {
    v5 = (TapProcessor *)RefCountedObject::operator new(0x58uLL);
    v6 = v5;
    if ( v5 )
    {
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_QWORD *)v5 + 2) = &RefCountedObject::`vftable';
      *(_QWORD *)v5 = &TapProcessor::`vftable'{for `IContextualProcessor'};
      *((_QWORD *)v5 + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
      *((_QWORD *)v5 + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v5 + 6) = 1;
      *((_DWORD *)v5 + 8) = 63;
      *((_BYTE *)v5 + 64) = 0;
      *((_QWORD *)v5 + 9) = 0LL;
      *((_DWORD *)v5 + 20) = 0;
    }
    else
    {
      v6 = 0LL;
    }
    v10 = v6;
    if ( v6 )
    {
      v7 = TapProcessor::Initialize(v6);
      v2 = v7;
      if ( v7 >= 0 )
      {
        v10 = 0LL;
        v2 = 0;
        *a1 = v6;
        goto LABEL_12;
      }
      v4 = (unsigned int)v7;
      v3 = 49LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 46LL;
      v4 = 2147942414LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 39LL;
    v4 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
    (const char *)v4);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return v2;
}
