/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1406D5C2C
 * Callers:
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MiFreeEnclaveModules @ 0x1408CE5D0 (MiFreeEnclaveModules.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     DbgkpSendApiMessage @ 0x140882D44 (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x140883838 (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *v6; // rcx
  void *Teb; // rcx
  _QWORD v8[34]; // [rsp+20h] [rbp-128h] BYREF

  memset(v8, 0, sizeof(v8));
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( Object[1].AffinityPadding[9] )
      {
        v6 = KeGetCurrentThread();
        if ( (v6->MiscFlags & 0x400) != 0 || v6->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = v6->Teb;
        if ( !Teb || Object != CurrentThread->Process || (result = DbgkpSuppressDbgMsg(Teb), !(_DWORD)result) )
        {
          v8[6] = a2;
          v8[0] = 0x800380010LL;
          LODWORD(v8[5]) = 6;
          return DbgkpSendApiMessage(Object);
        }
      }
    }
  }
  return result;
}
