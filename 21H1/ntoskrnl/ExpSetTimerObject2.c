/*
 * XREFs of ExpSetTimerObject2 @ 0x14024261C
 * Callers:
 *     ExpSetTimer2 @ 0x1402424F4 (ExpSetTimer2.c)
 *     NtSetTimerEx @ 0x14026A1F0 (NtSetTimerEx.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x140375FB0 (ExpSetTimer.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x140242E38 (ExpTimerSetParametersAreValid.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 */

__int64 __fastcall ExpSetTimerObject2(_QWORD *Object, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  char v7; // cl

  v4 = 0;
  if ( a3 && (*((_BYTE *)Object + 129) & 2) != 0 )
  {
    v4 = -1073741811;
  }
  else if ( a4 && !(unsigned __int8)ExpTimerSetParametersAreValid(a4) )
  {
    v4 = -1073741583;
  }
  else
  {
    if ( a2 )
    {
      v6 = *a2;
      v7 = 1;
    }
    else
    {
      v7 = 0;
      v6 = 0LL;
    }
    Object[18] = v6;
    Object[19] = 0LL;
    if ( a4 )
      Object[19] = *(_QWORD *)(a4 + 8);
    if ( v7 )
      KeSetTimer2(Object, Object[18]);
    else
      KeCancelTimer2(Object, 0LL);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v4;
}
