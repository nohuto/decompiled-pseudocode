/*
 * XREFs of ??1ViewEventRegistration@@QEAA@XZ @ 0x18027F2D0
 * Callers:
 *     ?Release@?$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ @ 0x180283F80 (-Release@-$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@UViewEventRegistration@@@std@@EEAAXXZ @ 0x180298C40 (-_Destroy@-$_Ref_count_obj@UViewEventRegistration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ViewEventRegistration::~ViewEventRegistration(ViewEventRegistration *this)
{
  HSTRING v2; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v2 = (HSTRING)*((_QWORD *)this + 1);
  if ( v2 )
    WindowsDeleteString(v2);
  if ( *(_QWORD *)this )
    WindowsDeleteString(*(HSTRING *)this);
}
