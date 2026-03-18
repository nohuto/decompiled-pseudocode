/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x140927C7C
 * Callers:
 *     NtDebugActiveProcess @ 0x140928C60 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140928158 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  _DWORD *v8; // r9
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v11[3]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0LL;
  Object = 0LL;
  memset(v11, 0, sizeof(v11));
  v10 = 0LL;
  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v10);
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v11, v8);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess((__int64)v11, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v4 = v10;
  }
  *a3 = v4;
  return result;
}
