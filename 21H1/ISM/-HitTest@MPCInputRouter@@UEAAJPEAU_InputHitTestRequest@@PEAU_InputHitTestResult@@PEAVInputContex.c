/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800404C4 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v16; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-38h]
  __int64 v19[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v9 = DWMInputRouter::HitTest(this, a2, a3, a4, a5, a6);
  v10 = v9;
  if ( *((_BYTE *)this + 864)
    && *((_DWORD *)a2 + 33)
    && (v9 < 0 || !*((_QWORD *)a3 + 1) && !*((_QWORD *)a3 + 2))
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
  {
    v12 = *((_QWORD *)this + 99);
    if ( v12 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 112LL))(v12) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 112LL))(*((_QWORD *)this + 99));
        v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v13;
        v19[0] = v13;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v21 = 0LL;
        v15 = **v14;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        if ( v15(v14, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v21) >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 120LL))(*((_QWORD *)this + 99));
          if ( v16 )
          {
            v17 = NtDuplicateCompositionInputSink(v16);
            if ( v17 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0xDD,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                (const char *)(unsigned int)v17,
                v18);
              __debugbreak();
            }
          }
          *((_DWORD *)a3 + 27) = 2 - IsEdition(0x224AuLL);
          *((_QWORD *)a3 + 1) = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 56LL))(*((_QWORD *)this + 99));
          v10 = 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v19);
      }
    }
  }
  return v10;
}
