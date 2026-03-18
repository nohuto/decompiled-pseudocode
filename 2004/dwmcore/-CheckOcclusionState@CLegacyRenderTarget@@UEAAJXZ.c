/*
 * XREFs of ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800BB8F8
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800EF260 (-CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ @ 0x1800EF270 (-CheckOcclusionState@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BBC48 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckOcclusionState(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CLegacyRenderTarget *)((char *)this - 18664);
  v3 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2333) + 264LL))((char *)this - 18664, &v11);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802D9558, 4u, v3, 0x7Cu, 0LL);
  }
  else if ( !v11 )
  {
    if ( *((_BYTE *)this - 74) )
      goto LABEL_8;
    v6 = 0LL;
    if ( g_pComposition )
      v6 = *((_QWORD *)g_pComposition + 44);
    if ( *((_QWORD *)this - 13) != v6 - 1 )
    {
LABEL_8:
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2313) + 192LL))(*((_QWORD *)this - 2313));
      v10 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802D9558, 4u, v8, 0x86u, 0LL);
      return (unsigned int)CLegacyRenderTarget::CheckForOcclusionChange(v1, v10);
    }
  }
  return v5;
}
