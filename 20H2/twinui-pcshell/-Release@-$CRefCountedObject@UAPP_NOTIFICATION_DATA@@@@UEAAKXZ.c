/*
 * XREFs of ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x180068110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::Release(void *a1, const struct std::nothrow_t *a2)
{
  unsigned __int32 v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = _InterlockedDecrement((volatile signed __int32 *)a1 + 10);
  if ( !v3 && a1 )
  {
    operator delete(*((void **)a1 + 1), a2);
    v4 = *((_QWORD *)a1 + 4);
    if ( v4 )
    {
      *((_QWORD *)a1 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      *((_QWORD *)a1 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  }
  return v3;
}
