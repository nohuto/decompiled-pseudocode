/*
 * XREFs of ?AddPublicObject@@YGHIPAXK@Z @ 0x17E876
 * Callers:
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882 (-xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?GiveObject@@YGHIPAXK@Z @ 0x17EA64 (-GiveObject@@YGHIPAXK@Z.c)
 */

int __userpurge AddPublicObject@<eax>(int a1@<edx>, int a2@<ecx>, unsigned int a3, void *a4, unsigned int a5)
{
  _DWORD *v6; // ecx
  int v7; // eax
  _DWORD *v8; // edx
  void *v10; // [esp+0h] [ebp-8h]
  unsigned int v11; // [esp+4h] [ebp-4h]

  if ( a2 != 2 && a2 != 9 && a2 != 130 )
    return 0;
  v6 = (_DWORD *)gpPublicObjectList;
  if ( !gpPublicObjectList )
    goto LABEL_11;
  do
  {
    if ( v6[1] == a1 )
      break;
    v6 = (_DWORD *)*v6;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_11:
    v8 = (_DWORD *)Win32AllocPool(16, 878998357);
    if ( v8 )
    {
      *v8 = gpPublicObjectList;
      v8[2] = 1;
      v8[1] = a1;
      v8[3] = a3;
      gpPublicObjectList = (int)v8;
      GiveObject(0, v10, v11);
      return 1;
    }
    return 0;
  }
  v7 = v6[2];
  if ( v7 >= 2147483646 )
  {
    UserSetLastError((struct _NT_TIB *)0xC0000095);
    return 0;
  }
  v6[2] = v7 + 1;
  return 1;
}
