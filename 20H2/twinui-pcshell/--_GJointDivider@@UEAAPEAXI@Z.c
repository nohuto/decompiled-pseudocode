/*
 * XREFs of ??_GJointDivider@@UEAAPEAXI@Z @ 0x180416570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x18038468C (--1-$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ.c)
 */

JointDivider *__fastcall JointDivider::`scalar deleting destructor'(JointDivider *this, char a2)
{
  CAutoHandle<HFONT__ *>::~CAutoHandle<HFONT__ *>((void **)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
