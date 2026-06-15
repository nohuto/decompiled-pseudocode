/*
 * XREFs of ??1CRegKey@ATL@@QEAA@XZ @ 0x14005BA98
 * Callers:
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$0 @ 0x14005F091 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$0.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$1 @ 0x14005F09D (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$1.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$2 @ 0x14005F0A9 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CRegKey::~CRegKey(ATL::CRegKey *this)
{
  ATL::CRegKey::Close(this);
}
