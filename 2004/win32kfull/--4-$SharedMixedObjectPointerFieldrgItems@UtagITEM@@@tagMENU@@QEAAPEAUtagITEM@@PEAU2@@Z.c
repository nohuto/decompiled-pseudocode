/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z @ 0x1C005DF84
 * Callers:
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(*(a1 - 6) + 32LL) = v2;
  result = a2;
  *a1 = a2;
  return result;
}
