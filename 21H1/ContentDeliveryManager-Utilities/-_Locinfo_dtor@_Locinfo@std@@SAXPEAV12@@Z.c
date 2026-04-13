/*
 * XREFs of ?_Locinfo_dtor@_Locinfo@std@@SAXPEAV12@@Z @ 0x1800AEC98
 * Callers:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180027958 (--1_Locinfo@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // rdx

  v1 = (const char *)*((_QWORD *)a1 + 9);
  if ( v1 )
    setlocale(0, v1);
}
