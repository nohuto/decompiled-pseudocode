/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0030BE4
 * Callers:
 *     xxxCreateClassSmIcon @ 0x1C0030AF4 (xxxCreateClassSmIcon.c)
 *     ReferenceClass @ 0x1C0103CE0 (ReferenceClass.c)
 *     xxxSetClassIcon @ 0x1C023EB38 (xxxSetClassIcon.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = 0LL;
  if ( a3 )
    v3 = *a3;
  *(_QWORD *)(*(_QWORD *)(a2 - 104) + 56LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
