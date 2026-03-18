/*
 * XREFs of ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C021AB18
 * Callers:
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B5CC (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     FreeDdeXact @ 0x1C021C620 (FreeDdeXact.c)
 * Callees:
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C021A8FC (-GiveObject@@YAHIPEAXK@Z.c)
 */

__int64 __fastcall RemovePublicObject(int a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi

  if ( a1 != 2 && a1 != 9 && a1 != 130 )
    return 0LL;
  v2 = gpPublicObjectList;
  v3 = 0LL;
  if ( !gpPublicObjectList )
    return 0LL;
  do
  {
    if ( *(void **)(v2 + 8) == a2 )
      break;
    v3 = (_QWORD *)v2;
    v2 = *(_QWORD *)v2;
  }
  while ( v2 );
  if ( !v2 )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 16))-- == 1 )
  {
    GiveObject(a1, a2, *(_DWORD *)(v2 + 20));
    if ( v3 )
      *v3 = *(_QWORD *)v2;
    else
      gpPublicObjectList = *(_QWORD *)v2;
    Win32FreePool(v2);
  }
  return 1LL;
}
