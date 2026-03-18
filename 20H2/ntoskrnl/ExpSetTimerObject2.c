/*
 * XREFs of ExpSetTimerObject2 @ 0x1402E0A4C
 * Callers:
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x140289560 (NtSetTimerEx.c)
 *     ExpSetTimer2 @ 0x1402E0924 (ExpSetTimer2.c)
 *     ExpSetTimer @ 0x140378D50 (ExpSetTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1402E1268 (ExpTimerSetParametersAreValid.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
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
