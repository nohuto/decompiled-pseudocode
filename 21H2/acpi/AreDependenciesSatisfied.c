/*
 * XREFs of AreDependenciesSatisfied @ 0x1C0027CAC
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C0027C04 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 */

bool __fastcall AreDependenciesSatisfied(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned int v5; // edi
  _BYTE **v6; // rsi
  __int64 v7; // rbp
  volatile signed __int32 *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v9 = 0LL;
  v5 = *v2;
  if ( *v2 )
  {
    v6 = (_BYTE **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v6, a1, &v9, 0) < 0 )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)v9 + 104LL);
      AMLIDereferenceHandleEx(v9);
      if ( !v7 )
        break;
      if ( *(_DWORD *)(v7 + 368) != 3 )
        break;
      ++v3;
      v6 += 5;
    }
    while ( v3 < v5 );
  }
  return v3 == v5;
}
