/*
 * XREFs of ndisIsBindPathEnabled @ 0x1C0124BE8
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C0124D50 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0124DF4 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C0124E84 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B94 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

__int64 __fastcall ndisIsBindPathEnabled(wchar_t *a1, char a2, bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const struct _NETSETUPPROPKEY *v7; // rdi
  KRegKey v9; // [rsp+20h] [rbp-60h] BYREF
  void **m_ptr; // [rsp+28h] [rbp-58h] BYREF
  NTSTATUS (__stdcall *v11)(HANDLE); // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-38h]
  __int128 v14; // [rsp+4Ch] [rbp-34h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+70h] [rbp-10h]
  char v18; // [rsp+74h] [rbp-Ch] BYREF

  v9.m_ptr = 0LL;
  v5 = KRegKey::Open(&v9, 8u, a1, 0LL);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == -1073741772 )
    {
LABEL_7:
      *a3 = a2 ^ 1;
      v6 = 0;
    }
  }
  else
  {
    v7 = (const struct _NETSETUPPROPKEY *)&v12;
    v13 = 80;
    v12 = xmmword_1C00D34F0;
    v15 = 82;
    v17 = 84;
    v14 = xmmword_1C00D34A8;
    m_ptr = (void **)&v9;
    v16 = xmmword_1C00D3598;
    while ( 1 )
    {
      v6 = NetSetupPropertyBag::ReadBoolean(&m_ptr, v7, a3);
      if ( v6 != -1073741772 )
        break;
      v7 = (const struct _NETSETUPPROPKEY *)((char *)v7 + 20);
      if ( v7 == (const struct _NETSETUPPROPKEY *)&v18 )
        goto LABEL_7;
    }
  }
  if ( v9.m_ptr )
  {
    m_ptr = (void **)v9.m_ptr;
    v11 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v11, &m_ptr);
  }
  return v6;
}
