/*
 * XREFs of _LdrpBuildImportRedirection@8 @ 0x4B334238
 * Callers:
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 */

int __thiscall LdrpBuildImportRedirection(char **this)
{
  _RTL_BALANCED_NODE *v2; // esi
  int ProcedureAddress; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  ProcedureAddress = LdrpGetProcedureAddress(this[6], "__RedirectionInformation__", 0, (char **)&v8);
  if ( ProcedureAddress >= 0 )
  {
    LdrpGetProcedureAddress(this[6], "__ShouldApplyRedirection__", 0, (char **)&LdrpRedirectionCalloutFunc);
    LdrpGetProcedureAddress(
      this[6],
      "__ShouldApplyRedirectionToFunction__",
      0,
      (char **)&LdrpRedirectionByFunctionCalloutFunc);
    v5 = v8;
    if ( *(_DWORD *)v8 == 1 )
    {
      if ( *(_DWORD *)(v8 + 4) )
      {
        v6 = 0;
        v8 = 0;
        do
        {
          ProcedureAddress = LdrpAddRedirectedFunction(v6 + *(_DWORD *)(v5 + 8), v2, v4);
          if ( ProcedureAddress < 0 )
            break;
          v2 = (_RTL_BALANCED_NODE *)((char *)v2 + 1);
          v6 = v8 + 12;
          v8 += 12;
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v5 + 4) );
      }
    }
    else
    {
      return -1073739509;
    }
  }
  return ProcedureAddress;
}
