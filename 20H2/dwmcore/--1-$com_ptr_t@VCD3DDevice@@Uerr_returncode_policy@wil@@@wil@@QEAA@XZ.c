/*
 * XREFs of ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180163C0C
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x180186BF4 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
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
