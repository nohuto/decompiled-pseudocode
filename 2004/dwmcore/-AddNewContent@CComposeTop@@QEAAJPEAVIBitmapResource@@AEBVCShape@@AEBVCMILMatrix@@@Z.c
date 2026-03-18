/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801FA818
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B3744 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x18003E930 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801FAECC (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rdx
  struct CShape *v14; // rcx
  struct CShape *v16; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    if ( *(_QWORD *)this != GetCurrentFrameId() )
    {
      v10 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = 0LL;
      if ( v10 )
        std::default_delete<CShape>::operator()(v9, v10);
      *(_QWORD *)this = GetCurrentFrameId();
    }
    v11 = CShape::CopyShape(a3, 0LL, &v16);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x33u, 0LL);
    }
    else
    {
      v13 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
      v14 = v16;
      *((_QWORD *)this + 2) = v16;
      if ( v13 )
        std::default_delete<CShape>::operator()((__int64)v14, v13);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((__int64 *)this + 1, (__int64)a2);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 40) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)this + 56) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)this + 72) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 22) = *((_DWORD *)a4 + 16);
      CMILMatrix::SetToInverse((CComposeTop *)((char *)this + 92), a4);
    }
  }
  return v8;
}
