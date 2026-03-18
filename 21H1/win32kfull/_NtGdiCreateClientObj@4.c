/*
 * XREFs of _NtGdiCreateClientObj@4 @ 0x1FD7E7
 * Callers:
 *     <none>
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 */

int __stdcall NtGdiCreateClientObj(int a1)
{
  int v1; // esi
  struct OBJECT *Object; // eax
  struct OBJECT *v3; // ebx
  int v4; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  if ( (a1 & 0xFF00FFFF) != 0 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0;
  Object = (struct OBJECT *)AllocateObject(16, 6, 0);
  v3 = Object;
  if ( Object )
  {
    v6 = 0;
    v4 = (int)HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v6, Object, 6u, 0);
    v1 = v4;
    if ( v4 )
    {
      v1 = a1 | v4;
      HmgModifyHandleType(a1 | v4);
    }
    else
    {
      FreeObject(v3, 6);
    }
    if ( v6 )
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 8));
  }
  return v1;
}
