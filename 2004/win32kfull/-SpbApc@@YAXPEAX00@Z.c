/*
 * XREFs of ?SpbApc@@YAXPEAX00@Z @ 0x1C021AA60
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveScreenBits @ 0x1C029F5A0 (GreSaveScreenBits.c)
 */

void __fastcall SpbApc(void *a1, void *a2, void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    v8 = a2;
    HMAssignmentUnlock(&v8);
  }
  if ( a3 )
    GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, a3, 0LL);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
}
