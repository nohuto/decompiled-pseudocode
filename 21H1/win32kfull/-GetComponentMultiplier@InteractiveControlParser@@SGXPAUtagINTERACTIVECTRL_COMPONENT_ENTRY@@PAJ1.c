/*
 * XREFs of ?GetComponentMultiplier@InteractiveControlParser@@SGXPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PAJ1@Z @ 0x1B5DDA
 * Callers:
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_CAPABILITIES@@PAPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1B5AB3 (-CreateAndLinkComponent@InteractiveControlParser@@CGJPAU_HIDP_VALUE_CAPS@@HPAU_INTERACTIVECTRL_C.c)
 * Callees:
 *     <none>
 */

void __userpurge InteractiveControlParser::GetComponentMultiplier(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a3,
        int *a4,
        int *a5)
{
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // esi

  if ( !a2[17] && !a2[16] )
  {
    a2[16] = a2[14];
    a2[17] = a2[15];
  }
  *a1 = 1;
  *(_DWORD *)a3 = 1;
  v6 = a2[12] & 0xF;
  if ( (unsigned int)v6 >= 8 )
    v6 -= 16;
  v7 = a2[13];
  switch ( v7 )
  {
    case 17:
      v8 = 1000 * *a1;
LABEL_17:
      *a1 = v8;
      goto LABEL_18;
    case 19:
      v8 = 2540 * *a1;
      goto LABEL_17;
    case 18:
      v8 = 5730 * *a1;
      goto LABEL_17;
    case 20:
      v8 = 100 * *a1;
      goto LABEL_17;
  }
  if ( !v7 && a2[2] == 3 )
  {
    v8 = 36000 * *a1;
    goto LABEL_17;
  }
LABEL_18:
  if ( v6 < 0 )
  {
    v9 = -v6;
    v6 = 0;
    do
    {
      *(_DWORD *)a3 *= 10;
      --v9;
    }
    while ( v9 );
  }
  while ( v6 > 0 )
  {
    --v6;
    *a1 *= 10;
  }
}
