/*
 * XREFs of ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18047FF34
 * Callers:
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180409F10 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804712E0 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_HandleNormalLayoutEnvChange(
        CAppLayoutOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v4; // edi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v5; // rdx
  unsigned int v6; // r12d
  LANGID ThreadUILanguage; // ax
  __int64 v8; // r15
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rbx
  bool v12; // al
  int v13; // eax
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 216LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 264LL))(*((_QWORD *)this + 5), 2LL);
  v6 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(a2, v5);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL) <= v6
    || (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 5) + 168LL))(
         *((_QWORD *)this + 5),
         0LL,
         &v17) < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v17),
        v4 >= 0) )
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    {
      v8 = 1LL;
      v9 = 0;
    }
    else
    {
      v8 = -1LL;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) - 1;
    }
    while ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(
              *((_QWORD *)this + 5),
              1LL) > v6 )
    {
      if ( v4 < 0 )
        return (unsigned int)v4;
      v16 = 0;
      v15[0] = 0LL;
      v10 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 96LL))(
             v10,
             v9,
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             v15) >= 0 )
      {
        v18 = 0LL;
        v11 = v15[0];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, &v18) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 72LL))(v18, &v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      }
      v12 = 0;
      if ( !v16 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v9);
        v12 = v4 >= 0;
      }
      if ( v8 == -1 || !v12 )
      {
        v13 = 1;
        if ( v8 != 1 )
          v13 = -1;
        v9 += v13;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    }
    if ( v4 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 240LL))(
                             *((_QWORD *)this + 5),
                             0LL,
                             0LL,
                             0LL);
  }
  return (unsigned int)v4;
}
