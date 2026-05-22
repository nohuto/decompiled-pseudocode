/*
 * XREFs of ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800342A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180010790 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180034350 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800343F4 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180035028 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  LampArrayRawInputProvider *v5; // rax
  struct IRawInputProvider *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const char *v14; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1802053F0 > 5 )
  {
    v14 = "Starting LampArray provider.  Either first time dwm.exe started or dwm.exe crashed and now restarting";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1802053F0,
      (__int64)&v14);
  }
  if ( !a3 )
  {
    v10 = -2147024809;
    v11 = 34LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v10,
      v12);
    return v10;
  }
  v5 = (LampArrayRawInputProvider *)RefCountedObject::operator new(0x100uLL);
  if ( v5 )
    v6 = LampArrayRawInputProvider::LampArrayRawInputProvider(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v10 = -2147024882;
    v11 = 38LL;
    goto LABEL_12;
  }
  v7 = LampArrayRawInputProvider::Initialize((ULONG_PTR)v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v7,
      v12);
    LampArrayRawInputProvider::Release((ULONG_PTR)v6);
    return v8;
  }
  else
  {
    *a3 = v6;
    return 0LL;
  }
}
