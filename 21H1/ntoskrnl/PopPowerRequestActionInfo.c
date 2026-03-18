/*
 * XREFs of PopPowerRequestActionInfo @ 0x1407000C0
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopClearSpecialRequest @ 0x1408DCE8C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408DD27C (PopSetSpecialRequest.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  void *v2; // rcx
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  IsAppContainerOrIdentifyLevelContext = ObReferenceObjectByHandleWithTag(
                                           v2,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v5 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( !PreviousMode )
        goto LABEL_5;
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        goto LABEL_5;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) != 4 || PreviousMode == 1 )
      {
LABEL_5:
        v6 = *(unsigned int *)(a1 + 8);
        if ( *(_BYTE *)(a1 + 12) )
        {
          if ( v5[136] )
            v7 = PopSetSpecialRequest(v5, v6, *(_QWORD *)(a1 + 16));
          else
            v7 = PoSetPowerRequestInternal((__int64)v5, v6);
        }
        else if ( v5[136] )
        {
          v7 = PopClearSpecialRequest(v5, v6);
        }
        else
        {
          v7 = PoClearPowerRequestInternal((__int64)v5, v6);
        }
        IsAppContainerOrIdentifyLevelContext = v7;
        goto LABEL_9;
      }
      IsAppContainerOrIdentifyLevelContext = -1073741637;
    }
LABEL_9:
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
