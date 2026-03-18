/*
 * XREFs of ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016856C
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18018B570 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
        CD3DDevice **a1)
{
  CD3DDevice *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CD3DDevice::Release(v1);
  return result;
}
