/*
 * XREFs of _LdrpCheckRedirection@12 @ 0x4B3342C5
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpCompareRedirectedFunction@8 @ 0x4B334418 (_LdrpCompareRedirectedFunction@8.c)
 *     _LdrpHashAsciizString@4 @ 0x4B334A36 (_LdrpHashAsciizString@4.c)
 */

int __fastcall LdrpCheckRedirection(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  _DWORD **v8; // eax
  unsigned int v9; // ecx
  _DWORD *i; // ecx
  int v11; // esi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  _DWORD v15[5]; // [esp+14h] [ebp-14h] BYREF

  v15[0] = LdrpHashAsciizString(a3);
  v15[3] = a2[11];
  v15[4] = a2[12];
  v15[1] = a2[36];
  v15[2] = a3;
  v4 = LdrpRedirectionTree;
  if ( (dword_4B3A6714 & 1) != 0 )
  {
    if ( LdrpRedirectionTree )
      v4 = (unsigned int)&LdrpRedirectionTree ^ LdrpRedirectionTree;
    else
      v4 = 0;
  }
  v5 = dword_4B3A6714 & 1;
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_26;
    v6 = LdrpCompareRedirectedFunction(v15, v4);
    if ( v6 < 0 )
    {
      v7 = *(_DWORD *)v4;
      goto LABEL_10;
    }
    if ( v6 <= 0 )
      break;
    v7 = *(_DWORD *)(v4 + 4);
LABEL_10:
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  while ( 1 )
  {
LABEL_26:
    if ( !v4 || LdrpCompareRedirectedFunction(v15, v4) )
      return -4530927;
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(
                            LdrpRedirectionByFunctionCalloutFunc,
                            a1[10],
                            *(_DWORD *)(v4 + 36)) )
    {
      break;
    }
    v8 = *(_DWORD ***)(v4 + 4);
    v9 = v4;
    if ( v8 )
    {
      v4 = *(_DWORD *)(v4 + 4);
      for ( i = *v8; i; i = (_DWORD *)*i )
        v4 = (unsigned int)i;
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFC;
        if ( !v4 || *(_DWORD *)v4 == v9 )
          break;
        v9 = v4;
      }
    }
  }
  v11 = *(_DWORD *)(v4 + 32);
  if ( (ShowSnaps & 5) != 0 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrredirect.c",
      299,
      "LdrpCheckRedirection",
      2,
      "Import Redirection: %wZ %wZ!%s redirected to %wZ\n",
      a1[11],
      a1[12],
      a2[11],
      a2[12],
      a3,
      *(_DWORD *)&ProcessParameters->RedirectionDllName.Length,
      ProcessParameters->RedirectionDllName.Buffer);
  }
  return v11;
}
