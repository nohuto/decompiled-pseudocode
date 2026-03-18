/*
 * XREFs of NtOpenDirectoryObject @ 0x1406E27B0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenDirectoryObject(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, (__int64)ObpDirectoryObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)v9);
  *a1 = v9[0];
  return result;
}
