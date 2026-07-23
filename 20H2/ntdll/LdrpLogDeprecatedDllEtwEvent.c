/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x180060158
 * Callers:
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x180042EC0 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18004F1F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800503E0 (EtwNotificationUnregister.c)
 *     CompatCachepLookupCdb @ 0x180073584 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

int __fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rdi
  wchar_t *v4; // rbx
  wchar_t *Heap; // rax
  unsigned int v6; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-28h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-20h] BYREF

  v2 = *a1;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v4 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  LODWORD(Heap) = CompatCachepLookupCdb(v4);
  if ( (_DWORD)Heap )
  {
    LODWORD(Heap) = EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle);
    if ( !(_DWORD)Heap )
    {
      v6 = *a1 + 2;
      UserData.Ptr = (unsigned __int64)v4;
      UserData.Size = v6;
      UserData.Reserved = 0;
      EtwEventWrite(RegHandle, &DeprecatedDll, 1u, &UserData);
      LODWORD(Heap) = EtwNotificationUnregister(RegHandle, 0LL);
    }
    if ( v4 != *v3 )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return (int)Heap;
}
