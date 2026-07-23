/*
 * XREFs of KiCheckGroupSchedulingQuantumEnd @ 0x1402CCD50
 * Callers:
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckGroupSchedulingQuantumEnd(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // r8
  char v5; // dl
  __int64 v6; // r9
  char v7; // al
  unsigned __int64 v8; // rax

  if ( MEMORY[0xFFFFF78000000320] > *(_QWORD *)(a1 + 33624) )
    return 1;
  v2 = *(_QWORD *)(a2 + 104);
  if ( !v2 )
    return 0;
  v4 = *(unsigned int *)(a1 + 216) + v2;
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v5 = *(_BYTE *)(v4 + 112);
    v6 = v4 - *(unsigned int *)(a1 + 216);
    v7 = v5 & 0x10;
    if ( (v5 & 4) == 0 )
      break;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v4 + 24);
LABEL_9:
      if ( *(_QWORD *)v4 >= v8 )
        return 1;
      goto LABEL_10;
    }
    if ( (v5 & 2) == 0 && (*(__int64 *)(v6 + 48) <= 0 || *(_QWORD *)v4 >= *(_QWORD *)(v4 + 24)) )
      return 1;
LABEL_10:
    v4 = *(_QWORD *)(v4 + 408);
    if ( !v4 )
      return 0;
  }
  if ( v7 )
  {
    v8 = *(_QWORD *)(v4 + 8);
    goto LABEL_9;
  }
  if ( (v5 & 2) != 0 || *(__int64 *)(v6 + 48) > 0 )
    goto LABEL_10;
  return 1;
}
