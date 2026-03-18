/*
 * XREFs of _NtUserInternalGetWindowText@12 @ 0x1D632
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _DesktopVerifyHeapLargeUnicodeString@8 @ 0x1D74A (_DesktopVerifyHeapLargeUnicodeString@8.c)
 *     _TextCopy@12 @ 0x1D7C6 (_TextCopy@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserInternalGetWindowText(int a1, _WORD *Address, unsigned int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  struct _LARGE_UNICODE_STRING *StrName; // eax
  struct _LARGE_UNICODE_STRING *v7; // eax
  int v9; // [esp+10h] [ebp-30h] BYREF
  int v10; // [esp+14h] [ebp-2Ch]
  int v11; // [esp+18h] [ebp-28h]
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v12; // [esp+20h] [ebp-20h]
  int v13; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]
  int v15; // [esp+48h] [ebp+8h]

  v3 = 0;
  EnterSharedCrit(0, 1);
  v4 = ValidateHwnd(a1);
  v5 = v4;
  v15 = v4;
  if ( v4 )
  {
    v12 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v4 + 100);
    if ( *(_DWORD *)(v4 + 100) )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                  (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v4 + 100),
                  (struct _LARGE_UNICODE_STRING *)&v9);
      DesktopVerifyHeapLargeUnicodeString(*(_DWORD *)(v5 + 12), StrName);
    }
    if ( a3 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a3 > 0x7FFFFFFF )
        ExRaiseAccessViolation();
      ProbeForWrite(Address, 2 * a3, 1u);
      *Address = 0;
      if ( *(_DWORD *)(*(_DWORD *)(v15 + 20) + 116) )
      {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v7 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v12, (struct _LARGE_UNICODE_STRING *)&v9);
        v3 = TextCopy(v7, a3);
      }
      v13 = v3;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
