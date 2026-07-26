/*
 * XREFs of ndisReadNicBindProperties @ 0x1C0125288
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012475C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C010216C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0124630 (ndisBlowStringListIntoAtoms.c)
 *     ndisReplaceBindTokens @ 0x1C01255A8 (ndisReplaceBindTokens.c)
 */

__int64 __fastcall ndisReadNicBindProperties(struct _GUID *a1, struct _GUID *a2)
{
  struct _GUID v2; // xmm0
  unsigned int v5; // ebx
  void **m_ptr; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v8; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS (__stdcall *v9)(HANDLE); // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Dst[256]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = *a1;
  v8.m_ptr = 0LL;
  *a2 = v2;
  netsetupBuildObjectPath(2LL, a1, 0, PropertyBag, Dst);
  v5 = KRegKey::Open(&v8, 1u, Dst, 0LL);
  if ( v5 == -1073741772 )
  {
    a2[4].Data1 = 1;
    netsetupBuildObjectPath(2LL, a1, 1, PropertyBag, Dst);
    v5 = KRegKey::Open(&v8, 1u, Dst, 0LL);
  }
  if ( !v5 )
  {
    m_ptr = (void **)&v8;
    v5 = ndisBlowStringListIntoAtoms(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D35B0, (__int64)&a2[1]);
    if ( !v5 )
    {
      v5 = ndisBlowStringListIntoAtoms(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D3580, (__int64)&a2[2]);
      if ( !v5 )
      {
        v5 = ndisBlowStringListIntoAtoms(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D3568, (__int64)&a2[3]);
        if ( !v5 )
          v5 = ndisReplaceBindTokens(a2, &m_ptr);
      }
    }
  }
  if ( v8.m_ptr )
  {
    m_ptr = (void **)v8.m_ptr;
    v9 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &m_ptr);
  }
  return v5;
}
