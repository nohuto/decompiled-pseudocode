/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967___ @ 0x18038142C
 * Callers:
 *     ?TogglePPIAllUpView@CPPIAllUpViewService@@UEAAJPEAUHMONITOR__@@@Z @ 0x180381930 (-TogglePPIAllUpView@CPPIAllUpViewService@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const_&_ @ 0x18038130C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836c.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_(__int64 *a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const___(&v9, a2);
  if ( *CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const )
    v5 = *CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const
       + 32LL;
  else
    v5 = 0LL;
  *CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const = 0LL;
  v6 = v9;
  v10 = v5;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"internal\\shell\\private\\inc\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v3;
}
