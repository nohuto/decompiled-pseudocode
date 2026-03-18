/*
 * XREFs of ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C0142B4C
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C01423A0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx

  v2 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 2);
  v5 = 4 * v2;
  v6 = abs64(v5);
  v7 = 8 * v4;
  v8 = 8 * v4 - v5;
  if ( v8 >= 0 )
    v9 = 8 * v4 - v5;
  else
    v9 = v5 - v7;
  if ( v6 <= v9 )
  {
    if ( v8 >= 0 )
      v6 = v8;
    else
      v6 = v5 - v7;
  }
  *a2 = v6;
}
