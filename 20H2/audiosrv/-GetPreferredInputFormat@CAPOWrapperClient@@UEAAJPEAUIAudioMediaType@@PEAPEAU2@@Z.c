/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x18004BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001F460 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAPOWrapperClient::GetPreferredInputFormat(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v10 = 308LL;
LABEL_16:
    v7 = -2147024809;
    goto LABEL_17;
  }
  if ( !a3 || !a2 )
  {
    v10 = 309LL;
    goto LABEL_16;
  }
  v5 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
  if ( !v5 )
  {
    v7 = -2004287480;
    v10 = 312LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrapperclient.cpp",
      (const char *)v7,
      v11);
    return v7;
  }
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, LPVOID *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         v5,
         &pv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = CAudioMediaType::Create(
           (const struct tWAVEFORMATEX *)pv,
           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
           a3,
           0.0,
           1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v8 = 318LL;
  }
  else
  {
    v8 = 315LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrapperclient.cpp",
    (const char *)(unsigned int)v6,
    v11);
LABEL_8:
  CoTaskMemFree(pv);
  pv = 0LL;
  return v7;
}
