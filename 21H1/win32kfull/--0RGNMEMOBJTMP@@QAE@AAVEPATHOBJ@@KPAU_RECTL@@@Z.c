/*
 * XREFs of ??0RGNMEMOBJTMP@@QAE@AAVEPATHOBJ@@KPAU_RECTL@@@Z @ 0xF6E93
 * Callers:
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__thiscall RGNMEMOBJTMP::RGNMEMOBJTMP(
        RGNMEMOBJTMP *this,
        struct EPATHOBJ *a2,
        unsigned int a3,
        struct _RECTL *a4)
{
  *((_DWORD *)this + 1) = 0;
  RGNMEMOBJ::vCreate(this, a2, a3, 0);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
