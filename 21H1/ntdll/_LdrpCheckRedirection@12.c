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
  _RTL_BALANCED_NODE *Root; // esi
  int v5; // edi
  int v6; // eax
  _RTL_BALANCED_NODE *v7; // eax
  _RTL_BALANCED_NODE *v8; // eax
  _RTL_BALANCED_NODE *v9; // ecx
  _RTL_BALANCED_NODE *i; // ecx
  unsigned int ParentValue; // esi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  _DWORD v15[5]; // [esp+14h] [ebp-14h] BYREF

  v15[0] = LdrpHashAsciizString(a3);
  v15[3] = a2[11];
  v15[4] = a2[12];
  v15[1] = a2[36];
  v15[2] = a3;
  Root = LdrpRedirectionTree.Root;
  if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 )
  {
    if ( LdrpRedirectionTree.Root )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpRedirectionTree ^ (unsigned int)LdrpRedirectionTree.Root);
    else
      Root = 0;
  }
  v5 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
  while ( 1 )
  {
    if ( !Root )
      goto LABEL_26;
    v6 = LdrpCompareRedirectedFunction(v15, Root);
    if ( v6 < 0 )
    {
      v7 = Root->Children[0];
      goto LABEL_10;
    }
    if ( v6 <= 0 )
      break;
    v7 = Root->Children[1];
LABEL_10:
    if ( v5 && v7 )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)v7 ^ (unsigned int)Root);
    else
      Root = v7;
  }
  while ( 1 )
  {
LABEL_26:
    if ( !Root || LdrpCompareRedirectedFunction(v15, Root) )
      return -4530927;
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(
                            LdrpRedirectionByFunctionCalloutFunc,
                            a1[10],
                            Root[3].Children[0]) )
    {
      break;
    }
    v8 = Root->Children[1];
    v9 = Root;
    if ( v8 )
    {
      Root = Root->Children[1];
      for ( i = v8->Children[0]; i; i = i->Children[0] )
        Root = i;
    }
    else
    {
      while ( 1 )
      {
        Root = (_RTL_BALANCED_NODE *)(Root->ParentValue & 0xFFFFFFFC);
        if ( !Root || Root->Children[0] == v9 )
          break;
        v9 = Root;
      }
    }
  }
  ParentValue = Root[2].ParentValue;
  if ( (ShowSnaps & 5) != 0 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrredirect.c",
      299,
      (int)"LdrpCheckRedirection",
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
  return ParentValue;
}
