/*
 * XREFs of ?GetResolutionMultiplierForDevice@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@JJJ@Z @ 0x1B5EED
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

int __userpurge InteractiveControlParser::GetResolutionMultiplierForDevice@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v6; // kr00_8
  __int64 v7; // rax

  v6 = *(int *)(a2 + 112) * (__int64)a1;
  if ( !v6 || !a1 )
    goto LABEL_6;
  v7 = *(int *)(a2 + 108) / v6;
  if ( (int)v7 >= (int)a3 )
  {
    if ( (int)v7 <= a4 )
      return v7;
LABEL_6:
    LODWORD(v7) = a4;
    return v7;
  }
  LODWORD(v7) = a3;
  return v7;
}
