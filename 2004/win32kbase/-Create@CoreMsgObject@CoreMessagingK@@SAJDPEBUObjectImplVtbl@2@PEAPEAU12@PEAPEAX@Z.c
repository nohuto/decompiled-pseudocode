/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0048980
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0047BCC (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C004884C (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(
        char a1,
        __int64 (**a2)(void),
        struct CoreMessagingK::CoreMsgObject **a3,
        void **a4)
{
  __int64 (*v5)(void); // rax
  unsigned int v9; // esi
  NTSTATUS result; // eax
  _DWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  __int128 v16; // [rsp+70h] [rbp-10h]

  *a4 = 0LL;
  v5 = *a2;
  v11[1] = 0;
  v15 = 0;
  *a3 = 0LL;
  v12 = 0LL;
  v11[0] = 48;
  v9 = v5() + 8;
  v13 = 0LL;
  v14 = a1 == 0 ? 0x200 : 0;
  v16 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, v11);
  if ( result >= 0 )
  {
    memset(0LL, 0, v9);
    MEMORY[0] = gSessionId;
    MEMORY[8] = a2;
    result = ObInsertObject(0LL, 0LL, 0x10000000u, 0, 0LL, a4);
    if ( result >= 0 )
    {
      *a3 = 0LL;
      return 0;
    }
  }
  return result;
}
