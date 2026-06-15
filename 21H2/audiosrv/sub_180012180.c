/*
 * XREFs of sub_180012180 @ 0x180012180
 * Callers:
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012180(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( qword_18019E398 )
    return qword_18019E398(a1, a2, retaddr, a2);
  else
    return (**a2)(a2, a1);
}
