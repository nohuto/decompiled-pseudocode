/*
 * XREFs of _LdrpBuildImportRedirection@8 @ 0x4B334238
 * Callers:
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 */

int __thiscall LdrpBuildImportRedirection(int *this)
{
  unsigned int v2; // esi
  int ProcedureAddress; // edi
  int v4; // ecx
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  ProcedureAddress = LdrpGetProcedureAddress(this[6], "__RedirectionInformation__", 0, (unsigned int *)&v8);
  if ( ProcedureAddress >= 0 )
  {
    LdrpGetProcedureAddress(this[6], "__ShouldApplyRedirection__", 0, (unsigned int *)&LdrpRedirectionCalloutFunc);
    LdrpGetProcedureAddress(
      this[6],
      "__ShouldApplyRedirectionToFunction__",
      0,
      (unsigned int *)&LdrpRedirectionByFunctionCalloutFunc);
    v5 = v8;
    if ( *v8 == 1 )
    {
      if ( v8[1] )
      {
        v6 = 0;
        v8 = 0;
        do
        {
          ProcedureAddress = LdrpAddRedirectedFunction((int)v6 + v5[2], v2, v4);
          if ( ProcedureAddress < 0 )
            break;
          ++v2;
          v6 = v8 + 3;
          v8 += 3;
        }
        while ( v2 < v5[1] );
      }
    }
    else
    {
      return -1073739509;
    }
  }
  return ProcedureAddress;
}
