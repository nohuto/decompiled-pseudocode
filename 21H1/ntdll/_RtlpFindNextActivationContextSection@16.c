/*
 * XREFs of _RtlpFindNextActivationContextSection@16 @ 0x4B2CD550
 * Callers:
 *     _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660 (_RtlFindActivationContextSectionGuid@20.c)
 * Callees:
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 */

int __fastcall RtlpFindNextActivationContextSection(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int ActivationContext; // esi
  char *SystemDefaultActivationContextData; // edi
  unsigned int v7; // ecx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // eax
  _PEB *v9; // eax
  int result; // eax
  int v11; // ecx
  struct _TEB *v13; // [esp+10h] [ebp-8h]
  _PEB *ProcessEnvironmentBlock; // [esp+14h] [ebp-4h]

  v13 = NtCurrentTeb();
  ActivationContext = 0;
  ProcessEnvironmentBlock = v13->ProcessEnvironmentBlock;
  SystemDefaultActivationContextData = 0;
  if ( a4 )
    *a4 = 0;
  v7 = *(_DWORD *)(a1 + 16);
  while ( 1 )
  {
    if ( !v7 )
    {
      ActivationContextStackPointer = v13->ActivationContextStackPointer;
      if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
      {
        ActivationContext = (int)ActivationContextStackPointer->ActiveFrame->ActivationContext;
        if ( ActivationContext )
        {
          if ( ActivationContext == -4 )
          {
            SystemDefaultActivationContextData = (char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
          }
          else
          {
            if ( ActivationContext == -3 )
            {
              SystemDefaultActivationContextData = "Actx ";
LABEL_19:
              *(_DWORD *)(a1 + 16) = 1;
              goto LABEL_9;
            }
            SystemDefaultActivationContextData = *(char **)(ActivationContext + 16);
          }
        }
        if ( SystemDefaultActivationContextData )
          goto LABEL_19;
      }
LABEL_7:
      v9 = ProcessEnvironmentBlock;
      ActivationContext = 0;
      SystemDefaultActivationContextData = (char *)ProcessEnvironmentBlock->ActivationContextData;
      if ( SystemDefaultActivationContextData )
      {
        *(_DWORD *)(a1 + 16) = 2;
        goto LABEL_9;
      }
      goto LABEL_20;
    }
    if ( v7 == 1 )
      goto LABEL_7;
    if ( v7 != 2 )
      goto LABEL_31;
    v9 = ProcessEnvironmentBlock;
LABEL_20:
    SystemDefaultActivationContextData = (char *)v9->SystemDefaultActivationContextData;
    ActivationContext = -4;
    if ( SystemDefaultActivationContextData )
    {
      *(_DWORD *)(a1 + 16) = 3;
      goto LABEL_9;
    }
LABEL_31:
    if ( v7 > 3 )
      return -1073741595;
LABEL_9:
    if ( !SystemDefaultActivationContextData )
      return -1072365567;
    result = RtlpLocateActivationContextSection(
               SystemDefaultActivationContextData,
               *(const void **)(a1 + 8),
               *(_DWORD *)(a1 + 12),
               a2,
               a3);
    if ( result >= 0 )
      break;
    if ( result == -1072365567 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      if ( v7 != 3 )
        continue;
    }
    return result;
  }
  if ( ActivationContext == -4 )
    v11 = 2;
  else
    v11 = 0;
  *(_DWORD *)(a1 + 20) = v11 | (ActivationContext == 0);
  if ( a4 )
    *a4 = ActivationContext != -4 ? ActivationContext : 0;
  return 0;
}
