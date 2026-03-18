/*
 * XREFs of _NtGdiPlgBlt@44 @ 0x1EE276
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 */

int __stdcall NtGdiPlgBlt(
        HDC a1,
        int a2,
        HDC a3,
        LONG a4,
        struct XDCOBJ *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  struct _POINTL v12[3]; // [esp+24h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  memmove(v12, (const void *)a2, 0x18u);
  ms_exc.registration.TryLevel = -2;
  return GrePlgBlt(a1, v12, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
