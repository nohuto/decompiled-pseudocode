/*
 * XREFs of ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800BB8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::EnumerateBrushes(
        CMultiPrimitiveDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  unsigned int v3; // esi
  __int128 *v5; // rbx
  int v8; // r12d
  __int128 *v9; // rdi
  __int64 v10; // rax
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // rcx

  v3 = 0;
  v5 = (__int128 *)*((_QWORD *)this + 11);
  v8 = *(_DWORD *)(*((_QWORD *)this + 9) + 48LL);
  v9 = &v5[*((_QWORD *)this + 10)];
  while ( v5 != v9 )
  {
    v10 = *((_QWORD *)this + 9);
    v11 = *v5;
    *(_BYTE *)(v10 + 52) = 1;
    *(_OWORD *)(v10 + 32) = v11;
    *(_DWORD *)(v10 + 48) = v8;
    v12 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 9), a3);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x46u, 0LL);
      return v3;
    }
    ++v5;
  }
  return v3;
}
