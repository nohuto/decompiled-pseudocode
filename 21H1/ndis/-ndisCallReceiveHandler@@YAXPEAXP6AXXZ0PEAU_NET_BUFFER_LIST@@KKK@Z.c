/*
 * XREFs of ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0007E90
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C003DB94 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C00C65C0 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisCallReceiveHandler(
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

  if ( byte_1C00E3EA8 )
  {
    if ( *(_BYTE *)a1 == 5 )
    {
      v11 = a1[102];
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 12) & 1) != 0 )
          PktMonClientNblLogNdis(a1 + 101, a4, a3, 1LL);
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v12 = a1[98]) != 0 )
    (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int, __int64, void (*)(void)))ndisVerifierNdisDispatch
     + 14))(
      a3,
      a4,
      a5,
      a6,
      a7,
      v12,
      a2);
  else
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, unsigned int))a2)(a3, a4, a5, a6, a7);
}
