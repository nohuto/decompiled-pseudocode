/*
 * XREFs of RecordPnpNotification @ 0x1C0142A00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 */

int __fastcall RecordPnpNotification(int a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int32 v11; // r9d
  __int64 v12; // r8
  unsigned __int16 *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r10
  char v16; // cl

  v3 = 0;
  v4 = 0LL;
  if ( gpPnpNotificationRecord )
    goto LABEL_5;
  v8 = Win32AllocPoolZInit(200LL * gdwPnpNotificationRecSize, 0x70707355u);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpPnpNotificationRecord, (signed __int64)v8, 0LL) )
      Win32FreePool((__int64)v8, v9, v10);
LABEL_5:
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)&giPnpSeq, 1u);
    *((_DWORD *)gpPnpNotificationRecord + 50 * (v11 % gdwPnpNotificationRecSize)) = v11 + 1;
    v12 = 200LL * (v11 % gdwPnpNotificationRecSize);
    *(_DWORD *)((char *)gpPnpNotificationRecord + v12 + 128) = (MEMORY[0xFFFFF78000000320]
                                                              * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_QWORD *)((char *)gpPnpNotificationRecord + v12 + 8) = KeGetCurrentThread();
    *(_DWORD *)((char *)gpPnpNotificationRecord + v12 + 4) = a1;
    if ( a1 )
    {
      if ( a1 == 8 || a1 == 24 || !a2 )
      {
LABEL_16:
        *((_BYTE *)gpPnpNotificationRecord + v12 + v3 + 32) = 0;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v12 + 16) = a2;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v12 + 24) = v4;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v12 + 112) = a3;
        *(_QWORD *)((char *)gpPnpNotificationRecord + v12 + 120) = 0LL;
        LODWORD(v8) = RtlWalkFrameChain((PVOID *)((char *)gpPnpNotificationRecord + v12 + 136), 8u, 0);
        return (int)v8;
      }
      v4 = *(_QWORD *)a2;
      v13 = a2 + 104;
    }
    else
    {
      v13 = a2;
      a2 = 0LL;
    }
    if ( v13 && *((_QWORD *)v13 + 1) )
    {
      v14 = v12;
      v15 = 0LL;
      do
      {
        if ( v3 >= *v13 >> 1 )
          break;
        ++v3;
        v16 = *(_BYTE *)(v15 + *((_QWORD *)v13 + 1));
        v15 += 2LL;
        *((_BYTE *)gpPnpNotificationRecord + v14 + 32) = v16;
        ++v14;
      }
      while ( v3 < 0x4F );
    }
    goto LABEL_16;
  }
  return (int)v8;
}
