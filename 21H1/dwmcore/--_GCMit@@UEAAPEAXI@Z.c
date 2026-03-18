/*
 * XREFs of ??_GCMit@@UEAAPEAXI@Z @ 0x180234010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CMit@@UEAA@XZ @ 0x180233FC4 (--1CMit@@UEAA@XZ.c)
 */

CMit *__fastcall CMit::`scalar deleting destructor'(CMit *this, char a2)
{
  CMit::~CMit(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
