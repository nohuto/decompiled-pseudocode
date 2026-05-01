/*
 * XREFs of ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180172F00
 * Callers:
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x180167EFC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180171090 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180172E1C (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlomWorker(
        __int64 a1,
        GUID *a2,
        int (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        int a4)
{
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  GUID *v9; // rdx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v17; // [rsp+80h] [rbp+30h] BYREF

  v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  v14 = 0LL;
  if ( a3 )
  {
    v8 = **a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v9 = &GUID_c9301630_27da_428e_a432_0a5e49c0ffee;
  }
  else
  {
    v5 = *(int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 120);
    v8 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))(*v5)[14];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v9 = a2;
  }
  if ( v8(v5, v9, &v14) < 0
    || (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 232LL))(v14, &v17) < 0
    || (v17 & 1) != 0 )
  {
    goto LABEL_11;
  }
  v15 = 0LL;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( a4 == 1 )
    v10 = 1;
  DWORD2(v15) = v10;
  v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, __int128 *))(**(_QWORD **)(a1 + 120) + 104LL))(
          *(_QWORD *)(a1 + 120),
          a2,
          v14,
          &v15);
  v12 = v11;
  if ( v11 >= 0 )
LABEL_11:
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6A,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v12;
}
