/*
 * XREFs of ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x18002CEE8
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002CE78 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x18002CF70 (-InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  int ConversationHost; // eax
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v2 = CMessageConversationHost::InitializeServer(this, &v10);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x60u, 0LL);
  }
  else
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 4))(
           *((_QWORD *)this + 4),
           &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
           (char *)this + 40);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x69u, 0LL);
    }
    else
    {
      ConversationHost = CoreUICallCreateConversationHost(
                           *((_QWORD *)this + 3),
                           *((_QWORD *)this + 4),
                           (char *)this + 48,
                           0LL);
      v4 = ConversationHost;
      if ( ConversationHost < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ConversationHost, 0x75u, 0LL);
      else
        return 0;
    }
  }
  return v4;
}
