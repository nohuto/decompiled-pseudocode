/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0048DEC
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0048AB0 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C0048DB4 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00490D4 (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@66@Z @ 0x1C01FACD4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVa.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  bool v2; // di
  __int64 v3; // rbx
  int DoNotUseThisField_low; // r15d
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  bool v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+64h] [rbp-9Ch]
  __int64 v16; // [rsp+68h] [rbp-98h]
  char *v17; // [rsp+70h] [rbp-90h]
  _DWORD v18[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+94h] [rbp-6Ch]
  __int128 v23; // [rsp+98h] [rbp-68h]
  _QWORD v24[10]; // [rsp+B0h] [rbp-50h] BYREF

  v18[1] = 0;
  v2 = 0;
  v22 = 0;
  v3 = 0LL;
  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v7 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  if ( a2->u1.s1.DataLength == 8 )
  {
    v13 = 0LL;
    v8 = CoreMessagingK::Runtime::Alloc(32LL, 1229147459LL, &v13);
    if ( v8 >= 0 )
    {
      v3 = v13;
      *(_DWORD *)(v13 + 16) = 1;
    }
    v2 = v8 == 0;
  }
  v19 = 0LL;
  v20 = 0LL;
  v18[0] = 48;
  v21 = 512;
  v23 = 0LL;
  memset(v24, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v12 = v2;
  LODWORD(v24[0]) = 0x100000;
  v24[2] = 0xFFFFLL;
  v11 = ZwAlpcAcceptConnectPort(v3 & -(__int64)v2, v9, 0LL, v18, v24, v3 & -(__int64)v2, a2, 0LL, v12);
  if ( v11 >= 0 && v2 )
  {
    *(_DWORD *)(v3 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v3 + 12) = v7;
    *(_QWORD *)(v3 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v3;
    v3 = 0LL;
  }
  if ( v3 )
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v3);
  if ( (unsigned int)dword_1C0245450 > 5 )
  {
    v16 = *((_QWORD *)a1 + 4);
    v17 = (char *)a1 + 16;
    v14 = v7;
    v15 = DoNotUseThisField_low;
    LODWORD(v13) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      &unk_1C021E0C5);
  }
}
