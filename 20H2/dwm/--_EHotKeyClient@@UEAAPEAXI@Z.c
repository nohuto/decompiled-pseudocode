/*
 * XREFs of ??_EHotKeyClient@@UEAAPEAXI@Z @ 0x14000AB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1400031B8 (--3@YAXPEAX_K@Z.c)
 *     ??1HotKeyClient@@UEAA@XZ @ 0x14000A984 (--1HotKeyClient@@UEAA@XZ.c)
 */

HotKeyClient *__fastcall HotKeyClient::`vector deleting destructor'(HotKeyClient *this, char a2)
{
  HotKeyClient::~HotKeyClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
