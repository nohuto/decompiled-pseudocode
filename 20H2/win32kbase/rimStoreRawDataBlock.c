/*
 * XREFs of rimStoreRawDataBlock @ 0x1C0172358
 * Callers:
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171650 (RIMStoreRawDataInPointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStoreRawDataBlock(__int64 a1, __int64 a2, const void *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  size_t v6; // rbp
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v6 = (unsigned int)a4;
  if ( !(_DWORD)a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
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
          Win32FreePool((__int64)v9);
          v9 = 0LL;
        }
        if ( v9 )
        {
          v11 = (void *)v9[1];
          *(_DWORD *)v9 = *a6;
          *((_DWORD *)v9 + 1) = v6;
          memmove(v11, a3, v6);
          v9[2] = 0LL;
          v16 = *(_QWORD *)(a5 + 64);
          if ( v16 )
          {
            *(_QWORD *)(v16 + 16) = v9;
          }
          else
          {
            if ( *(_DWORD *)(a5 + 48) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
            if ( *(_QWORD *)(a5 + 56) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
            *(_QWORD *)(a5 + 56) = v9;
          }
          *(_QWORD *)(a5 + 64) = v9;
          *(_DWORD *)(a5 + 48) = *a6;
        }
      }
    }
  }
}
