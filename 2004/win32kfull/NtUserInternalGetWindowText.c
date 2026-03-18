/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00F6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F6BD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F6C3C (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00F6CFC (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int v11; // ebx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v12; // rdi
  struct _LARGE_UNICODE_STRING *StrName; // rax
  struct _LARGE_UNICODE_STRING *v14; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = v6;
  v11 = 0;
  if ( v6 )
  {
    v12 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184);
    if ( *(_QWORD *)(v6 + 184) )
    {
      v16 = 0LL;
      StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                  (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184),
                  (struct _LARGE_UNICODE_STRING *)&v16);
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v10 + 24), StrName);
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 40) + 184LL) )
      {
        v16 = 0LL;
        v14 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v12, (struct _LARGE_UNICODE_STRING *)&v16);
        v11 = TextCopy(v14, a2, (unsigned int)v3);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v11;
}
