/*
 * XREFs of rimStoreRawDataBlock @ 0x1C017AAB8
 * Callers:
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0179DB0 (RIMStoreRawDataInPointerDeviceFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStoreRawDataBlock(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  size_t v6; // rbp
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax

  v6 = a4;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  *a6 = 0;
  if ( a3 )
  {
    v8 = *(_DWORD *)(a5 + 48);
    *a6 = v8 + 1;
    if ( v8 != -1 )
    {
      v9 = Win32AllocPoolZInit(0x18uLL, 0x64727352u);
      if ( v9 )
      {
        v10 = Win32AllocPool(v6, 0x64727352u);
        v9[1] = v10;
        if ( !v10 )
        {
          Win32FreePool((__int64)v9, v11, v12);
          v9 = 0LL;
        }
        if ( v9 )
        {
          v13 = (void *)v9[1];
          *(_DWORD *)v9 = *a6;
          *((_DWORD *)v9 + 1) = v6;
          memmove(v13, a3, v6);
          v9[2] = 0LL;
          v15 = *(_QWORD *)(a5 + 64);
          if ( v15 )
          {
            *(_QWORD *)(v15 + 16) = v9;
          }
          else
          {
            if ( *(_DWORD *)(a5 + 48) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
            if ( *(_QWORD *)(a5 + 56) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
            *(_QWORD *)(a5 + 56) = v9;
          }
          *(_QWORD *)(a5 + 64) = v9;
          *(_DWORD *)(a5 + 48) = *a6;
        }
      }
    }
  }
}
