/*
 * XREFs of ??1?$CTSmartObj@PEAUHDC__@@V?$CAutoHandle_Policy@PEAUHDC__@@@@@@QEAA@XZ @ 0x1800BA5DC
 * Callers:
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18046D6CC (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CTSmartObj<HDC__ *,CAutoHandle_Policy<HDC__ *>>::~CTSmartObj<HDC__ *,CAutoHandle_Policy<HDC__ *>>(
        HDC *a1)
{
  HDC v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteDC(v1);
  return (int)v1;
}
