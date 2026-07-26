/*
 * XREFs of ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0005980
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0005540 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C003E610 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6C98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisCallSendHandler(
        _QWORD *a1,
        void (*a2)(void),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx

  if ( byte_1C00E3FD0 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v11 = a1[114];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 52) & 1) != 0 )
          PktMonClientNblLogNdis(a1 + 111, a4, a3, 2LL);
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v12 = a1[98]) != 0 )
    (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, __int64, void (*)(void)))ndisVerifierNdisDispatch
     + 10))(
      a3,
      a4,
      a5,
      a7,
      v12,
      a2);
  else
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a2)(a3, a4, a5, a7);
}
