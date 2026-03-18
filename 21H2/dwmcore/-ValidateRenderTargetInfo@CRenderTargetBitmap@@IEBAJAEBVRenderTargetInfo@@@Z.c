/*
 * XREFs of ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x180018FD4
 * Callers:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018E9C (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::ValidateRenderTargetInfo(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2)
{
  unsigned int v2; // edi
  char *v6; // rcx
  _DWORD *v7; // rcx
  int v8; // ebx
  char *v9; // rcx
  _DWORD *v10; // rax
  char *v11; // rcx
  unsigned int v12; // ecx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 17) )
  {
    if ( *((_BYTE *)this + 144) )
    {
      v6 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v6 + 32LL))(v6, &v13);
      if ( *(_DWORD *)a2 == *v7
        && *((_DWORD *)a2 + 1) == v7[1]
        && ((v8 = *((_DWORD *)a2 + 2),
             v9 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16,
             v10 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v9 + 16LL))(v9, &v13),
             LODWORD(v7) = *v10,
             *v10 == DisplayId::None)
         || (_DWORD)v7 == v8
         || v8 == DisplayId::All) )
      {
        v11 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v11 + 24LL))(v11) && !*((_BYTE *)a2 + 20) )
        {
          v2 = -2147024891;
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024891, 0x19Eu, 0LL);
        }
      }
      else
      {
        v2 = -2003304287;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2003304287, 0x199u, 0LL);
      }
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x1A4u, 0LL);
  }
  return v2;
}
