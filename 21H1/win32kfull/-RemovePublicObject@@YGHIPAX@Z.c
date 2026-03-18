/*
 * XREFs of ?RemovePublicObject@@YGHIPAX@Z @ 0x17EB8B
 * Callers:
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     _FreeDdeXact@4 @ 0x17FF12 (_FreeDdeXact@4.c)
 * Callees:
 *     ?GiveObject@@YGHIPAXK@Z @ 0x17EA64 (-GiveObject@@YGHIPAXK@Z.c)
 */

int __fastcall RemovePublicObject(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  void *v6; // [esp+0h] [ebp-8h]
  unsigned int v7; // [esp+4h] [ebp-4h]

  if ( a1 != 2 && a1 != 9 && a1 != 130 )
    return 0;
  v2 = (_DWORD *)gpPublicObjectList;
  v3 = 0;
  if ( !gpPublicObjectList )
    return 0;
  do
  {
    if ( v2[1] == a2 )
      break;
    v3 = v2;
    v2 = (_DWORD *)*v2;
  }
  while ( v2 );
  if ( !v2 )
    return 0;
  if ( v2[2]-- == 1 )
  {
    GiveObject(a2, a1, v2[3], v6, v7);
    if ( v3 )
      *v3 = *v2;
    else
      gpPublicObjectList = *v2;
    Win32FreePool(v2);
  }
  return 1;
}
