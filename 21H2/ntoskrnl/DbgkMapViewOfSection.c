/*
 * XREFs of DbgkMapViewOfSection @ 0x1406C0FF4
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     MiMapViewOfSectionExCommon @ 0x1406C0BF8 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1407020E0 (NtMapViewOfSection.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x1408872B4 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140887CF4 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x140887DA8 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(
        _KPROCESS *Object,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rbx
  char *Teb; // rbx
  PIMAGE_NT_HEADERS v14; // rcx
  _QWORD v16[34]; // [rsp+30h] [rbp-138h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v11 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)&v11[1].SwapListEntry + 2);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      if ( Object[1].AffinityPadding[9] )
      {
        v12 = KeGetCurrentThread();
        if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = (char *)v12->Teb;
        if ( Teb && Object == v11->Process )
        {
          LODWORD(CurrentThread) = DbgkpSuppressDbgMsg(Teb);
          if ( (_DWORD)CurrentThread )
            return (int)CurrentThread;
          v16[9] = Teb + 40;
        }
        if ( a2 )
          v16[6] = DbgkpSectionToFileHandle(a2);
        else
          v16[6] = 0LL;
        v16[7] = a3;
        v16[8] = __PAIR64__(a7, a6);
        if ( a3 )
          v14 = RtlImageNtHeader(a3);
        else
          v14 = 0LL;
        if ( v14 )
          v16[8] = *(_QWORD *)&v14->FileHeader.PointerToSymbolTable;
        v16[0] = 0x800500028LL;
        LODWORD(v16[5]) = 5;
        LODWORD(CurrentThread) = DbgkpSendApiMessage(Object);
        if ( v16[6] )
          LODWORD(CurrentThread) = ObCloseHandle((HANDLE)v16[6], 0);
      }
    }
  }
  return (int)CurrentThread;
}
