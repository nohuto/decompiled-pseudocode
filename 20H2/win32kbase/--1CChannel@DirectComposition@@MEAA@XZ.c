/*
 * XREFs of ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00670C0
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0067110 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C01CE3B0 (--_GCChannel@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this, unsigned int a2)
{
  bool v2; // zf
  struct _ERESOURCE *v4; // rcx

  v2 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v2 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5), a2);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)this + 4));
  }
}
