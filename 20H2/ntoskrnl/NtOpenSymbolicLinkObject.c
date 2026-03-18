/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x1406B1A90
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1407B90A8 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140A73158 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall NtOpenSymbolicLinkObject(unsigned __int64 a1, ACCESS_MASK a2, __int64 a3)
{
  _QWORD *v5; // rbx
  char PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v5 = (_QWORD *)a1;
  v10[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(a3, (__int64)v7, PreviousMode, 0LL, a2, 0LL, (__int64)CurrentSilo, v10);
  *v5 = v10[0];
  return result;
}
