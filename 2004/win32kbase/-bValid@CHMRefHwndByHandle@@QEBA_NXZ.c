/*
 * XREFs of ?bValid@CHMRefHwndByHandle@@QEBA_NXZ @ 0x1C0026590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHMRefHwndByHandle::bValid(CHMRefHwndByHandle *this)
{
  return *((_QWORD *)this + 1) != 0LL;
}
