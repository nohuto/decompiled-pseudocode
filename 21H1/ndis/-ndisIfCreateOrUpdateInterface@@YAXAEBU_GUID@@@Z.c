/*
 * XREFs of ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B1B54
 * Callers:
 *     ndisPnpRefresh @ 0x1C0117C54 (ndisPnpRefresh.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C00212A0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00B1334 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C01056C4 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C0126AAC (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ACC (ndisIfUpdateIfBlockFromPersistedState.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(const struct _GUID *a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  KIRQL v5; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v7; // rdi
  KIRQL v8; // bl
  int Flink_high; // ebx
  KIRQL v10; // si
  struct KRegKey v11; // [rsp+58h] [rbp+38h] BYREF
  struct KRegKey v12; // [rsp+60h] [rbp+40h] BYREF
  NTSTATUS (__stdcall *v13)(HANDLE); // [rsp+68h] [rbp+48h] BYREF

  v11.m_ptr = 0LL;
  v4 = ndisIfOpenInterfacePersistedStorage(a1, &v11, a3);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741772 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
    v7 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[89].Blink, 0xFu);
      ++LODWORD(v7[81].Blink);
    }
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( v11.m_ptr )
    {
      if ( v7 )
      {
        ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v7, &v11);
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v7, 0xFu);
        KeReleaseSpinLock(&ndisIfListLock, v8);
      }
      else
      {
        v12.m_ptr = 0LL;
        ndisLoadNetworkInterfaceFromPersistedState(a1, &v11, &v12);
        if ( v12.m_ptr )
        {
          v13 = ZwClose;
          wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
        }
      }
    }
    else
    {
      if ( !v7 )
        return;
      Flink_high = 0;
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( LODWORD(v7[87].Blink) == 1 )
        Flink_high = HIDWORD(v7->Flink);
      IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v7, 0xFu);
      KeReleaseSpinLock(&ndisIfListLock, v10);
      if ( Flink_high )
        ndisIfDeregisterInterfaceEx(Flink_high, RunAsynchronous);
    }
  }
  if ( v11.m_ptr )
  {
    v12.m_ptr = v11.m_ptr;
    v13 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
  }
}
