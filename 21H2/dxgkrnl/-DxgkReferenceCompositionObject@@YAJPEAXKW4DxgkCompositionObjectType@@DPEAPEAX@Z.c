/*
 * XREFs of ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C0005290
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DxgkReferenceCompositionObject(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  __int64 result; // rax

  LOBYTE(a3) = a4;
  result = DxgkCompositionObject::ResolveHandle(a1, a2, a3);
  if ( (int)result >= 0 )
    *a5 = 0LL;
  return result;
}
