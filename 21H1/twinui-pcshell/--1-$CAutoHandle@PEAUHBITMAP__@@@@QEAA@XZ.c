/*
 * XREFs of ??1?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ @ 0x180363A1C
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x1800C9C5C (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HBITMAP__ *>::~CAutoHandle<HBITMAP__ *>(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteObject(v1);
  return (int)v1;
}
