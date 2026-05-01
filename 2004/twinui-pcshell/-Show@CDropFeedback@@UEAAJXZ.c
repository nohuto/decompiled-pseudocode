/*
 * XREFs of ?Show@CDropFeedback@@UEAAJXZ @ 0x180423BB0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180022D14 (McGenEventWrite_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::Show(HWND *this)
{
  unsigned int v1; // r14d
  __int64 v3; // rdx
  unsigned int i; // esi
  HWND v5; // rbx
  HWND v6; // rcx
  __int64 v7; // r8
  int pvAttribute; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0;
  pvAttribute = 1;
  DwmSetWindowAttribute(this[5], 0xDu, &pvAttribute, 4u);
  ShowWindow(this[5], 4);
  if ( ((_BYTE)this[12] & 1) != 0 )
  {
    if ( SetForegroundWindow(this[5]) )
    {
      if ( ((_BYTE)this[12] & 2) != 0 && GetKeyState(91) >= 0 && (GetKeyState(92) & 0x8000) == 0 )
        PostMessageW(this[5], 0x101u, 0x5BuLL, 0LL);
    }
    else
    {
      v1 = -2147019873;
    }
  }
  (*(void (__fastcall **)(HWND, GUID *))(*(_QWORD *)this[15] + 24LL))(this[15], &GUID_NULL);
  (*(void (__fastcall **)(HWND, unsigned int *))(*(_QWORD *)this[13] + 24LL))(this[13], &v10);
  for ( i = 0; i < v10; ++i )
  {
    v11.Ptr = 0LL;
    v5 = this[13];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    if ( (*(int (__fastcall **)(HWND, _QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v5 + 32LL))(
           v5,
           i,
           &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
           &v11) >= 0 )
      (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v11.Ptr + 72LL))(v11.Ptr);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  LOBYTE(v3) = 1;
  (*(void (__fastcall **)(HWND, __int64))(*(_QWORD *)this[15] + 32LL))(this[15], v3);
  v6 = this[5];
  pvAttribute = 0;
  DwmSetWindowAttribute(v6, 0xDu, &pvAttribute, 4u);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DropFeedback_Show_Info, v7, 1u, &v11);
  return v1;
}
