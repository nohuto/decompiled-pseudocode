/*
 * XREFs of PopEtEnergyContextSetState @ 0x1406836F0
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406831A8 (PoEnergyContextUpdateComponentPower.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406D5E88 (PoSetProcessEnergyTrackingState.c)
 * Callees:
 *     RtlStateDurationUpdate @ 0x140209110 (RtlStateDurationUpdate.c)
 *     RtlInternEntryDereference @ 0x140675014 (RtlInternEntryDereference.c)
 *     PopEtStringIntern @ 0x140675BB8 (PopEtStringIntern.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14068191C (PopEtEnergyContextProcessStateUpdate.c)
 *     PopEtStringSet @ 0x1407A6508 (PopEtStringSet.c)
 */

__int64 __fastcall PopEtEnergyContextSetState(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v7; // r14
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // edi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[3];
  v3 = *(_QWORD *)(a1 + 2280);
  v4 = 0LL;
  v16 = 0LL;
  v7 = 0;
  if ( (v2 & 1) == 0 )
    goto LABEL_2;
  v13 = (__int64)(a2 + 4);
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(v13 + 2 * v14) );
  if ( !v14 || (v15 = PopEtStringIntern(v13, v14, &v16), v4 = v16, v10 = v15, v15 >= 0) )
  {
    if ( *(_QWORD *)(v3 + 456) != v4 )
    {
      PopEtStringSet(v3 + 456, v4);
      v7 = 1;
    }
LABEL_2:
    v8 = *(_DWORD *)(v3 + 464);
    v9 = a2[1] | (unsigned __int16)(v8 & ~(unsigned __int16)*a2);
    if ( (unsigned __int16)v8 == v9 )
    {
      if ( !v7 )
      {
LABEL_4:
        v10 = 0;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlStateDurationUpdate((unsigned __int64 *)(v3 + 120), (v9 & 4) != 0, v12);
      RtlStateDurationUpdate((unsigned __int64 *)(v3 + 416), (v9 & 8) != 0, v12);
      v4 = v16;
      *(_WORD *)(v3 + 464) = v9;
    }
    PopEtEnergyContextProcessStateUpdate(a1);
    goto LABEL_4;
  }
LABEL_5:
  if ( v4 )
    RtlInternEntryDereference(PopEtGlobals + 56, v4);
  return v10;
}
