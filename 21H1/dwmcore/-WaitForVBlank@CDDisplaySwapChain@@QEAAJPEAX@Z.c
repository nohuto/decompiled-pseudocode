/*
 * XREFs of ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x18023BCDC
 * Callers:
 *     ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x180177ED0 (-WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801AA888 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::WaitForVBlank(CDDisplaySwapChain *this, void *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 23) )
  {
    v7 = -2003304442;
    v9 = 835;
    goto LABEL_7;
  }
  wil::details::ResetEvent(*((wil::details **)this + 49), a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 64LL))(*((_QWORD *)this + 17));
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 17) + 72LL))(
         *((_QWORD *)this + 17),
         v4 + 1,
         *((_QWORD *)this + 49));
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x333u, 0LL);
  }
  else
  {
    Handles[0] = *((HANDLE *)this + 49);
    Handles[1] = a2;
    if ( WaitForMultipleObjects((a2 != 0LL) + 1, Handles, 0, 0xFFFFFFFF) > 1 )
    {
      v7 = -2147024809;
      v9 = 829;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v9, 0LL);
    }
  }
  return v7;
}
