/*
 * XREFs of ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C33FC
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060F5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800616F0 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::CVolumeSoftware(CVolumeSoftware *this, struct IVolumeStrip *a2)
{
  CVolumeSoftware *result; // rax

  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 256), 0, 0);
  *((_QWORD *)this + 38) = 0LL;
  result = this;
  *((_DWORD *)this + 74) = 1;
  *((_BYTE *)this + 300) = 0;
  return result;
}
