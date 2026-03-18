/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x140881CDC
 * Callers:
 *     NtDebugActiveProcess @ 0x140882C90 (NtDebugActiveProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x140881DA4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x1408821B0 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v10[3]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0LL;
  Object = 0LL;
  memset(v10, 0, sizeof(v10));
  v9 = 0LL;
  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v9);
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess((__int64)v10, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v4 = v9;
  }
  *a3 = v4;
  return result;
}
