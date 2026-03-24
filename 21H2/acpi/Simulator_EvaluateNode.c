/*
 * XREFs of Simulator_EvaluateNode @ 0x1C0063B00
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0063910 (Simulator_CallbackWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C002183C (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  int NameSpaceObject; // eax
  unsigned __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16), 0LL, (__int64 *)&v6, 0);
  v3 = v6;
  v4 = NameSpaceObject;
  if ( NameSpaceObject >= 0 && v6 )
    v4 = AMLIEvalNameSpaceObject(
           (unsigned __int64 *)(v6 + 120),
           *(_QWORD *)(a1 + 40),
           *(_DWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 32));
  DereferenceObjectEx(v3);
  return v4;
}
