/*
 * XREFs of ParseNameObj @ 0x1C00216C0
 * Callers:
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C000B100 (ReadObject.c)
 *     ParseAndGetNameSpaceObject @ 0x1C002155C (ParseAndGetNameSpaceObject.c)
 *     PushCall @ 0x1C002176C (PushCall.c)
 */

__int64 __fastcall ParseNameObj(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int NameSpaceObject; // esi
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rbx
  unsigned int Object; // eax
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v10 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject(a1, (char **)(a1 + 120), v2, &v10, 0);
  if ( !NameSpaceObject )
  {
    v6 = v10;
    for ( i = v10; *(_WORD *)(i + 66) == 128; i = *(_QWORD *)(i + 80) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 112));
      v6 = v10;
    }
    if ( *(_WORD *)(i + 66) == 8 )
      Object = PushCall(a1, i, a2);
    else
      Object = ReadObject(a1, i + 64, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(i);
    DereferenceObjectEx(v6);
  }
  return NameSpaceObject;
}
