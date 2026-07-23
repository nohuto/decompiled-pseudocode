/*
 * XREFs of ExpSetTimerObject2 @ 0x14026E4AC
 * Callers:
 *     ExpSetTimer2 @ 0x14026E384 (ExpSetTimer2.c)
 *     NtCancelTimer @ 0x1402ED350 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x1402ED9F0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140376640 (ExpSetTimer.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14026DD80 (KeCancelTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x14026E548 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
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
  else if ( a4 && !(unsigned __int8)ExpTimerSetParametersAreValid(a4, a2, a3) )
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
      KeSetTimer2(Object, Object[18], a3, a4);
    else
      KeCancelTimer2((__int64)Object);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v4;
}
