/*
 * XREFs of CreateServiceSid @ 0x1C02EF3A8
 * Callers:
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02EF4A8 (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0026DF8 (--$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMAT.c)
 */

_QWORD *__fastcall CreateServiceSid(_QWORD *a1, ULONG *a2)
{
  ULONG v4; // eax
  PVOID PoolWithTag; // rax
  ULONG v6; // edi
  void *v7; // rbx
  PULONG v8; // rax
  ULONG v9; // ecx
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  void (__fastcall *v12)(void *); // [rsp+28h] [rbp-20h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x4B677844u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u) >= 0 )
    {
      do
      {
        v8 = RtlSubAuthoritySid(v7, v6);
        v9 = *a2;
        ++v6;
        ++a2;
        *v8 = v9;
      }
      while ( v6 < 6 );
      *a1 = v7;
    }
    else
    {
      *a1 = 0LL;
      v12 = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
      v11 = v7;
      wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
        (__int64 (__fastcall **)(_QWORD))&v12,
        &v11);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
