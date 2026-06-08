/*
 * XREFs of RegisterSubspaceForGenAddr @ 0x1C003291C
 * Callers:
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 * Callees:
 *     RegisterSubspace @ 0x1C0032734 (RegisterSubspace.c)
 */

__int64 __fastcall RegisterSubspaceForGenAddr(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 3);
  v5 = 0LL;
  result = RegisterSubspace(a1, v2, &v5);
  if ( (int)result >= 0 )
  {
    if ( *(_DWORD *)(v5 + 48) == v2 )
    {
      if ( *(_QWORD *)(a2 + 4) <= (__int64)*(unsigned int *)(v5 + 96) )
      {
        *(_QWORD *)(a2 + 16) = v5;
        return 0LL;
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
