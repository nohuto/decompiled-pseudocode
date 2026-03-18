/*
 * XREFs of ?WaitForVBlank@CRemoteRenderTarget@@UEBAJPEAX@Z @ 0x1800E1050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::WaitForVBlank(CRemoteRenderTarget *this, void *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
  {
    v5 = -2003304442;
    v7 = -2003304442;
    v8 = 353;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(*((_QWORD *)this - 15) + 952LL) == 6 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, bool, void **))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           a2 != 0LL,
           &v9);
    v5 = v4;
    if ( v4 >= 0 )
      return v5;
    v8 = 342;
    goto LABEL_8;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, void *, CRemoteRenderTarget *, void *))(*(_QWORD *)v3 + 40LL))(
         v3,
         a2,
         this,
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 348;
LABEL_8:
    v7 = v4;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v7, v8, 0LL);
  }
  return v5;
}
