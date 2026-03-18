/*
 * XREFs of ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x18026AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18005FC6C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x180268A04 (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ??0?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBitmap@@@Z @ 0x180268A64 (--0-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBit.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180268CC4 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18026AAB8 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180270C40 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CCursorState::SetShape(
        CCursorState *this,
        void *Src,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        float a8)
{
  CSystemMemoryBitmap *v12; // rax
  CSystemMemoryBitmap *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  char *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  size_t Size; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  CSystemMemoryBitmap *v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  std::_Ref_count_base *v31; // [rsp+50h] [rbp-30h]
  void *v32; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  EnterCriticalSection(&g_CursorManager);
  v12 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
  if ( v12 )
    v12 = CSystemMemoryBitmap::CSystemMemoryBitmap(v12, 1);
  wil::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>(
    &v29,
    (__int64)v12);
  v13 = v29;
  LODWORD(v31) = 0;
  v30 = 0x100000057LL;
  v14 = CSystemMemoryBitmap::HrInit(v29, a3, a4, (const struct PixelFormatInfo *)&v30, 0);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v33[0] = 0;
    v33[1] = 0;
    v33[2] = a3;
    v33[3] = a4;
    v16 = *((_QWORD *)v13 + 3);
    v28 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(v16 + 24))(
            (__int64)v13 + 24,
            v33,
            2LL,
            &v28);
    v15 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, size_t *, void **))(*(_QWORD *)v28 + 24LL))(v28, &Size, &v32);
      v15 = v17;
      if ( v17 >= 0 )
      {
        memcpy_0(v32, Src, (unsigned int)Size);
        v19 = (char *)this + 32;
        v20 = std::make_shared<CCursorState::ShapeData,>(&v30);
        std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)this + 4, v20);
        if ( v31 )
          std::_Ref_count_base::_Decref(v31);
        **(_DWORD **)v19 = a5;
        *(_DWORD *)(*(_QWORD *)v19 + 4LL) = a6;
        v21 = 0LL;
        *(_DWORD *)(*(_QWORD *)v19 + 8LL) = 1;
        *(_DWORD *)(*(_QWORD *)v19 + 12LL) = a3;
        do
        {
          *(_BYTE *)(v21 + *(_QWORD *)v19 + 16) = 0;
          ++v21;
        }
        while ( v21 < 2 );
        v22 = (unsigned __int64)v13 + 48;
        v23 = -(__int64)(v13 != 0LL);
        v24 = *(_QWORD *)(*(_QWORD *)v19 + 24LL);
        v25 = v22 & v23;
        *(_QWORD *)(*(_QWORD *)v19 + 24LL) = v25;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        *((float *)this + 7) = a8;
        *((_BYTE *)this + 18) = a7;
        *((_BYTE *)this + 21) = 1;
        CCursorState::ScheduleCompositionPass(this);
        v15 = 0;
        goto LABEL_19;
      }
      v18 = 1137LL;
    }
    else
    {
      v18 = 1133LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v17);
LABEL_19:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x469,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
    (const char *)(unsigned int)v14);
LABEL_20:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
  LeaveCriticalSection(&g_CursorManager);
  return v15;
}
