/*
 * XREFs of SecureDump_LogErrorEvent @ 0x140504E60
 * Callers:
 *     SecureDump_PrepareForInit @ 0x1403C8050 (SecureDump_PrepareForInit.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140504944 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140504EF4 (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SecureDump_LogErrorEvent(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  v1 = IoMgrTraceHandle;
  result = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_DumpEncryptionFailure);
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v4;
    return EtwWriteEx(v1, &IoMgr_DumpEncryptionFailure, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
