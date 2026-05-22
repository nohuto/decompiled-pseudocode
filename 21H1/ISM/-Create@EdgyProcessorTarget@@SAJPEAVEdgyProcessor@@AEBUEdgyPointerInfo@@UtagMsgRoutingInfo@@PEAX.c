/*
 * XREFs of ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x18017A890
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801781B0 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z @ 0x18017A3A0 (--0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18017A9BC (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessorTarget::Create(
        struct EdgyProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        EdgyProcessorTarget **a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  EdgyProcessorTarget **v12; // rsi
  EdgyProcessorTarget *v13; // rax
  EdgyProcessorTarget *v14; // rdi
  int v15; // eax
  int v17[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  EdgyProcessorTarget *v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  if ( a1 )
  {
    v12 = a5;
    if ( a5 )
    {
      v13 = (EdgyProcessorTarget *)RefCountedObject::operator new(0xB8uLL);
      v21 = v13;
      if ( v13 )
        v14 = EdgyProcessorTarget::EdgyProcessorTarget(v13, a1);
      else
        v14 = 0LL;
      v21 = v14;
      if ( v14 )
      {
        *(_OWORD *)v17 = *(_OWORD *)a3;
        v18 = *(_OWORD *)(a3 + 16);
        v19 = *(_QWORD *)(a3 + 32);
        v15 = ((__int64 (__fastcall *)(EdgyProcessorTarget *, __int64, int *, __int64))EdgyProcessorTarget::Initialize)(
                v14,
                a2,
                v17,
                a4);
        v9 = v15;
        if ( v15 >= 0 )
        {
          v21 = 0LL;
          *v12 = v14;
          v9 = 0;
          goto LABEL_14;
        }
        v10 = (unsigned int)v15;
        v11 = 67LL;
      }
      else
      {
        v9 = -2147024882;
        v10 = 2147942414LL;
        v11 = 65LL;
      }
    }
    else
    {
      v9 = -2147024809;
      v10 = 2147942487LL;
      v11 = 62LL;
    }
  }
  else
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)v10);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
  return v9;
}
