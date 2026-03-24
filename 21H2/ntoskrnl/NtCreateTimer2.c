/*
 * XREFs of NtCreateTimer2 @ 0x1406D4930
 * Callers:
 *     NtCreateIRTimer @ 0x14078ECD0 (NtCreateIRTimer.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x1402E9220 (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x1402E9260 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x1403813E0 (KeInitializeIRTimer.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x1407728E8 (ExpCheckIRTimerAccess.c)
 */

__int64 __fastcall NtCreateTimer2(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int *v9; // r10
  char PreviousMode; // si
  int Object; // ecx
  PADAPTER_OBJECT v12; // rbx
  __int64 result; // rax
  unsigned int v14; // [rsp+50h] [rbp-28h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF

  v16 = 0LL;
  DmaAdapter = 0LL;
  if ( !ExpExTimerAttributesAreValid(a4) )
    return 3221225714LL;
  if ( v8 )
    return 3221225713LL;
  if ( v9 && (a4 & 2) == 0 )
    return 3221225712LL;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v6 = (__int64)v9;
      v14 = *(_DWORD *)v6;
    }
  }
  else if ( v9 )
  {
    v14 = *v9;
  }
  if ( (a4 & 2) == 0 || (LOBYTE(v6) = PreviousMode, result = ExpCheckIRTimerAccess(v14, v6), (int)result >= 0) )
  {
    LOBYTE(v7) = PreviousMode;
    Object = ObCreateObjectEx(v7, (_DWORD)ExpIRTimerObjectType, 0, PreviousMode);
    if ( Object >= 0 )
    {
      v12 = DmaAdapter;
      if ( (a4 & 2) != 0 )
        KeInitializeIRTimer((__int64)DmaAdapter, 0LL, 0LL, (unsigned __int8 *)&v14, a4);
      else
        KeInitializeTimer2((__int64)DmaAdapter, 0LL, 0LL, a4);
      v12[8].DmaOperations = 0LL;
      *(_DWORD *)&v12[10].Version = a4;
      Object = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&v16);
      v14 = Object;
      if ( Object >= 0 )
        *a1 = v16;
    }
    return (unsigned int)Object;
  }
  return result;
}
