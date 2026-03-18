/*
 * XREFs of ??0DEVLOCKBLTOBJ@@QAE@AAVXDCOBJ@@0@Z @ 0x1EBF73
 * Callers:
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 */

DEVLOCKBLTOBJ *__thiscall DEVLOCKBLTOBJ::DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, DC **a2, DC **a3)
{
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 30) = 256;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_WORD *)this + 38) = 256;
  DEVLOCKBLTOBJ::bLock(this, a2, a3, 0);
  return this;
}
