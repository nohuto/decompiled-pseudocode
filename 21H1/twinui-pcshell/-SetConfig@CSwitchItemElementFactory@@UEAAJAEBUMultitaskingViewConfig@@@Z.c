/*
 * XREFs of ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x180375410
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001B8E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008E146 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180363D0C (-CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x180374F18 (-LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEX.c)
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x180375084 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 */

__int64 __fastcall CSwitchItemElementFactory::SetConfig(
        CSwitchItemElementFactory *this,
        const struct MultitaskingViewConfig *a2)
{
  _OWORD *v3; // r8
  __int64 v4; // rcx
  _OWORD *v5; // rax
  __int128 v7; // xmm1
  const struct _GUID *v8; // rdx
  int Instance; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rsi
  LANGID ThreadUILanguage_0; // ax
  _QWORD *v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // rbx
  int DWriteTextFormat; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+5Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = (_OWORD *)((char *)this + 16);
  v4 = 2LL;
  v5 = (_OWORD *)((char *)a2 + 72);
  do
  {
    *v3 = *v5;
    v3[1] = v5[1];
    v3[2] = v5[2];
    v3[3] = v5[3];
    v3[4] = v5[4];
    v3[5] = v5[5];
    v3[6] = v5[6];
    v3 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v3 - 1) = v7;
    --v4;
  }
  while ( v4 );
  *v3 = *v5;
  *((_QWORD *)v3 + 2) = *((_QWORD *)v5 + 2);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  Instance = CIconLoaderInternal_CreateInstance(
               *((struct IApplicationViewIconLoader **)this + 40),
               v8,
               (void **)this + 41);
  if ( Instance >= 0 )
  {
    v11 = (__int64 *)((char *)this + 312);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
    Instance = DWriteCreateFactory(0LL, &GUID_0439fc60_ca44_4994_8dee_3a9af7b732ec, (char *)this + 312);
    if ( Instance < 0 )
    {
      v10 = 55LL;
      goto LABEL_5;
    }
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v13 = (_QWORD *)((char *)this + 304);
    v14 = IsBiDiLocale(ThreadUILanguage_0) != 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
    Instance = MultitaskingViewUtils::LoadDWriteTextFormat(
                 *v11,
                 *((_DWORD *)a2 + 1),
                 0x32C9u,
                 0x32CBu,
                 0x32CAu,
                 0,
                 2u,
                 v14,
                 (_QWORD *)this + 38);
    if ( Instance < 0 )
    {
      v10 = 68LL;
      goto LABEL_5;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v13 + 40LL))(*v13, 1LL);
    if ( Instance < 0 )
    {
      v10 = 70LL;
      goto LABEL_5;
    }
    v21 = 0LL;
    v19 = 0LL;
    v15 = *v11;
    v20 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    DWriteTextFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 160LL))(v15, *v13, &v19);
    Instance = DWriteTextFormat;
    if ( DWriteTextFormat >= 0 )
    {
      DWriteTextFormat = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*v13 + 72LL))(*v13, &v20, v19);
      Instance = DWriteTextFormat;
      if ( DWriteTextFormat >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
        DWriteTextFormat = DWriteUtil::LoadDWriteTextFormat(
                             *v11,
                             (__int64)L"Segoe MDL2 Assets",
                             0x190u,
                             COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)*((int *)this + 45)
                                                                    * (float)*((int *)a2 + 1)) / -72.0) ^ _xmm),
                             2u,
                             2u,
                             v14,
                             (_QWORD *)this + 42);
        Instance = DWriteTextFormat;
        if ( DWriteTextFormat >= 0 )
        {
LABEL_19:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          return (unsigned int)Instance;
        }
        v17 = 85LL;
      }
      else
      {
        v17 = 75LL;
      }
    }
    else
    {
      v17 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)(unsigned int)DWriteTextFormat);
    goto LABEL_19;
  }
  v10 = 54LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
