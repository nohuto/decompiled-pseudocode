/*
 * XREFs of PopEtEnergyContextSetState @ 0x1406F4EF8
 * Callers:
 *     PoSetProcessEnergyTrackingState @ 0x1406174C0 (PoSetProcessEnergyTrackingState.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406F499C (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     RtlStateDurationUpdate @ 0x1402F6F04 (RtlStateDurationUpdate.c)
 *     PopEtStringIntern @ 0x1405F6BB0 (PopEtStringIntern.c)
 *     RtlInternEntryDereference @ 0x1405F8164 (RtlInternEntryDereference.c)
 *     PopEtStringSet @ 0x140683510 (PopEtStringSet.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406F6E88 (PopEtEnergyContextProcessStateUpdate.c)
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
  if ( (v2 & 1) != 0 )
  {
    v13 = (__int64)(a2 + 4);
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(v13 + 2 * v14) );
    if ( v14 )
    {
      v15 = PopEtStringIntern(v13, v14, &v16);
      v4 = v16;
      v10 = v15;
      if ( v15 < 0 )
        goto LABEL_7;
    }
    if ( *(_QWORD *)(v3 + 456) != v4 )
    {
      PopEtStringSet((__int64 *)(v3 + 456), v4);
      v7 = 1;
    }
  }
  v8 = *(_DWORD *)(v3 + 464);
  v9 = a2[1] | (unsigned __int16)(v8 & ~(unsigned __int16)*a2);
  if ( (unsigned __int16)v8 != v9 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    RtlStateDurationUpdate((unsigned __int64 *)(v3 + 120), (v9 & 4) != 0, v12);
    RtlStateDurationUpdate((unsigned __int64 *)(v3 + 416), (v9 & 8) != 0, v12);
    v4 = v16;
    v7 = 1;
    *(_WORD *)(v3 + 464) = v9;
  }
  if ( v7 )
    PopEtEnergyContextProcessStateUpdate(a1);
  v10 = 0;
LABEL_7:
  if ( v4 )
    RtlInternEntryDereference(PopEtGlobals + 56, v4);
  return v10;
}
