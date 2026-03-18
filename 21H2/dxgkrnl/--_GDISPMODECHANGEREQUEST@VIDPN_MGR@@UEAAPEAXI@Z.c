/*
 * XREFs of ??_GDISPMODECHANGEREQUEST@VIDPN_MGR@@UEAAPEAXI@Z @ 0x1C0068710
 * Callers:
 *     ??_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z @ 0x1C002D200 (--_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z.c)
 *     ??_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z @ 0x1C002D210 (--_EDISPMODECHANGEREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

VIDPN_MGR::DISPMODECHANGEREQUEST *__fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::`scalar deleting destructor'(
        VIDPN_MGR::DISPMODECHANGEREQUEST *this,
        char a2)
{
  *((_DWORD *)this + 10) |= 0x6D640000u;
  *((_QWORD *)this + 4) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 3) = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
