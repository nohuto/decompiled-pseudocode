/*
 * XREFs of _lambda_afa766b05c8b85e15a4aa8e998e375f4_::operator() @ 0x180258CC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_afa766b05c8b85e15a4aa8e998e375f4__&_::Run @ 0x180259F60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_afa766b05c8b85e15a4aa8e998e375f4__-_--Run.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18025BED0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018B288 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_afa766b05c8b85e15a4aa8e998e375f4_::operator()(__int64 a1)
{
  int v2; // ebx
  HRESULT v3; // eax
  LPVOID v4; // rbx
  __int64 (__fastcall *v5)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v12 = 0LL;
  v2 = WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
         (Microsoft::WRL::WeakRef *)(a1 + 8),
         &v12);
  if ( v2 >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v3 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
    v2 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v3);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      goto LABEL_12;
    }
    v10 = 0LL;
    v4 = ppv;
    v5 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = v5(v4, &IID_IImmersiveApplicationManager, &GUID_9886efb0_afb3_4a35_b381_329935b32d5a, &v10);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 24LL))(
             v10,
             *(_QWORD *)(*(_QWORD *)a1 + 208LL),
             0LL,
             2050LL);
      v2 = v6;
      if ( v6 >= 0 )
      {
        v2 = 0;
        goto LABEL_10;
      }
      v7 = 171LL;
    }
    else
    {
      v7 = 170LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v6);
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v2;
}
