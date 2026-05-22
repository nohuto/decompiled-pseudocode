/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800A2CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1800A2C64 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpApiWrapper::Details::OnDeviceNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rax
  const wchar_t *v9; // rsi
  size_t v10; // rbx
  unsigned int v11; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 && *(_QWORD *)a2 == a1 )
  {
    if ( a3 && (v6 = a3 - 1) != 0 )
    {
      v7 = v6 - 6;
      if ( v7 && (unsigned int)(v7 - 1) > 1 )
        return 0LL;
      v8 = 8LL;
    }
    else
    {
      v8 = 24LL;
    }
    v9 = (const wchar_t *)(a4 + v8);
    v10 = ((unsigned __int64)a5 - v8) >> 1;
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = wcsnlen(v9, v10);
      if ( v11 )
      {
        if ( v11 < v10 )
        {
          Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v9, v11);
          try
          {
            (*(void (**)(void))(a2 + 8))();
          }
          catch ( ... )
          {
          }
        }
      }
    }
  }
  return 0LL;
}
