/*
 * XREFs of IpmiLibpKcsBmcTransact @ 0x140652F10
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x14065327C (IpmiLibpKcsRequestAndReceive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IpmiLibpKcsHandleError @ 0x140652FB8 (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140653104 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140653374 (IpmiLibpKcsSendRequestToBMC.c)
 */

__int64 __fastcall IpmiLibpKcsBmcTransact(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v6; // rcx
  int v7; // edi
  _WORD *v8; // r8

  v3 = *a2;
  if ( *a2 >= 0x100u )
    v3 = 256;
  v7 = IpmiLibpKcsSendRequestToBMC(a1, (char *)a2 + 5, v3, a3);
  if ( !v7 )
  {
    v8 = a2 + 1;
    if ( a2[1] > 0x100u )
      *v8 = 256;
    v7 = IpmiLibpKcsReceiveResponseFromBmc(v6, (char *)a2 + 261, v8, a3);
  }
  if ( v7 < 0 )
  {
    v7 = IpmiLibpKcsHandleError(v6, a3);
    if ( v7 < 0 )
    {
      if ( qword_140C10CC8 )
        qword_140C10CC8(qword_140C10CD8);
    }
  }
  return (unsigned int)v7;
}
